/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDocument.h"

#import "NSOpenSavePanelDelegate-Protocol.h"

@class BrowserWKView, NSConditionLock, NSData, NSMutableArray, NSPopUpButton, NSSavePanel, NSString, NSTabView, NSView;

// Not exported
@interface BrowserDocument : NSDocument <NSOpenSavePanelDelegate>
{
    BrowserWKView *_currentWKView;
    NSMutableArray *_wkViews;
    struct RefPtr<Safari::BrowserContentViewController> _contentViewControllerToSave;
    NSSavePanel *_activeSavePanel;
    NSView *fileFormatAccessoryView;
    NSPopUpButton *fileFormatPopUpButton;
    NSTabView *fileFormatInfoTabView;
    BOOL _isSavingWithSavePanel;
    BOOL _shouldOpenWindowBehindFrontmost;
    BOOL _persistentStateWasRestored;
    BOOL _isPopupWindow;
    BOOL _usesPrivateBrowsing;
    BOOL _isSavingAsPDF;
    NSConditionLock *_waitingForPDFLock;
    NSData *_pdfDataForExport;
}

+ (BOOL)lastDocumentCouldShowUnifiedField;
@property(retain) NSData *pdfDataForExport; // @synthesize pdfDataForExport=_pdfDataForExport;
@property(retain) NSConditionLock *waitingForPDFLock; // @synthesize waitingForPDFLock=_waitingForPDFLock;
@property BOOL isSavingAsPDF; // @synthesize isSavingAsPDF=_isSavingAsPDF;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
- (unsigned int)wkViewCount;
- (id)currentWKView;
- (id)createWKViewWithPrivateBrowsingSession:(const struct Session *)arg1;
- (id)createWKView;
- (void)setCurrentBrowserContentViewController:(struct BrowserContentViewController *)arg1;
- (void)removeBrowserContentViewController:(struct BrowserContentViewController *)arg1;
- (void)addBrowserContentViewController:(struct BrowserContentViewController *)arg1;
- (id)pageName;
- (id)handleEmailContentsCommand:(id)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)handleSearchTheWebCommand:(id)arg1;
- (id)text;
- (id)source;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)createWebClip:(id)arg1;
- (void)setShouldOpenWindowBehindFrontmost:(BOOL)arg1;
- (BOOL)shouldOpenWindowBehindFrontmost;
- (void)tryMultipleURLs:(unique_ptr_ed026c72)arg1;
- (struct SearchableWebContentViewController *)currentBrowserOrOverlayContentViewController;
- (struct BrowserContentViewController *)currentBrowserContentViewControllerIgnoringVisualTabPickerVisibility;
- (struct BrowserContentViewController *)currentBrowserContentViewController;
- (void)_sharePageViaMail:(id)arg1;
- (void)viewSource:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canSave;
- (BOOL)canCreateWebClip;
- (BOOL)canViewSource;
- (BOOL)_isDocumentHTML;
- (void)clearAllStatus;
- (void)addBookmarksForTabs:(id)arg1;
- (void)addBookmarkToMenu:(id)arg1;
- (void)showBookmarksSidebar:(id)arg1;
- (void)_URLConfirmationDidEndForBookmarkInBookmarksMenu:(id)arg1 confirmed:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)previousReadingListOrSharedLinksItem:(id)arg1;
- (void)nextReadingListOrSharedLinksItem:(id)arg1;
- (void)addReadingListItemsForTabs:(id)arg1;
- (void)addReadingListItem:(id)arg1;
- (void)addBookmark:(id)arg1;
- (void)addWebFeed:(id)arg1;
- (void)_proposeBookmark;
- (void)_URLConfirmationDidEndForBookmark:(id)arg1 confirmed:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_createBookmark;
- (id)_selectPreviousReadingListOrSharedLinksItemTitle;
- (BOOL)_canSelectPreviousReadingListOrSharedLinksItem;
- (id)_selectNextReadingListOrSharedLinksItemTitle;
- (BOOL)_canSelectNextReadingListOrSharedLinksItem;
- (BOOL)_canAddReadingListItem;
- (BOOL)canAddBookmarksForTabs;
- (BOOL)canAddBookmark;
- (void)safari_printDocument:(id)arg1;
- (BOOL)canPrint;
- (void)printShowingPrintPanel:(BOOL)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)printFrame:(const struct Frame *)arg1 showingPrintPanel:(BOOL)arg2 waitUntilDone:(BOOL)arg3;
- (void)setPrintInfo:(id)arg1;
- (id)printInfo;
- (BOOL)isShowingLoadErrorPage;
- (void)stopLoading:(id)arg1;
- (void)setShouldStartEmpty;
- (BOOL)shouldStartEmpty;
- (void)reload:(id)arg1;
- (id)forwardListMenuForButton:(id)arg1;
- (id)backListMenuForButton:(id)arg1;
- (void)_addBackForwardListItem:(const struct BackForwardListItem *)arg1 toMenu:(id)arg2;
- (void)goToItemInBackOrForwardMenu:(id)arg1;
- (BOOL)persistentStateWasRestored;
- (void)displayInitialContents;
- (BOOL)hasInitialContents;
- (void)goHome:(id)arg1;
- (BOOL)canGoHome;
- (id)currentURL;
- (void)goToURL:(id)arg1;
- (void)evaluateJavaScript:(id)arg1;
- (void)goToRequest:(id)arg1 withTabLabel:(id)arg2;
- (void)openLocation:(id)arg1;
- (void)hideFindBanner:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)focusContentSearchField:(id)arg1;
- (void)searchWeb:(id)arg1;
- (BOOL)canShowUnifiedField;
- (void)snapBackToSearchResults:(id)arg1;
- (void)_nameHasChanged;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (id)fileType;
- (id)_fileTypeForUnknownDocument;
- (id)displayName;
- (id)untitledName;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (BOOL)prepareSavePanel:(id)arg1;
- (void)fileFormatPopUpButtonUpdated:(id)arg1;
- (void)_updateFileFormatInformationText;
- (id)_allowedFileTypes;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)presentSavePanelForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)_presentSavePanel;
- (void)didGeneratePDFDataForExport:(id)arg1;
- (void)saveDocumentToPDF:(id)arg1;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(id)arg4;
- (BOOL)_isSavingPlainText;
- (struct String)_suggestedFilenameForSaving;
- (id)_MIMETypeForSaving;
- (BOOL)isSavingAsWebArchive;
- (BOOL)_canSaveAsWebArchive;
- (struct Frame)_frameToSave;
- (id)browserWindowControllerMac;
- (BOOL)isDocumentEdited;
- (void)removeWindowController:(id)arg1;
- (void)makeWindowControllers;
- (BOOL)shouldClose;
- (void)close;
- (void)dealloc;
- (void)_commonBrowserDocumentInitWithContentsOfRequest:(id)arg1 wkView:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (id)initWithPrivateBrowsingSession:(const struct Session *)arg1 isPopupWindow:(BOOL)arg2;
- (id)initAsPopupWindow:(BOOL)arg1;
- (id)init;
- (id)initWithContentsOfRequest:(id)arg1 usePrivateBrowsing:(BOOL)arg2;
- (BOOL)validate_getBytecodeProfile:(id)arg1;
- (void)getBytecodeProfile:(id)arg1;
- (BOOL)validate_toggleLogJavaScriptExceptions:(id)arg1;
- (void)toggleLogJavaScriptExceptions:(id)arg1;
- (BOOL)validate_toggleWebKitSwipeGesturesDisabled:(id)arg1;
- (void)toggleWebKitSwipeGesturesDisabled:(id)arg1;
- (BOOL)validate_togglePauseWebProcessSoon:(id)arg1;
- (void)togglePauseWebProcessSoon:(id)arg1;
- (BOOL)validate_togglePauseWebProcess:(id)arg1;
- (BOOL)_webProcessForCurrentPageIsForcePaused;
- (void)togglePauseWebProcess:(id)arg1;
- (BOOL)validate_crashWebProcessSoon:(id)arg1;
- (void)crashWebProcessSoon:(id)arg1;
- (BOOL)validate_crashWebProcess:(id)arg1;
- (void)crashWebProcess:(id)arg1;
- (void)goToAboutBlankSoon:(id)arg1;
- (BOOL)validate_forceRepaint:(id)arg1;
- (void)forceRepaint:(id)arg1;
- (BOOL)validate_showLayerTreeInMica:(id)arg1;
- (void)showLayerTreeInMica:(id)arg1;
- (BOOL)validate_showRenderLayerTree:(id)arg1;
- (void)showRenderLayerTree:(id)arg1;
- (BOOL)validate_showRenderTree:(id)arg1;
- (void)showRenderTree:(id)arg1;
- (BOOL)validate_toggleTimelineRecording:(id)arg1;
- (void)toggleTimelineRecording:(id)arg1;
- (BOOL)validate_showErrorConsole:(id)arg1;
- (void)showResources:(id)arg1;
- (BOOL)validate_showResources:(id)arg1;
- (void)showErrorConsole:(id)arg1;
- (BOOL)validate_connectOrDisconnectOrHideWebInspector:(id)arg1;
- (void)connectOrDisconnectOrHideWebInspector:(id)arg1;
- (BOOL)validate_showWebInspector:(id)arg1;
- (void)showWebInspector:(id)arg1;
- (BOOL)validate_showOtherUserAgentSheet:(id)arg1;
- (void)showOtherUserAgentSheet:(id)arg1;
- (BOOL)validate_setUserDefinedUserAgent:(id)arg1;
- (void)setUserDefinedUserAgent:(id)arg1;
- (BOOL)validate_resetUserAgent:(id)arg1;
- (void)resetUserAgent:(id)arg1;
- (BOOL)validate_setUserAgent:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (BOOL)validate_openPageWithApplication:(id)arg1;
- (void)openPageWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
