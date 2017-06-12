//
//  CoredataDelegate.h
//  离线app
//
//  Created by 王吉源 on 16/11/8.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@interface CoredataDelegate : NSObject
+(instancetype)standard;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
@end
