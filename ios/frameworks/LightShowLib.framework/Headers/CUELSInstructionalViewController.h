//
//  CUELSInstructionalViewController.h
//  LightShowLibBundle
//
//  Created by Jameson Rader on 5/28/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LSConfig.h"

@protocol CUELSInstructionalViewDelegate <NSObject>
- (void) instructionalContinueButtonPushed: (id) sender withType: (CUELSInstructionalViewControllerType) type;
@optional
- (void) instructionalViewDidFadeIn;
@end

@interface CUELSInstructionalViewController : UIViewController

//delegate
@property (weak, nonatomic) id<CUELSInstructionalViewDelegate> delegate;

//instructional type
@property CUELSInstructionalViewControllerType instructionalType;

- (void) fadeInView: (NSTimeInterval) fadeTime;
- (void) setConstraintsToParentView: (UIView *) parentView withVerticalMargin: (CGFloat) verticalMargin andHorizontalMargin: (CGFloat) horizontalMargin;

@end
