//  Created by react-native-create-bridge

// import UIKit so you can subclass off UIView
#import <UIKit/UIKit.h>
#import <LightShowLib/CUEViewController.h>
#import <LightShowLib/CUEController.h>


// import RCTBridge
#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include(“RCTBridge.h”)
#import “RCTBridge.h”
#else
#import “React/RCTBridge.h” // Required when used as a Pod in a Swift project
#endif


@class RCTEventDispatcher;



@interface CueBridge : UIViewController <CUEControllerLightShowDelegate>
  // Define view properties here with @property
  @property (nonatomic, assign) NSString *exampleProp;

  @property CUEController *controller;

  @property CUELightShowModalViewController *lightShowModalVC;


  - (void) viewDidDisappear:(BOOL)animated;

  - (void) viewWillAppear:(BOOL)animated;

  - (void) viewWillDisappear: (BOOL)animated;

  // Initializing with the event dispatcher allows us to communicate with JS
  - (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

@end
