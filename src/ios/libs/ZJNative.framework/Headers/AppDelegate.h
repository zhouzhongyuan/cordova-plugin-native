//
//  AppDelegate.h
//  离线app
//
//  Created by 王吉源 on 16/10/13.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
//@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
//@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
//@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
//
//- (void)saveContext;

//@property(nonatomic,assign)BOOL isNotic;//是否是点击通知开始的应用
//@property(nonatomic,assign)BOOL isActivite;//是否前台

@property(nonatomic,assign)BOOL isAdd;//要不要添加数据  以后要删的
@end

