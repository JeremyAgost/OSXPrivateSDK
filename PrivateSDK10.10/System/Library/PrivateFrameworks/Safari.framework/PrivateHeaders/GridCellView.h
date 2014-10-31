/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSTextFieldDelegate-Protocol.h"

@class GridViewImageView, NSArray, NSString, NSTextField;

// Not exported
@interface GridCellView : NSView <NSTextFieldDelegate>
{
    NSArray *_constraints;
    BOOL _needsAccessoryViewConstraintUpdate;
    BOOL _selected;
    id <GridCellViewDelegate> _delegate;
    GridViewImageView *_imageView;
    NSTextField *_textField;
    NSView *_accessoryView;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)textFieldFirstBaselineBottomInset;
+ (double)imageViewBottomInset;
+ (double)imageViewHorizontalInset;
+ (double)heightExceedingWidth;
+ (struct CGSize)minimumCellViewSize;
+ (struct CGSize)maximumCellViewSize;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) GridViewImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <GridCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (double)_shadowBlurRadius;
- (struct CGSize)_shadowOffset;
- (id)_shadowColor;
@property(readonly, nonatomic, getter=isAccessoryViewVisible) BOOL accessoryViewVisible;
@property(readonly, nonatomic) struct CGSize accessoryViewInset;
@property(nonatomic) BOOL drawsImageBorder;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_endEditing;
- (void)beginEditing;
- (void)_setUpAccessoryViewConstraints;
- (void)_setUpConstraints;
- (void)_applyCustomViewAttributes;
- (void)_setUpContentViews;
- (id)_gridView;
- (void)_activate;
- (void)keyDown:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAccessoryViewVisible:(BOOL)arg1 animated:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
