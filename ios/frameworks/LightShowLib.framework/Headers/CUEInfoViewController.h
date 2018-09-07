//
//  CUEInfoViewController.h
//  Lights
//
//  Created by Jameson Rader on 11/2/17.
//  Copyright © 2017 Q Raider. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CUEInfoViewController : UIViewController

@property (unsafe_unretained, nonatomic) IBOutlet UIButton *menuButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *logoImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *headerImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *cueAudioLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *locationLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *bodyLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *emailButton;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *fomoLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *fomoButton;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *disclaimerLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerTitleLeftLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerTitleCenterLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerTitleRightLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerBodyLeftLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerBodyCenterLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *footerBodyRightLabel;
@end
