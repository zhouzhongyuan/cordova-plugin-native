//
//  JudgeCustomerOptional.h
//  离线app
//
//  Created by 王吉源 on 16/10/20.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JudgeCustomerOptional : NSObject
+(BOOL)judgeCustomerOptional;
+(void)delGoodAndPromotionWithOrderId:(NSString *)orderId;
+(NSString *)calculationTotlePriceWithOrderId:(NSString *)orderId;
@end
