/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSSet;

@interface ASPingTask : ASTask {
    NSSet *_folders;
    NSSet *_oldFolders;
    NSInteger _oldSeconds;
    NSInteger _seconds;
}

- (id)command;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)folders;
- (BOOL)forceEDGETransport;
- (NSInteger)heartbeat;
- (id)initWithHeartbeat:(NSInteger)arg1 folders:(id)arg2 oldHeartbeat:(NSInteger)arg3 oldFolders:(id)arg4;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (BOOL)shouldHoldPowerAssertion;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (double)timeoutInterval;

@end