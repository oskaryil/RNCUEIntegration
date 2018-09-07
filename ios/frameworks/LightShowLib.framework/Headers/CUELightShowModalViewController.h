//
//  LightShowOverlayViewController.h
//  LightShowLib
//
//  Created by Jameson Rader on 5/20/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CUELightShowModalViewController : UIViewController

@property UIView *lightShowColorView;
@property UIImageView *lightShowImageView;

- (void) didMoveToParentViewController:(UIViewController *)parent withFadeTime: (NSTimeInterval) fadeTime;

@end
