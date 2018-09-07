//
//  CUEController.h
//  Light Show
//
//  Created by Jameson Rader on 3/30/18.
//  Copyright © 2018 CUE Audio, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

#import "LSConfig.h"

@class CUESelfieCamViewController;
@class CUELightShowModalViewController;
@class SelfieCamObject;
@class LightShow;

@protocol CUEControllerLightShowDelegate <NSObject>
- (BOOL) shouldInitiateLightShowWithID: (NSString *) lightShowID;
- (BOOL) shouldInitiateSelfieCamWithID: (NSString *) selfieCamID;
- (UIViewController *) getPresentingViewController;
@optional
- (void) didHearToneWithID: (NSString *) toneID;
- (void) didInitiateLightShowWithID: (NSString *) lightShowID;
- (void) didEndLightShowWithID: (NSString *) lightShowID;
- (void) didExtractLSJSON: (NSString*) jsonString fromDisk: (BOOL) fromDisk;
- (void) presentModalViewController:(UIViewController *)viewControllerToPresent
                     animated:(BOOL)flag
                   completion:(void (^)(void))completion;
@end


//Light Show ViewController w/o UI
@interface CUEController : NSObject

//delegates
@property (weak, nonatomic) id<CUEControllerLightShowDelegate> delegate;

//light show fundamentals
@property NSMutableArray *currentLightShows;
@property (weak, nonatomic) UIImageView *lightShowImageView;
@property UIView *colorView;

//camera
@property float cameraTimerFrequency;
@property NSString *camTimerLabelText;

//Emit sound effects
@property AVAudioPlayer *player;

//sections
@property (nonatomic, strong) NSArray *sections;
@property NSString *selectedSection;

//public methods
- (void) clearAll;
- (void) setLightShowRunning:(BOOL)lightShowRunning;
- (BOOL) tryStartListening;
+ (id) sharedInstance;
- (void) extractProductObjsFromJSON: (NSString*) jsonString fromDisk: (BOOL) fromDisk;
+ (int) getBitDifferenceBetween: (NSString *) tone1 and: (NSString *) tone2;

//launch Live Event
- (void) initiateLightShow: (LightShow *) champ;
- (void) initiateSelfieCam: (SelfieCamObject *) selfie;

//modal light show
+ (BOOL) shouldInitiateForID: (NSString *) lightShowID;
- (CUELightShowModalViewController *) createAndDisplayLightShowController: (NSTimeInterval) fadeTime onViewController: (UIViewController *) parentVC;
- (void) removeCurrentLightShowModal;

//alerts
+ (UIAlertController *) createAlert: (CUEAlertType) type withSuccessHandler:(void (^)(UIAlertAction *action))successHandler andFailureHandler:(void (^)(UIAlertAction *action))failureHandler;
@end
