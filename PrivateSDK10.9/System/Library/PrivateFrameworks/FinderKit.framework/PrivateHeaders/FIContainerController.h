//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserContainerController.h>

__attribute__((visibility("hidden")))
@interface FIContainerController : FI_TBrowserContainerController
{
    BOOL _historyDisabled;
}

+ (BOOL)_isMediaBrowserInTargetPath:(const struct TFENodeVector *)arg1;
+ (BOOL)_isMediaBrowserNode:(const struct TFENode *)arg1;
+ (unsigned long long)_mediaBrowserTypeForTargetPath:(const struct TFENodeVector *)arg1;
+ (unsigned long long)_mediaBrowserTypeForNode:(const struct TFENode *)arg1;
@property(nonatomic) BOOL historyDisabled; // @synthesize historyDisabled=_historyDisabled;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (BOOL)shouldEnableShareButton;
- (BOOL)canShare;
- (BOOL)canMoveItemsToTrash;
- (BOOL)canDuplicateItems;
- (void)openLocation:(const struct TFENode *)arg1 origin:(struct ISpawnOrigin *)arg2;
- (void)openSelection;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (BOOL)canClickDimmedNodes;
- (BOOL)allowsMultipleSelection;
- (BOOL)canSelectNode:(const struct TFENode *)arg1;
- (BOOL)nodeIsDimmed:(const struct TFENode *)arg1;
- (BOOL)allowsBrowsingPackages;
- (BOOL)urlIsDimmed:(id)arg1;
- (BOOL)urlIsDimmed:(id)arg1 itemIsContainer:(BOOL)arg2 itemIsPackage:(BOOL)arg3;
- (BOOL)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (BOOL)canBrowseNode:(const struct TFENode *)arg1;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (BOOL)isICloud;
- (BOOL)uiAllowsRenamingNode:(const struct TFENode *)arg1;
- (id)_sidebarViewController;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (void)disableHistoryAndDoWork:(CDUnknownBlockType)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)searchFieldTextChanged;
- (struct TString)_backupBrowserSnapshotPath;
- (BOOL)inBrowseMode;
- (id)_historySearchTemplateMenu;
- (void)saveQuery:(BOOL)arg1;
- (BOOL)validateRename:(id)arg1;
- (void)cmdRename:(id)arg1;
- (void)setViewStyle:(id)arg1;
- (void)setPreferredViewStyle:(id)arg1;
- (struct TFENode)_nodeForLastMediaBrowserMode;
- (void)addToHistory:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
- (void)addCurrentTargetPathToHistory;
- (void)backForwardCommon:(BOOL)arg1;
- (void)gotoHistoryEntry:(id)arg1;
- (void)historyChanged;
- (BOOL)_updateViewStyle:(id)arg1;
- (void)aboutToTearDown;
- (BOOL)browserViewHasFocus;
- (void)reduceRootedPath:(struct TFENodeVector *)arg1;
- (BOOL)nodeIsOurICloud:(const struct TFENode *)arg1;
- (struct TFENode)_quickFollowAliasChainForNode:(const struct TFENode *)arg1;
- (struct CGSize)minimumBrowserViewSize;
- (struct TFENode)sidebarTarget;
- (BOOL)shouldShowSidebarSplitter;
- (BOOL)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
- (void)createBrowserViewWithViewStyle:(id)arg1 containerState:(id)arg2;
- (Class)browserClassForViewStyle:(id)arg1;
- (void)updateViewLayout:(BOOL)arg1;
- (struct CGRect)browserViewFrameForUpdate:(const struct CGRect *)arg1;
- (struct CGRect)browserViewContainerFrame;
- (id)browserViewContainer;
- (void)_replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (BOOL)sidebarInitiallyVisible;
- (id)gutsController;

@end

