/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIPSDLayer.h>

@class CUIImage;

@interface CUIPSDImageLayer : CUIPSDLayer
{
    CUIImage *_image;
}

@property(readonly, nonatomic) struct CGImage *cgImageRef;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end
