/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ReaderActivationDelegate <NSObject>
- (BOOL)readerControllerShouldActivateUponDeterminingAvailability:(const struct ReaderController *)arg1;
- (id)installationTargetForReaderController:(const struct ReaderController *)arg1;

@optional
- (void)readerControllerDidDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerDidActivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillActivate:(const struct ReaderController *)arg1;
- (BOOL)readerControllerShouldAnimateActivationIfPossible:(const struct ReaderController *)arg1;
@end
