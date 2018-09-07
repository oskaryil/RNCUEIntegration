//
//  AKPickerView.h
//  AKPickerViewSample
//
//  Created by Akio Yasui on 3/29/14.
//  Copyright (c) 2014 Akio Yasui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CUEAKPickerViewStyle) {
	CUEAKPickerViewStyle3D = 1,
	CUEAKPickerViewStyleFlat
};

@class CUEAKPickerView;

@protocol CUEAKPickerViewDataSource <NSObject>
@required
- (NSUInteger)numberOfItemsInPickerView:(CUEAKPickerView *)pickerView;
@optional
- (NSString *)pickerView:(CUEAKPickerView *)pickerView titleForItem:(NSInteger)item;
- (UIImage *)pickerView:(CUEAKPickerView *)pickerView imageForItem:(NSInteger)item;
@end

@protocol CUEAKPickerViewDelegate <UIScrollViewDelegate>
@optional
- (void)pickerView:(CUEAKPickerView *)pickerView didSelectItem:(NSInteger)item;
- (CGSize)pickerView:(CUEAKPickerView *)pickerView marginForItem:(NSInteger)item;
- (void)pickerView:(CUEAKPickerView *)pickerView configureLabel:(UILabel * const)label forItem:(NSInteger)item;
@end

@interface CUEAKPickerView : UIView

@property (nonatomic, weak) id <CUEAKPickerViewDataSource> dataSource;
@property (nonatomic, weak) id <CUEAKPickerViewDelegate> delegate;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIFont *highlightedFont;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *highlightedTextColor;
@property (nonatomic, assign) CGFloat interitemSpacing;
@property (nonatomic, assign) CGFloat fisheyeFactor; // 0...1; slight value recommended such as 0.0001
@property (nonatomic, assign, getter=isMaskDisabled) BOOL maskDisabled;
@property (nonatomic, assign) CUEAKPickerViewStyle pickerViewStyle;
@property (nonatomic, assign, readonly) NSUInteger selectedItem;
@property (nonatomic, assign, readonly) CGPoint contentOffset;

- (void)reloadData;
- (void)scrollToItem:(NSUInteger)item animated:(BOOL)animated;
- (void)selectItem:(NSUInteger)item animated:(BOOL)animated;

@end
