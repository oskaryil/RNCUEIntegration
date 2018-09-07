//  Created by react-native-create-bridge

import { NativeModules, NativeEventEmitter } from 'react-native'

const { LightShowBridge } = NativeModules

const HelloWorldEmitter = new NativeEventEmitter(LightShowBridge);

export default {
  exampleMethod () {
    return LightShowBridge.exampleMethod();
  },
  requestMicAccess() {
    return LightShowBridge.requestMicAccess();
  },
  setupCueAudio() {
    return LightShowBridge.setupCueAudio();
  },
  emitter: HelloWorldEmitter,
  EXAMPLE_CONSTANT: LightShowBridge.EXAMPLE_CONSTANT
}
