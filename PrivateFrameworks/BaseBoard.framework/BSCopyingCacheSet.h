/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {
    NSSet *_immutable;
    NSMutableSet *_mutable;
}

@property(readonly) unsigned int count;

- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)immutableSet;
- (void)removeObject:(id)arg1;

@end