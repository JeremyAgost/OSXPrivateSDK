//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BadgeView : NSView
{
    NSString *_text;
    double _maxWidth;
}

- (BOOL)canSmoothFontsInLayer;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
