/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSItemInfoResponseMessageType.h>

@class EWSConflictResultsType;

@interface EWSUpdateItemResponseMessageType : EWSItemInfoResponseMessageType
{
    EWSConflictResultsType *_ConflictResults;
}

+ (id)definition;
@property(retain, nonatomic) EWSConflictResultsType *ConflictResults; // @synthesize ConflictResults=_ConflictResults;
- (void)dealloc;

@end

