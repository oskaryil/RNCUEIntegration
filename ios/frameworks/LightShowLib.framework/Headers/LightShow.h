//
//  LightShow.h
//  CUEController
//
//  Created by Jameson Rader on 4/2/18.
//  Copyright © 2018 CUE Audio, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LightShow : NSObject

@property NSDictionary *sectionJSON;
@property NSArray *sequence;
@property float startTime;
@property NSString *triggerString;
@property long lsID;

@property NSString *alertTitle;
@property NSString *alertBody;
@property NSString *alertButtonTitle;

@end
