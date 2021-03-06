/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSButton, NSPanel, NSProgressIndicator, NSSecureTextField, NSSet, NSString, NSTextField, NSView, XSAction, XSBonjourComboBox;

@interface XSLoginPanelController : NSObject
{
    id <XSLoginPanelDelegateProtocol> _delegate;
    NSString *_messageText;
    NSString *_serverAddress;
    BOOL _serverAddressEditingEditable;
    NSString *_userName;
    NSString *_password;
    BOOL _saveToKeychain;
    XSAction *_authenticateAction;
    NSSet *_disableableControls;
    NSPanel *loginPanel;
    NSView *controlsBelowMessageTextField;
    NSTextField *messageTextField;
    NSTextField *serverAddressTextField;
    XSBonjourComboBox *serverAddressBonjourComboBox;
    NSTextField *userNameTextField;
    NSSecureTextField *passwordTextField;
    NSTextField *progressStatusTextField;
    NSProgressIndicator *progressIndicator;
    NSButton *connectButton;
    NSButton *cancelButton;
    NSButton *saveToKeychainCheckBox;
}

+ (id)zeroConfName;
+ (id)userNameOfLastSuccessfulLogin;
+ (id)serverAddressOfLastSuccessfulLogin;
+ (id)loginPanelController;
@property BOOL saveToKeychain; // @synthesize saveToKeychain=_saveToKeychain;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(getter=isServerAddressEditable) BOOL serverAddressEditable; // @synthesize serverAddressEditable=_serverAddressEditingEditable;
@property(retain) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain) NSSet *disableableControls; // @synthesize disableableControls=_disableableControls;
@property id <XSLoginPanelDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) XSAction *authenticateAction; // @synthesize authenticateAction=_authenticateAction;
- (void)_saveAccountAndPasswordToKeychain;
- (void)_populateAccountAndPasswordFromKeychain;
- (void)_layoutSubviews;
- (void)controlTextDidChange:(id)arg1;
- (void)clickedKeychainButton:(id)arg1;
- (void)connect:(id)arg1;
- (void)cancel:(id)arg1;
@property(retain) NSString *bonjourServiceType;
- (id)errorForFinishedAuthenticationAction:(id)arg1;
- (id)actionToAuthenticateToServer:(id)arg1 withUserName:(id)arg2 password:(id)arg3;
- (void)_closeSheet;
- (void)endLoginSheet;
- (void)beginSheetModalForWindow:(id)arg1;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

