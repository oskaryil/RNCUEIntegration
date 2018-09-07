//  Created by react-native-create-bridge

import { NativeModules } from 'react-native'

const { CueIntegration } = NativeModules

export default {
  exampleMethod () {
    return CueIntegration.exampleMethod()
  },

  EXAMPLE_CONSTANT: CueIntegration.EXAMPLE_CONSTANT
}
