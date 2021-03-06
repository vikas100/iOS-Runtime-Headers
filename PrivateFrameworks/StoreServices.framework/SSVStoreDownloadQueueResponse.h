/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVStoreDownloadQueueResponse : NSObject {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableOrderedSet * _downloads;
    NSError * _error;
    NSDictionary * _itemErrors;
    NSData * _keybag;
    NSArray * _rangesToLoad;
    BOOL  _shouldCancelPurchaseBatch;
    NSString * _storeCorrelationID;
    BOOL  _triggeredQueueCheck;
    NSNumber * _userIdentifier;
}

@property NSString *clientIdentifier;
@property (readonly) NSOrderedSet *downloads;
@property (retain) NSError *error;
@property (readonly) NSData *keybag;
@property (readonly) NSArray *rangesToLoad;
@property BOOL shouldCancelPurchaseBatch;
@property NSString *storeCorrelationID;
@property BOOL triggeredQueueCheck;
@property (readonly) NSNumber *userIdentifier;

- (void).cxx_destruct;
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;
- (id)_initStoreDownloadQueueResponse;
- (id)clientIdentifier;
- (id)downloads;
- (id)error;
- (id)errorForItemIdentifier:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;
- (id)keybag;
- (id)rangesToLoad;
- (void)setClientIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setShouldCancelPurchaseBatch:(BOOL)arg1;
- (void)setStoreCorrelationID:(id)arg1;
- (void)setTriggeredQueueCheck:(BOOL)arg1;
- (BOOL)shouldCancelPurchaseBatch;
- (id)storeCorrelationID;
- (BOOL)triggeredQueueCheck;
- (id)userIdentifier;

@end
