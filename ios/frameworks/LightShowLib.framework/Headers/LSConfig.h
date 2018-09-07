//
//  LSConfig.h
//  CUEController
//
//  Created by Jameson Rader on 4/18/18.
//  Copyright © 2018 CUE Audio, LLC. All rights reserved.
//

#ifndef LSConfig_h
#define LSConfig_h

typedef NS_ENUM(NSInteger, CUETriggerType) {
    //LS
    CUETriggerTypeLightShow = 0,
    //SC
    CUETriggerTypeSelfieCam = 1,
    //TR
    CUETriggerTypeTrivia = 2,
};

typedef NS_ENUM(NSInteger, CUELoadingIndicatorColor) {
    //white
    CUELoadingIndicatorWhite = 0,
    //black
    CUELoadingIndicatorBlack = 1,
    //gray
    CUELoadingIndicatorGray = 2,
};

#define CUECameraCountdownLabelMarginVertical 8.0f
#define CUECameraCountdownLabelMarginHorizontal 20.0f

typedef NS_ENUM(NSInteger, CUECameraViewCountdownLabelPosition) {
    //Top Leading
    CUECameraViewCountdownLabelPositionTopLeading = 0,
    //Top Trailing
    CUECameraViewCountdownLabelPositionTopTrailing = 1,
    //Botton Leading
    CUECameraViewCountdownLabelPositionBottomLeading = 2,
    //Bottom Trailing
    CUECameraViewCountdownLabelPositionBottomTrailing = 3,
};

typedef NS_ENUM(NSInteger, CUELSInstructionalViewControllerType) {
    CUELSInstructionalViewControllerTypeLightShow = 0,
    //Selfie Cam
    CUELSInstructionalViewControllerTypeCamera = 1,
};

typedef NS_ENUM(NSInteger, CUEAlertType) {
    CUEAlertTypeMic = 0,
    //Selfie Cam
    CUEAlertTypeCamera = 1,
};

#endif /* LSConfig_h */
