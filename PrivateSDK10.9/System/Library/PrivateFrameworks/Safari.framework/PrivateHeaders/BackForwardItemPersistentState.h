//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BackForwardItemPersistentState : NSObject
{
    NSURL *_url;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;

@end
