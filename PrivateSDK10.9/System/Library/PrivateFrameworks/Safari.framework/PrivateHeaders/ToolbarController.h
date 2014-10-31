//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSToolbarDelegate.h"

@class BrowserToolbarItem, BrowserWindowControllerMac, ButtonPlus, NSSegmentedControl, NSView, NSWindow, OneStepBookmarkingButton, ReaderButton, ToolbarDownloadsButton, TopSitesButton, UnifiedField;

__attribute__((visibility("hidden")))
@interface ToolbarController : NSObject <NSToolbarDelegate>
{
    BrowserWindowControllerMac *_browserWindowController;
    NSWindow *_toolbarWindow;
    NSWindow *nibWindow;
    NSSegmentedControl *backForwardSegmentedControl;
    NSSegmentedControl *backForwardCustomizeSegmentedControl;
    NSSegmentedControl *textSizeSegmentedControl;
    NSSegmentedControl *textSizeCustomizeSegmentedControl;
    ButtonPlus *openInDashboardButton;
    ButtonPlus *addBookmarkButton;
    ButtonPlus *addBookmarkCustomizeButton;
    ButtonPlus *autoFillButton;
    ButtonPlus *homeButton;
    TopSitesButton *topSitesButton;
    UnifiedField *unifiedField;
    NSView *unifiedFieldContainer;
    ButtonPlus *printButton;
    UnifiedField *unifiedCustomizeField;
    NSView *unifiedFieldCustomizeContainer;
    ReaderButton *readerCustomizeButton;
    ButtonPlus *detachedAddBookmarkButton;
    ButtonPlus *bookmarksButton;
    ButtonPlus *historyButton;
    ButtonPlus *mailPageButton;
    ToolbarDownloadsButton *showDownloadsButton;
    ButtonPlus *showWebInspectorButton;
    ButtonPlus *bookmarksBarButton;
    ButtonPlus *newTabButton;
    ReaderButton *readerButton;
    ButtonPlus *shareButton;
    ButtonPlus *cloudTabsButton;
    OneStepBookmarkingButton *oneStepBookmarkButton;
    BrowserToolbarItem *_backForwardItem;
    BrowserToolbarItem *_createWebClipItem;
    BrowserToolbarItem *_autoFillItem;
    BrowserToolbarItem *_topSitesItem;
    BrowserToolbarItem *_homeItem;
    BrowserToolbarItem *_unifiedFieldContainerItem;
    BrowserToolbarItem *_textSizeItem;
    BrowserToolbarItem *_printItem;
    BrowserToolbarItem *_detachedAddBookmarkItem;
    BrowserToolbarItem *_bookmarksItem;
    BrowserToolbarItem *_historyItem;
    BrowserToolbarItem *_mailPageItem;
    BrowserToolbarItem *_showDownloadsItem;
    BrowserToolbarItem *_showWebInspectorItem;
    BrowserToolbarItem *_bookmarksBarItem;
    BrowserToolbarItem *_newTabItem;
    BrowserToolbarItem *_shareItem;
    BrowserToolbarItem *_cloudTabsItem;
    BrowserToolbarItem *_backForwardCustomizeItem;
    BrowserToolbarItem *_unifiedFieldContainerCustomizeItem;
    BrowserToolbarItem *_textSizeCustomizeItem;
    struct OwnPtr<Safari::ObjCNotifier> m_notifier;
    BOOL _validatingExtensionToolbarItemsSoon;
    BOOL _windowDidClose;
}

+ (void)removeDuplicateShareButtonsIfNeeded;
+ (void)insertShareButtonIfNeeded;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_zoomTextLabel;
- (void)_zoomTextOnlyDidChange:(const struct Notification *)arg1;
- (void)_parentalControlsDidChange;
- (void)_updateZoomTextLabel;
- (void)_updateToolbarSettings;
- (BOOL)isBackForwardVisible;
- (BOOL)toolbarContainsUnifiedField;
- (void)_mouseLocationChangedForOneStepBookmarkingButton:(id)arg1;
- (id)oneStepAddBookmarkButton;
- (id)shareButton;
- (id)readerButton;
- (id)showDownloadsButton;
- (id)unifiedField;
- (id)backForwardSegmentedControl;
- (id)_toolbarItemForWebClip:(BOOL)arg1;
- (id)_toolbarItemForPrint:(BOOL)arg1;
- (void)_prepareTextSizeSegmentedControl:(id)arg1;
- (id)_toolbarItemForShare:(BOOL)arg1;
- (id)_toolbarItemForNewTab:(BOOL)arg1;
- (id)_toolbarItemForBookmarksBar:(BOOL)arg1;
- (id)_toolbarItemForShowWebInspector:(BOOL)arg1;
- (id)_toolbarItemForShowDownloadsWindow:(BOOL)arg1;
- (id)_toolbarItemForMailWebPage:(BOOL)arg1;
- (id)_toolbarItemForHistory:(BOOL)arg1;
- (id)_toolbarItemForBookmarks:(BOOL)arg1;
- (id)_toolbarItemForTextSize:(BOOL)arg1;
- (id)_toolbarItemForHome:(BOOL)arg1;
- (id)_toolbarItemForTopSites:(BOOL)arg1;
- (id)_toolbarItemForAutoFill:(BOOL)arg1;
- (id)_toolbarItemForUnifiedFieldContainer:(BOOL)arg1;
- (void)_prepareBackForwardSegmentedControl:(id)arg1;
- (id)_toolbarItemForBackForward:(BOOL)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarDidReorderItem:(id)arg1;
- (void)_removeTemporaryDownloadsButtonIfAppropriate;
- (void)_addTemporaryDownloadsButtonIfAppropriate;
- (void)_downloadsTotalProgressDidChange:(id)arg1;
- (void)_downloadsDidChange:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeCloudTabsButtonIfAppropriate;
- (void)_addCloudTabsButtonIfAppropriate;
- (long long)_bestIndexForCloudTabsButton;
- (BOOL)_canShowToolbarItemForCloudTabs;
- (id)_toolbarItemForCloudTabs:(BOOL)arg1;
- (id)cloudTabsButton;
- (void)validateExtensionToolbarItemsSoon;
- (void)validateExtensionToolbarItems;
- (void)_extensionWasDisabled:(const struct Notification *)arg1;
- (void)_extensionWasEnabled:(const struct Notification *)arg1;
- (void)_migrateOldSafariToolbarConfiguration;
- (id)toolbarWindow;
- (void)windowWillClose;
- (void)dealloc;
- (void)disconnectFromBrowserWindowController;
- (id)initWithBrowserWindowController:(id)arg1;

@end
