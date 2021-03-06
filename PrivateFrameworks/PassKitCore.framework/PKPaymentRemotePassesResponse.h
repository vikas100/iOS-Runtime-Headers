/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemotePassesResponse : PKPaymentWebServiceResponse {
    NSString * _lastUpdated;
    NSArray * _remotePasses;
}

@property (nonatomic, readonly, copy) NSString *lastUpdated;
@property (nonatomic, readonly, copy) NSArray *remotePasses;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;
- (id)remotePasses;

@end
