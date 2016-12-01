//
//  FirstController.h
//  离线app
//
//  Created by 王吉源 on 16/10/13.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import "RootViewController.h"
#import "CloseDelegate.h"
@interface FirstController : RootViewController
@property(nonatomic,strong)id<CloseDelegate>delegate;
@end
