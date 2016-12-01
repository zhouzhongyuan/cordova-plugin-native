#import "Native.h"
#import <Cordova/CDVPlugin.h>


#import <ZJNative/FirstController.h>
#import <ZJNative/RootNavigationController.h>
#import <ZJNative/JudgeCustomerOptional.h>
#import <ZJNative/Macro.h>
#import <ZJNative/UIColor+Extension.h>
#import <ZJNative/CoredataDelegate.h>

@implementation Native
- (void)open: (CDVInvokedUrlCommand *) command;
{
    FirstController *controller = [[FirstController alloc]init];
    controller.delegate = self;
    RootNavigationController *naviVC=[[RootNavigationController alloc]initWithRootViewController:controller];
    naviVC.navigationBar.translucent = NO;
    [naviVC.navigationBar setBarTintColor:APPMAINCOLOR];
    [self.viewController presentViewController:naviVC animated:YES completion:nil];
}

-(void)closeView{
    [self.viewController dismissModalViewControllerAnimated:YES];
}
@end
