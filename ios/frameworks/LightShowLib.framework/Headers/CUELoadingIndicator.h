//
//  CUELoadingIndicator.h
//  UPN Demo
//
//  Created by Jameson Rader on 3/12/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LSConfig.h"

@interface CUELoadingIndicator : UIImageView

@property CUELoadingIndicatorColor loadingColor;

- (void) startLoadingAnimation;

- (void) startLoadingAnimationWithFadeTime: (NSTimeInterval) fadeTime;

- (void) startLoadingAnimationWithFrameDuration: (NSTimeInterval) frameDuration repeatCount: (NSInteger) repeatCount;

- (void) startLoadingAnimationWithFadeTime: (NSTimeInterval) fadeTime andFrameDuration: (NSTimeInterval) frameDuration repeatCount: (NSInteger) repeatCount;

- (void) stopLoadingAnimationWithFadeTime: (NSTimeInterval) fadeTime;

- (void) stopLoadingAnimation;

@end
