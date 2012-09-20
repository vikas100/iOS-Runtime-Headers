/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class Protocol, NSArray, NSObject<OS_dispatch_queue>, <XPCProxyTarget>, NSObject<OS_xpc_object>;

@interface XPCProxy : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    <XPCProxyTarget> *_target;
    Class _remoteClass;
    Protocol *_remoteProtocol;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

    BOOL _invalidated;
    BOOL _useTraditionalEncoder;
    NSArray *_whitelistedClassNames;
}

@property Protocol * remoteProtocol;
@property(copy) id errorHandler;
@property(readonly) NSObject<OS_xpc_object> * connection;
@property BOOL useTraditionalEncoder;
@property <XPCProxyTarget> * target;
@property Class remoteClass;

+ (void)initialize;

- (BOOL)useTraditionalEncoder;
- (id)_newXpcEncodingForObject:(id)arg1;
- (id)_objectForXpcEncoding:(id)arg1;
- (id)_newXpcArgumentForInvocationArgumentAt:(void*)arg1 ofType:(const char *)arg2;
- (void)_getInvocationArgument:(void*)arg1 argumentType:(const char *)arg2 class:(Class*)arg3 forXpcArgument:(id)arg4 message:(id)arg5;
- (SEL)_selectorForMessage:(id)arg1;
- (id)_newMessageAndReplyHandler:(id*)arg1 forInvocation:(id)arg2;
- (id)_proxyDescription;
- (id)_invocationForMessage:(id)arg1;
- (id)_errorForXpcError:(id)arg1;
- (void)invalidate;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (id)remoteProtocol;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;
- (void)setErrorHandler:(id)arg1;
- (void)setRemoteProtocol:(id)arg1;
- (id)connection;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setRemoteClass:(Class)arg1;
- (void)setUseTraditionalEncoder:(BOOL)arg1;
- (id)errorHandler;
- (Class)remoteClass;
- (id)_disconnectionInvocation;
- (id)proxyWithNewTarget:(id)arg1 label:(id)arg2;
- (id)proxyWithNewTarget:(id)arg1 queue:(id)arg2;
- (id)disconnect;
- (id)_awaitingReply;

@end