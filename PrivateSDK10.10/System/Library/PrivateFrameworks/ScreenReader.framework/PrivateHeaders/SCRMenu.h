/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRElement.h>

@class NSMutableArray, SCRBrailleLineManager, SCRMenuItem, SCRTable;

// Not exported
@interface SCRMenu : SCRElement
{
    long long _selectedMenuItem;
    SCRMenu *_currentMenu;
    SCRMenuItem *_selectedSubmenuItem;
    NSMutableArray *_uiMenuItems;
    SCRBrailleLineManager *_brailleLineManager;
    SCRTable *_shortcutTable;
    SCRElement *_shortcutSearchField;
    struct {
        unsigned int isHorizontal:1;
        unsigned int isTopLevelMenu:1;
        unsigned int isMenuExtras:1;
        unsigned int isUserSelectionHappening:1;
        unsigned int hasMenuBarItemParent:1;
        unsigned int justOpened:1;
        unsigned int isInApplicationMenuExtraBar:1;
        unsigned int isApplicationMenuExtraBar:1;
        unsigned int reserved:20;
    } _srmFlags;
}

+ (struct CGRect)tightBoundsForMenuBarUIElement:(id)arg1;
@property(readonly, nonatomic) SCRTable *shortcutTable; // @synthesize shortcutTable=_shortcutTable;
@property(readonly, nonatomic) SCRElement *shortcutSearchField; // @synthesize shortcutSearchField=_shortcutSearchField;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (void)prepareGestureTrackingChildren;
- (BOOL)isApplicationMenuBar;
- (BOOL)isMenuOpen;
- (BOOL)isMenu;
- (BOOL)isContainerElement;
- (id)insideOfDescriptionForContextualHelp;
- (BOOL)shouldSynchVOCursorToSelectionChange;
- (BOOL)canFocusOutInto;
- (BOOL)synchKeyboardToVOCursor:(id)arg1;
- (BOOL)synchVOCursorToKeyboard:(id)arg1;
- (struct CGRect)visibleBounds;
- (BOOL)echoKeyboardEvent:(id)arg1 toRequest:(id)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)closeMenuWithRequest:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)jumpBottomEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpTopEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)_moveToShortcutTable:(id)arg1 row:(unsigned long long)arg2 request:(id)arg3;
- (BOOL)_moveNextWithEvent:(id)arg1 request:(id)arg2 wrap:(BOOL)arg3;
- (BOOL)_movePreviousWithEvent:(id)arg1 request:(id)arg2 wrap:(BOOL)arg3;
- (BOOL)_moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveOutOfCurrentMenuWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactEndShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactHomeShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactEndWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactHomeWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)brailleLineElementForUIElement:(id)arg1;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (id)brailleLineManager;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (id)typeDescription;
- (void)addItemNameToRequest:(id)arg1;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)valueDescription;
- (id)titleDescription;
- (BOOL)_shouldAddDescriptionForItem:(id)arg1;
- (id)_stringNext;
- (id)_keyNext;
- (id)_stringPrev;
- (id)_keyPrev;
- (BOOL)hasMenuBarItemParent;
- (BOOL)isHorizontal;
- (void)setIsHorizontal:(BOOL)arg1;
- (id)topLevelMenu;
- (BOOL)_isTopLevelSCRMenu;
- (BOOL)isTopLevelMenu;
- (void)setIsTopLevelMenu:(BOOL)arg1;
- (id)_getSelectedMenuItemAndTrack:(BOOL)arg1;
- (id)_getSelectedMenuItem;
- (BOOL)_isUserSelectionHappening;
- (void)_setIsUserSelectionHappening:(BOOL)arg1;
- (id)selectedSubmenuItem;
- (void)_setSelectedSubmenuItem:(id)arg1;
- (BOOL)focusInto:(id)arg1 withLeafUIMenu:(id)arg2 itemWasSelected:(char *)arg3 isClosing:(BOOL)arg4;
- (BOOL)focusInto:(id)arg1;
- (void)focusIntoFirstItem;
- (BOOL)focusIntoFirstApplicationExtra;
- (BOOL)handleApplicationExtraMovement:(int)arg1;
- (void)_openApplicationSystemExtra:(id)arg1;
- (long long)_indexOfFocusedChild;
- (void)_updateSelectedMenuItemIndex;
- (long long)_indexOfUIMenuItem:(id)arg1;
- (id)_uiMenuItemAtIndex:(long long)arg1;
- (long long)_uiMenuItemCountWithoutDividers;
- (long long)_uiMenuItemCount;
- (id)_uiMenuItems;
- (id)defaultActionName;
- (BOOL)allowBuildChildren;
- (void)setCurrentMenu:(id)arg1;
- (void)_setupForShortcut;
- (BOOL)isMenuExtras;
- (void)setIsMenuExtras:(BOOL)arg1;
- (id)menuBar;
- (BOOL)isMenuBar;
- (void)_shortcutSearchFieldTextDidChange:(id)arg1;
- (void)_shortcutSearchFieldSelectionDidChange:(id)arg1;
- (void)_shortcutSelectedRowDidChange:(id)arg1;
- (void)dealloc;
- (void)deallocChildren;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end
