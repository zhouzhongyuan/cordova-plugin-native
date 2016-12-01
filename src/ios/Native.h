#import <Cordova/CDVPlugin.h>
#import <ZJNative/CloseDelegate.h>

@interface Native : CDVPlugin<CloseDelegate>
- (void) open:(CDVInvokedUrlCommand *) command;
@end
