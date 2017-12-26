//
//  RSActionSheetView.h
//  RSCustomAlertView
//
//  Created by WhatsXie on 2017/11/15.
//  Copyright © 2017年 R.S. All rights reserved.
//
#import <UIKit/UIKit.h>
@class RSActionSheet;

@protocol RSActionSheetDelegate <NSObject>

/**
 点击actionSheet代理方法

 @param actionSheet actionSheet
 @param buttonIndex index
 */
- (void)actionSheet:(RSActionSheet *)actionSheet clickButtonAtIndex:(NSInteger)buttonIndex;


/**
 ActionSheet取消按钮

 @param actionSheet actionSheet description
 */
- (void)actionSheetCancle:(RSActionSheet *)actionSheet;

@end


#import "RSActionSheetCell.h"

@interface RSActionSheet : UIView

/**
 圆角效果
 */
@property (nonatomic,assign) BOOL isCorner;

/**
 标题颜色
 */
@property (nonatomic,strong) UIColor *titleColor;

/**
 标题字体
 */
@property (nonatomic,strong) UIFont *titleFont;

/**
 副标题颜色
 */
@property (nonatomic,assign) UIColor *subtitleColor;

/**
 副标题字体
 */
@property (nonatomic,strong) UIFont *subtitleFont;;

/**
 副标题间隔线颜色
 */
@property (nonatomic,strong) UIColor *lineColor;

/**
 副标题背景色
 */
@property (nonatomic,strong) UIColor *subtitlebgColor;

/**
 标题颜色
 */
@property (nonatomic,strong) UIColor *titlebgColor;

/**
 取消标题按钮颜色
 */
@property (nonatomic,strong) UIColor *canclebgColor;

/**
 标题栏高度
 */
@property (nonatomic,assign) CGFloat titleHeight;

/**
 副标题栏高度
 */
@property (nonatomic,assign) CGFloat sheetHeight;

/**
 取消按钮高度
 */
@property (nonatomic,assign) CGFloat cancleHeight;

/**
 图标数组,设置样式带图标时需要传入
 */
@property (nonatomic,strong) NSMutableArray *iconArr;

@property (nonatomic,weak) id<RSActionSheetDelegate> delegate;

/**
 创建ActionSheet 如果创建有图标的要传入iconArr参数

 @param title 标题
 @param sheetTitles 选项标题数组
 @param cancleBtnTitle 取消按钮标题
 @param delegate 代理
 */
- (instancetype)initWithTitle:(NSString *)title
                  sheetTitles:(NSArray *)sheetTitles
               cancleBtnTitle:(NSString *)cancleBtnTitle
                   sheetStyle:(RSActionSheetStyle)sheetStyle
                     delegate:(id<RSActionSheetDelegate>)delegate;
/**
 显示actionSheet
 */
- (void)show;
//- (void)showWithView:(UIView *)view;

/**
 视图消失
 */
- (void)dissmiss;
@end
