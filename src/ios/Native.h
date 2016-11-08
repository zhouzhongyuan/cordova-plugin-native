#import <Cordova/CDVPlugin.h>
#import "CloseDelegate.h"

@interface Native : CDVPlugin<CloseDelegate>
- (void) echo:(CDVInvokedUrlCommand *) command;
@end
