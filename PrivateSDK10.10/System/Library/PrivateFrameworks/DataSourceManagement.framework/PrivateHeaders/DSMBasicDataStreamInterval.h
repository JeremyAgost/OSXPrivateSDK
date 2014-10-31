/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataSourceManagement/DSMBasicDataStreamEvent.h>

#import "NSCoding-Protocol.h"

@interface DSMBasicDataStreamInterval : DSMBasicDataStreamEvent <NSCoding>
{
    unsigned long long _durationInNs;
}

@property(readonly) unsigned long long durationInNs; // @synthesize durationInNs=_durationInNs;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)dataType;
- (id)initWithStartMachAbsoluteTimestampInNs:(unsigned long long)arg1 andWallclockTime:(struct timeval *)arg2 andMetaDataArray:(id)arg3 andDurationInNs:(unsigned long long)arg4;

@end
