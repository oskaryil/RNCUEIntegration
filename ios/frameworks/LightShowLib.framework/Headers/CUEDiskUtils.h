//
//  CUEDiskUtils.h
//  LightShowLibBundle
//
//  Created by Jameson Rader on 7/19/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CUEDiskUtils : NSObject

+ (void)writeString:(NSString*)aString toFile: (NSString *) fileName;
+ (NSString*)readStringFromFile: (NSString *) fileName;
+ (id) readJSONValue: (NSString *) key FromFile: (NSString *) fileName;
+ (NSDictionary *) readJSONValues: (NSArray *) keys FromFile: (NSString *) fileName;

+ (id) readJSONValue: (NSString *) key
            fromFile: (NSString *) fileName
            fallback: (NSString *) fallback;

@end
