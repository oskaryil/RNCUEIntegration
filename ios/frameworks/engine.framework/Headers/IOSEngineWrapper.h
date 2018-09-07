//
//  IOSEngineWrapper.h
//  objC_consumer
//
//  Created by π on 12/03/2018.
//  Copyright © 2018 π. All rights reserved.
//

#pragma once

@interface IOSEngineWrapper : NSObject

typedef  void(^Callback)(NSString* toneOrTriggerId);

+ (id) sharedInstance;

// you can set the tone callback at any moment in the life-cycle of the object
- (void) setToneCallback:    (Callback) toneCallback;
- (void) setTriggerCallback: (Callback) triggerCallback;

// NOTE: If you don't have microphone permission before you setup,
//         iOS will automatically request it.

// uses default engine config
- (void) setup;

// It's ok to pass an empty string (or even NULL)
// The C++ engine will setup with default config.
- (void) setupWithConfig: (NSString*) configString andWithVendorID:(NSString*) vendorID;

// this will trigger an assertion failure if setup didn't complete
- (void) startListening;

- (void) stopListening;

- (BOOL) isListening;

- (BOOL) didSetup;

@end

