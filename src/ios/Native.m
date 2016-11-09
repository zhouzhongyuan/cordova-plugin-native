#import "Native.h"
#import <Cordova/CDVPlugin.h>


#import "FirstController.h"
#import "RootNavigationController.h"
#import "JudgeCustomerOptional.h"
#import "Macro.h"
#import "UIColor+Extension.h"
#import "CoredataDelegate.h"

@implementation Native
- (void)echo: (CDVInvokedUrlCommand *) command;
{
    FirstController *controller = [[FirstController alloc]init];
    RootNavigationController *naviVC=[[RootNavigationController alloc]initWithRootViewController:controller];
    naviVC.navigationBar.translucent = NO;
    [naviVC.navigationBar setBarTintColor:APPMAINCOLOR];
    [self.viewController presentViewController:naviVC animated:YES completion:nil];
}

-(void)closeView{
    [self.viewController dismissModalViewControllerAnimated:YES];
}
@end
