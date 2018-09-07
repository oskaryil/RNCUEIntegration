//  Created by react-native-create-bridge
#import <Foundation/Foundation.h>
#import "CueBridge.h"

// import RCTEventDispatcher
#if __has_include(<React/RCTEventDispatcher.h>)
#import <React/RCTEventDispatcher.h>
#elif __has_include(“RCTEventDispatcher.h”)
#import “RCTEventDispatcher.h”
#else
#import “React/RCTEventDispatcher.h” // Required when used as a Pod in a Swift project
#endif

#import <LightShowLib/CUEViewController.h>
#import <LightShowLib/CUEMenuViewController.h>
#import <LightShowLib/CUEJASidePanelController.h>
#import <LightShowLib/UIViewController+CUEJASidePanel.h>
#import <LightShowLib/CUEController.h>
#import <LightShowLib/LSPrefixHeader.pch>

//if you are using CUE's mic on-boaridng
#import <LightShowLib/CUEMicViewController.h>

//if you will display CUE's light show instructional view
#import <LightShowLib/CUELSInstructionalViewController.h>

@implementation CueBridge {

  RCTEventDispatcher *_eventDispatcher;
  
}


- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher
{
  if ((self = [super init])) {
    _eventDispatcher = eventDispatcher;
    self.controller =  [CUEController  sharedInstance];
    self.controller.delegate =  self;
  }
    
  return self;
}

#pragma mark Life Cycle
//cancel current light show when view disappears, unless you wish the light show to extent to other views
- (void) viewDidDisappear:(BOOL)animated
{
  [super viewDidDisappear:animated];
  self.controller.lightShowRunning = NO;
}
- (void) viewWillAppear:(BOOL)animated
{
  [super viewWillAppear:animated];
  
  //make sure brightness is set to max
  [[UIScreen mainScreen] setBrightness:1.0];
  
  //make sure CUEController delegate is always set to self if:
  // You want this VC to be responsible for handling all light show callbacks
  self.controller.delegate = self;
  
}
- (void) viewWillDisappear: (BOOL)animated
{
  [super viewWillDisappear:animated];
  
  //when the view disappears, if you wish to cancel all CUEController activity, simply call:
  [self.controller clearAll];
}

#pragma mark CUEControllerDelegate

- (BOOL) shouldInitiateLightShowWithID: (NSString *) lightShowID {
  //create light show modal VC
  self.lightShowModalVC = [self.controller createAndDisplayLightShowController:0.25f onViewController:self];
  
  //if light show modal created successfully & you want to initiatte a light show, return true
  if (self.lightShowModalVC) {
    return true;
  }
  
  return false;
}

- (BOOL) shouldInitiateSelfieCamWithID:(NSString *)selfieCamID {
  return true;
}

- (UIViewController *) getPresentingViewController
{
  return self;
}

- (void) didInitiateLightShowWithID:(NSString *)lightShowID
{
  
}

- (void) didEndLightShowWithID: (NSString *) lightShowID
{
  //remove light show modal ViewController
//  [self removeChildVC: (UIViewController *) self.lightShowModalVC];
}

//custom ultrasonic response method
- (void) didHearToneWithID:(NSString *)toneID
{
  //hey you detected an ultrasonic payload. Do with it whatever you want.
}

@end
