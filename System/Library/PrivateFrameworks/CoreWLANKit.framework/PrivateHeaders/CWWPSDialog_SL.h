//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class CWInterface, CWNetwork, NSButton, NSProgressIndicator, NSString, NSTextField;

@interface CWWPSDialog_SL : NSWindowController
{
    CWInterface *interface_;
    CWNetwork *network_;
    id delegate_;
    NSString *pin_;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *cancelButton;
    NSTextField *pinLabel;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSButton *helpButton;
}

+ (id)wpsDialogWithInterface:(id)arg1 network:(id)arg2;
@property(copy) NSString *pin; // @synthesize pin=pin_;
@property(copy) CWNetwork *network; // @synthesize network=network_;
@property id delegate; // @synthesize delegate=delegate_;
@property(retain) CWInterface *interface; // @synthesize interface=interface_;
- (void)onCancelButton:(id)arg1;
- (void)onHelpButton:(id)arg1;
- (void)windowDidLoad;
- (void)close;
- (void)awakeFromNib;
- (void)startWPS;
- (void)startWPSThreaded;
- (void)wpsComplete:(id)arg1;
- (void)clearPIN;
- (void)updatePin;
- (id)localizedStringForKey:(id)arg1;
- (id)initWithInterface:(id)arg1 network:(id)arg2;
- (void)dealloc;

@end
