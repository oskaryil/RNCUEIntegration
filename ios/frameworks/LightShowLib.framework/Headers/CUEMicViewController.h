//
//  CUEMicViewController.h
//  LightShowLibBundle
//
//  Created by Jameson Rader on 5/28/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CUEMicViewDelegate <NSObject>
- (void) xButtonPressed: (id) sender;
- (void) micViewButtonPushed: (id) sender;
@optional
- (void) micViewDidFadeIn;
@end

@interface CUEMicViewController : UIViewController

//delegate
@property (weak, nonatomic) id<CUEMicViewDelegate> delegate;

- (void) fadeInXButton: (NSTimeInterval) fadeTime;
- (void) fadeInView: (NSTimeInterval) fadeTime;
- (void) setConstraintsToParentView: (UIView *) parentView withVerticalMargin: (CGFloat) verticalMargin andHorizontalMargin: (CGFloat) horizontalMargin;

@end
