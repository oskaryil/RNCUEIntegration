//
//  CUESelfieCamViewController.h
//  LightShowLib
//
//  Created by Jameson Rader on 7/8/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SelfieCamObject;

@protocol CUESelfieCamDelegate <NSObject>
- (void) didPressShareButton: (SelfieCamObject *) selfieCamObj;
- (void) didPressXButton;
- (void) didFailToTakePhotoWithError: (NSError *) error;
- (void) didDenyCameraPermission: (BOOL) firstTime;
@optional
- (void) didSaveSelfie: (UIImage *) selfie;
- (void) didFailToSaveWithError: (NSError *) error;
@end

@interface CUESelfieCamViewController : UIViewController

//check if SelfieCam has requisite permissions to operate
+ (BOOL) queryPermissions;

- (void) startSelfie;

//init
- (instancetype)initWithSelfieCam: (SelfieCamObject *) selfieCamObj;

//set image overlays
- (void) loadOverlaysWithURLs: (NSMutableDictionary *) imageURLs andImages: (NSArray *) images;

//initiate onboarding
- (void) appearInstructionalVC;

//set size
- (void) setConstraintsToParentView: (UIView *) parentView withVerticalMargin: (CGFloat) verticalMargin andHorizontalMargin: (CGFloat) horizontalMargin;

//delegate
@property (weak, nonatomic) id<CUESelfieCamDelegate> delegate;

//main selfie cam object
@property SelfieCamObject *selfieCamObj;

@end
