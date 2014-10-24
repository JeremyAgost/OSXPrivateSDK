//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSDictionary, NSMutableArray, NSResponder, SOViewController;

@interface SONavigationRootView : NSView
{
    SOViewController *_rootViewController;
    SOViewController *_visibleViewController;
    NSDictionary *_activeAnimation;
    NSResponder *_sendToViewControllersResponder;
    NSResponder *_returnFromViewControllersResponder;
    NSMutableArray *_baseViews;
    struct CGPoint _contentInset;
}

- (id)nextResponder;
- (id)_returnFromViewControllersResponder;
- (id)viewControllersResponder;
- (void)setAfterViewControllersResponder:(id)arg1;
- (void)layoutViewControllers;
- (id)visibleViewController;
- (void)_setVisibleViewController:(id)arg1;
- (void)unmarkSubviewAsBaseView:(id)arg1;
- (void)markSubviewAsBaseView:(id)arg1;
- (struct CGPoint)contentInset;
- (void)setContentInset:(struct CGPoint)arg1;
- (void)_doSlideAnimationForNavigationController:(id)arg1 to:(id)arg2 from:(id)arg3 isPush:(BOOL)arg4;
- (void)_doModalTransitionTo:(id)arg1 from:(id)arg2 isModalPresent:(BOOL)arg3;
- (void)_finishAnimationWithGUID:(id)arg1;
- (void)_removeAllAnimations;
- (id)_generateAnimationTo:(id)arg1 animationView:(id)arg2;
- (id)_imageLayerForView:(id)arg1 superlayer:(id)arg2;
- (void)_syncAdditionalViewsWithViewController:(id)arg1;
- (struct CGRect)_contentRect;
- (void)addSubviewUnderBaseViews:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_rootOrModalViewController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 rootViewController:(id)arg2;

@end
