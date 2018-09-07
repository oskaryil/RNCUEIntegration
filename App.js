/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {Platform, StyleSheet, Text, View} from 'react-native';
import LightShowLib from './LightShowBridgeNativeModule';
// import LightShowUI from './LightShowUINativeView';
import CueBridgeView from './CueBridgeNativeView';

const instructions = Platform.select({
  ios: 'Press Cmd+R to reload,\n' + 'Cmd+D or shake for dev menu',
  android:
    'Double tap R on your keyboard to reload,\n' +
    'Shake or press menu button for dev menu',
});

type Props = {};
export default class App extends Component<Props> {
  componentWillMount() {
    console.log(LightShowLib);
    LightShowLib.emitter.addListener('EXAMPLE_EVENT', ({ greeting }) => {
      console.log(greeting);
    });
    LightShowLib.emitter.addListener('MIC_ACCESS_GRANTED', () => {
      console.log('Mic access granted');
    });
    LightShowLib.emitter.addListener('SOUND_DETECTED', () => {
      console.log('SOUND DETECTED');
    });
  }
  componentDidMount() {
    LightShowLib.requestMicAccess();
    // LightShowLib.setupCueAudio();
  }
  componentWillUnmount() {
    LightShowLib.emitter.remove();
  }
  render() {
    return (
      <View style={styles.container}>
        {/* <LightShowUI style={{ width: 100, height: 100 }}/> */}
        <CueBridgeView style={{ flex: 1 }}/>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
});
