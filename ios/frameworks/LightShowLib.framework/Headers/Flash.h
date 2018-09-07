//
//  Flash.h
//  waveform
//
//  Created by Jameson Rader on 3/1/16.
//  Copyright © 2016 Q Raider. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIColor;

@interface Flash : NSObject

@property unsigned short int type;
@property float duration;
@property long startTime;
@property float percentage;
@property UIColor *selectedColor;

@property UIColor *secondaryColor;
@property float secondaryProb;
@property UIColor *tertiaryColor;
@property float tertiaryProb;
@property NSURL *url;
@property float intensity;
@property float volume;
@property NSString *extension;

@end
