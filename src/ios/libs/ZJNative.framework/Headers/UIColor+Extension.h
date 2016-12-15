//
//  UIColor+Extension.h
//  ZiChanBao
//
//  Created by liujinliang on 15/6/11.
//  Copyright (c) 2015年 WorldUnion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)

#pragma mark - 计算色值
/**
 *  传入十六进制值，以0x开头
 */
+ (instancetype)hexValue:(NSInteger)hexValue;

/**
*  传入十六进制值，以0x开头
*  alpha 0-1
*/
+ (instancetype)hexValue:(NSInteger)hexValue alpha:(CGFloat)alpha;

/**
 *  传入十进制的红绿蓝三色值
 */
+ (instancetype)red:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

+ (UIColor *)colorWithHexadecimalString:(NSString *)colorValue withColorAlpha:(float) alpha;

#pragma mark - 背景颜色
/**
 *  页面背景色f5f5f5
 */
+ (instancetype)backgroundColor;

/**
 *  主颜色，红色ec2355
 */
+ (instancetype)mainColor;

/**
 *  分隔线，边框dddddd
 */
+ (instancetype)borderColor;

#pragma mark - 文字颜色
/**
 *  文字,黑色4c4948
 */
+ (instancetype)fontBlack;

/**
 *  文字,灰色8b8b8b
 */
+ (instancetype)fontGray;

/**
 *  文字,浅灰cccccc
 */
+ (instancetype)fontLightGray;

/**
 *  文字,链接dc2e24
 价格颜色
 */
+ (instancetype)priceColor;

#pragma mark - 按钮颜色
/**
 *  按钮,普通状态ec2355
 */
+ (instancetype)buttonNormal;

/**
 *  按钮,高亮状态d41f4c
 */
+ (instancetype)buttonHighlight;

/**
 *  按钮,不可点击cccccc
 */
+ (instancetype)buttonDisable;

/**
 *  文本默认内容颜色848a9e
 */
+ (instancetype)placeholderColor;

/**
 *  按钮shenhuise 343e61
 */
+ (instancetype)btnDarkGrayColor;

/**
 *  按钮确认红色 da1f28
 */
+ (instancetype)btnSureRedColor;

/**
 *  圈红色 cc3228
 */
+ (instancetype)circleRedColor;

/**
 *  圈红色 890300
 */
+ (instancetype)circleDarkRedColor;

/**
* 背景灰色
*/
+ (instancetype)backgroundGrayColor;

/**
* app主色调-绿色
*/
+ (instancetype)appMainColor;

/**
* app主色调-黄色
*/
+ (instancetype)appMainColor_orange;

+ (instancetype)scrollviewTopBb;

+ (instancetype)tableviewBorderColor;


+ (instancetype)uiPageControlIndicatorTintColor;
+ (instancetype)uiPageControlIndicatorCurrentTintColor;

@end
