//
//  Macro.h
//  不一样的烟火
//
//  Created by 吉源 on 16/5/12.
//  Copyright © 2016年 吉源. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifndef Macro_h
#define Macro_h
//设备屏幕宽度
#ifndef SCREEN_WIDTH
#define SCREEN_WIDTH    [UIScreen mainScreen].bounds.size.width
#endif

//设备屏幕高度
#ifndef SCREEN_HEIGTH
#define SCREEN_HEIGTH   [UIScreen mainScreen].bounds.size.height
#endif


#define DefineWeakSelf __weak __typeof(self) weakSelf = self

#define JUDGECUSTOMEROPTIONAL [JudgeCustomerOptional judgeCustomerOptional]

#endif /* Macro_h */
#pragma mark - iPhone5 adaptation
//是否为iPhone5
#ifndef iPhone5
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ?  \
CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#endif
//#define  kCoreDataContext  [(AppDelegate *)[[UIApplication sharedApplication] delegate] managedObjectContext]
#define  kCoreDataContext [[CoredataDelegate standard] managedObjectContext]
#ifndef APPDELEGATE
#define APPDELEGATE   ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#endif
#define WEAKSELF(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#define PAGESIZE @"10"
#define APPMAINCOLOR [UIColor hexValue:0xd71d15]
#define APPMAINBLUECOLOR [UIColor hexValue:0x2196F3]
#define DEFAULTIMAGE_SQURE [UIImage imageNamed:@"加载图片"]
#define DEFAULTIMAGE [UIImage imageNamed:@"加载图片"]
#define HTTPBASEURL [NSString stringWithFormat:@"%@%@",BaseUrl,@"app-buy"]
#define PGY_URL @"http://www.pgyer.com/apiv1/app/view"
//#define BaseUrl  @"http://app.carceo.com/"  //正式环境

#define BaseUrl  @"http://dev.bokesoft.com:20295/"  //测试环境
#define PAGESIZE @"10"
#pragma mark - 打印到控制台
#if DEBUG
#define DLog(FORMAT, ...) fprintf(stderr,"\%s [第%d行] %s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define DLog(FORMAT, ...)
#endif /* Macro_h */

#define SIGLETON ((Sigleton *)[Sigleton standard])

/**
 *  百度ak
 */
#define BAIDUMAPAK @"ME4x5Vf3jRSMEtZEkjM8qK4zjvR66mL4"

/**
 *  sharesdk appKey
 */
#define ShareSDKAppkey @"16d9768cb0c8b"
/**
 *  微信AppID和Secrect
 */
//#define WeiXinAppID @"wxaf2a827a99e9a63a"
#define WeiXinAppID @"wx7e72b6c574ffc5e1"
#define WeiXinAppSecret @"b4d4cc625899908bd5d8c61e0fca62d3"
/**
 *  qq appID和appkey
 */
#define QQAppId @"1105278536"
#define QQAppKey @"b9kvXk0q72TTe5gm"

/**
 *  激光appkey
 */
#define JPushAppKey @"8b041a5fd256e8f941d4be62"

/**
 *  判断一个字符串是否为空
 *
 *  @param string 字符串
 *
 *  @return 返回结果
 */
static inline BOOL ICIsStringEmpty(NSString *string){
    
    if (string == nil) {
        return YES;
    }
    
    if (string.length == 0) {
        return YES;
    }
    
    if ([string isEqualToString:@"<null>"]) {
        return YES;
    }
    
    if ([string isEqualToString:@"(null)"]) {
        return YES;
    }
    
    return NO;
}
