//
//  SelfieCamObject.h
//  LightShowLib
//
//  Created by Jameson Rader on 7/12/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;

@interface SelfieCamObject : NSObject

//binary of trigger
@property NSString *triggerString;

//text at top of countdown view
@property NSString *titleText;

//ID
@property long scID;

//countdown duration
@property float duration;

//delay to show selfie cam
@property float delay;

//array of filter URLs (either on disk using kBundle root or valid PNG urls)
@property NSMutableDictionary *filterURLs;

//text to accompany social media posts (e.g., hashtags)
@property NSString *shareText;

//image at bottom of countdown view
@property NSString *bottomIMGURL;

//has "No Filter" option
@property BOOL hasNoFilterOption;

@property UIImage *origSelfie;
@property UIImage *selfie;

@end
