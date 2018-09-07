//  Created by react-native-create-bridge

import React, { Component } from 'react'
import { requireNativeComponent } from 'react-native'

const CueIntegration = requireNativeComponent('CueIntegration', CueIntegrationView)

export default class CueIntegrationView extends Component {
  render () {
    return <CueIntegration {...this.props} />
  }
}

CueIntegrationView.propTypes = {
  exampleProp: React.PropTypes.any
}
