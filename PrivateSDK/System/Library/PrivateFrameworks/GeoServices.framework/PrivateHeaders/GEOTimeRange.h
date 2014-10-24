//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOTimeRange : PBCodable <NSCopying>
{
    unsigned int _from;
    unsigned int _to;
    BOOL _allDay;
    struct {
        unsigned int from:1;
        unsigned int to:1;
        unsigned int allDay:1;
    } _has;
}

@property(nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) unsigned int to; // @synthesize to=_to;
@property(nonatomic) unsigned int from; // @synthesize from=_from;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAllDay;
@property(nonatomic) BOOL hasTo;
@property(nonatomic) BOOL hasFrom;
- (void)dealloc;

@end
