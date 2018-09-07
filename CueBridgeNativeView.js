//  Created by react-native-create-bridge

import React, { Component } from 'react'
import { requireNativeComponent } from 'react-native'

const CueBridge = requireNativeComponent('CueBridge', CueBridgeView)

export default class CueBridgeView extends Component {
  render () {
    return <CueBridge {...this.props} />
  }
}
