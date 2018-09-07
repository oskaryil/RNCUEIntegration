//
//  MenuViewController.h
//  MU Lights
//
//  Created by Jameson Rader on 3/10/16.
//  Copyright © 2016 Lancers. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CUEMenuViewControllerDelegate <NSObject>

@optional
- (void) trackSelection: (long) i;
- (void) menuDidAppear;
- (void)launchEditor;

@end

@interface CUEMenuViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, weak) id<CUEMenuViewControllerDelegate> delegate;

@end
