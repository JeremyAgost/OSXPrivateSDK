//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkScanDropboxOperation : CalAgentLinkOneWayOperation
{
    NSString *_objectID;
    NSString *_principalUID;
}

@property(retain, nonatomic) NSString *principalUID; // @synthesize principalUID=_principalUID;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (id)inputPayload;
- (id)description;
- (void)dealloc;

@end
