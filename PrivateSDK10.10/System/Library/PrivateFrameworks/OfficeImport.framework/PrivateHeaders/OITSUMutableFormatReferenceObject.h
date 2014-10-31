/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OITSUFormatReferenceObject.h>

#import "TSUMutableDateTimeFormatInspectorPropertyVendor-Protocol.h"
#import "TSUMutableDurationFormatInspectorPropertyVendor-Protocol.h"

@class NSNumber, NSSet, NSString;

// Not exported
@interface OITSUMutableFormatReferenceObject : OITSUFormatReferenceObject <TSUMutableDurationFormatInspectorPropertyVendor, TSUMutableDateTimeFormatInspectorPropertyVendor>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) CDStruct_bfed0e84 formatStruct;
@property(copy, nonatomic) NSNumber *durationStyle;
@property(copy, nonatomic) NSNumber *durationUnitLargest;
@property(copy, nonatomic) NSNumber *durationUnitSmallest;
@property(copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property(copy, nonatomic) NSString *timeFormat;
@property(copy, nonatomic) NSString *dateFormat;
- (void)p_setDateFormat:(id)arg1 timeFormat:(id)arg2;
- (void)p_setDateTimeFormat:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *selectedDateFormats;
@property(readonly, nonatomic) NSSet *selectedDurationStyles;
@property(readonly, nonatomic) NSSet *selectedTimeFormats;

@end
