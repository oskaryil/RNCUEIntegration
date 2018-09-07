//
//  UIColor+HexString.h
//  LightShowLib
//
//  Created by Jameson Rader on 8/2/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)

+ (UIColor *) colorWithHexString: (NSString *) hexString;
+ (CGFloat) colorComponentFrom: (NSString *) string start: (NSUInteger) start length: (NSUInteger) length;

@end
