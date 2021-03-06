/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAppleAccountServiceOwner : NSObject <AAServiceOwnerProtocol, AAUISignOutControllerDelegate> {
    ACAccountStore * _accountStore;
    id /* block */  _signOutCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)serviceTypes;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1 serviceType:(id)arg2;
- (void)_continueSignOutOfAccount:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_disableDeviceLocatorForAccount:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)_isRestoringFromiCloud;
- (void)_preflightSignOutOfAccount:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (id)altDSIDForAccount:(id)arg1 serviceType:(id)arg2;
- (id)init;
- (id)nameComponentsForAccount:(id)arg1 serviceType:(id)arg2;
- (id)primaryAccountForService:(id)arg1;
- (void)setAccountNotInUse:(id)arg1 forService:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)signInService:(id)arg1 withAuthenticationResults:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)signOutController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)signOutControllerDidCancel:(id)arg1;

@end
