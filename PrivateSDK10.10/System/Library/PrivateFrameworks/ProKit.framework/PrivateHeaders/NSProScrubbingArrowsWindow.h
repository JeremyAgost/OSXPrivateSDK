/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSTimer;

// Not exported
@interface NSProScrubbingArrowsWindow : NSWindow
{
    NSTimer *selfDestructTimer;
    struct CGRect referenceFrame;
}

- (void)finalize;
- (void)dealloc;
- (void)selfDestructIfNecessaryWithTimer:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)startSelfDestructTimer;
- (void)setReferenceFrame:(struct CGRect)arg1;
- (struct CGRect)referenceFrame;

@end
