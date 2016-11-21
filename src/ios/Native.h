#import <Cordova/CDVPlugin.h>
#import "CloseDelegate.h"

@interface Native : CDVPlugin<CloseDelegate>
- (void) open:(CDVInvokedUrlCommand *) command;
@end
