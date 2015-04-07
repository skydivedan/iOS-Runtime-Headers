/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject {
}

@property(retain) NSString * lastProcessedTransactionLogURL;
@property(retain) PFUbiquityPeer * peer;
@property(retain) PFUbiquityStoreMetadata * storeMetadata;
@property(retain) NSString * storeName;
@property(retain) NSNumber * transactionNumber;

+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(BOOL)arg4;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3;

- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end