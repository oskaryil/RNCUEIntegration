//
//  CueAudioBridge.h
//  RNTBridgeDemo
//
//  Created by Oskar Yildiz on 2018-09-07.
//  Copyright © 2018 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

// import RCTBridgeModule
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include(“RCTBridgeModule.h”)
#import “RCTBridgeModule.h”
#else
#import “React/RCTBridgeModule.h” // Required when used as a Pod in a Swift project
#endif

@interface CueAudioBridge : NSObject <RCTBridgeModule>

@end
