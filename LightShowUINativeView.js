//  Created by react-native-create-bridge

import React, { Component } from 'react'
import { requireNativeComponent } from 'react-native'

const LightShowUI = requireNativeComponent('LightShowUI', LightShowUIView)

export default class LightShowUIView extends Component {
  render () {
    return <LightShowUI {...this.props} />
  }
}
