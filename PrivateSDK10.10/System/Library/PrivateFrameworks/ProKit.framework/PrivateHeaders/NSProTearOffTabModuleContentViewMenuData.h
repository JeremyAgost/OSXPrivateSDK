/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSProContentViewMenu, NSTimer;

// Not exported
@interface NSProTearOffTabModuleContentViewMenuData : NSObject
{
    NSProContentViewMenu *_contentViewMenu;
    NSTimer *_contentViewMenuKeyboardTimer;
    BOOL _goForward;
    BOOL _didKeyboardOpen;
    BOOL _menuOpen;
}

@property(getter=isMenuOpen) BOOL menuOpen; // @synthesize menuOpen=_menuOpen;
@property BOOL didKeyboardOpen; // @synthesize didKeyboardOpen=_didKeyboardOpen;
@property BOOL goForward; // @synthesize goForward=_goForward;
@property(retain) NSTimer *contentViewMenuKeyboardTimer; // @synthesize contentViewMenuKeyboardTimer=_contentViewMenuKeyboardTimer;
@property(retain) NSProContentViewMenu *contentViewMenu; // @synthesize contentViewMenu=_contentViewMenu;

@end
