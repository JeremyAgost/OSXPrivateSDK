/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface CalConflictResults : NSObject
{
    NSArray *_conflicts;
    long long _userResponse;
}

+ (id)resultsWithConflicts:(id)arg1 userResponse:(long long)arg2;
@property long long userResponse; // @synthesize userResponse=_userResponse;
@property(retain) NSArray *conflicts; // @synthesize conflicts=_conflicts;
- (void)dealloc;

@end
