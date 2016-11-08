#import "Native.h"
#import <Cordova/CDVPlugin.h>


#import <Availability.h>
#import "FirstController.h"
#import "RootNavigationController.h"
#import "JudgeCustomerOptional.h"

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
    NSLog(@"echo called");
    [self.viewController dismissModalViewControllerAnimated:YES];
    NSLog(@"echo end");


    //    [self dismissModalViewControllerAnimated:YES];

}
@end
