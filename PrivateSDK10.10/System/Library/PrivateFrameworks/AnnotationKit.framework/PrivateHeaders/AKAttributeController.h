/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AKController, AKPageModelController, NSColor, NSDictionary, NSFont;

@interface AKAttributeController : NSObject
{
    BOOL _strokeIsDashed;
    BOOL _hasShadow;
    AKPageModelController *modelControllerToObserveForSelections;
    NSColor *_strokeColor;
    NSColor *_fillColor;
    double _strokeWidth;
    long long _brushStyle;
    unsigned long long _arrowHeadStyle;
    NSFont *_font;
    NSDictionary *_textAttributes;
    AKController *_controller;
}

+ (void)initialize;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain) NSFont *font; // @synthesize font=_font;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property BOOL strokeIsDashed; // @synthesize strokeIsDashed=_strokeIsDashed;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections; // @synthesize modelControllerToObserveForSelections;
- (void).cxx_destruct;
- (void)_updateStateOnSenderFromSelf:(id)arg1;
- (BOOL)_updateStateOnSender:(id)arg1 fromSelectedAnnotations:(id)arg2;
- (void)_updateStateOnSender:(id)arg1;
- (BOOL)_isEnabledForSender:(id)arg1 withSelectedAnnotations:(id)arg2;
- (void)_syncStrokeColorOnSelectionToUI;
- (void)_syncFillColorOnSelectionToUI;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1;
- (void)_restorePersistedAttributes;
- (void)_persistCurrentAttributes;
- (BOOL)validateAttributeSender:(id)arg1;
- (void)performAttributeActionForSender:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1;

@end

