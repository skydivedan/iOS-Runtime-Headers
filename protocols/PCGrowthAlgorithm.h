/* Generated by RuntimeBrowser.
 */

@protocol PCGrowthAlgorithm <PCLoggingDelegate, NSObject>

@required

- (NSDictionary *)cacheInfo;
- (unsigned int)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
- (double)maximumKeepAliveInterval;
- (double)minimumKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (BOOL)useIntervalIfImprovement:(double)arg1;

@end
