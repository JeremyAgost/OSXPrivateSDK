//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem_DMDiskBased.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SMSystem_CoreStorage : SMSystem_DMDiskBased
{
    NSString *cachedVolumeUUID;
    NSString *cachedParentLVGUUID;
    NSDictionary *cachedVolumeDict;
    NSNumber *cachedVolumeSize;
    NSString *cachedVolumeName;
    NSMutableDictionary *miscData;
}

+ (id)keyPathsForValuesAffectingSelectableSystem;
+ (id)keyPathsForValuesAffectingAvailableActionLabel;
+ (id)keyPathsForValuesAffectingAvailableAction;
@property(retain) NSMutableDictionary *miscData; // @synthesize miscData;
@property(copy) NSString *cachedVolumeName; // @synthesize cachedVolumeName;
@property(copy) NSNumber *cachedVolumeSize; // @synthesize cachedVolumeSize;
@property(copy) NSDictionary *cachedVolumeDict; // @synthesize cachedVolumeDict;
@property(copy) NSString *cachedParentLVGUUID; // @synthesize cachedParentLVGUUID;
@property(copy) NSString *cachedVolumeUUID; // @synthesize cachedVolumeUUID;
- (BOOL)selectableSystem;
- (void)pressedActionButton:(id)arg1;
- (id)availableActionLabel;
- (BOOL)availableAction;
- (id)getAllUsers;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)isTargetDiskModeSystem;
- (BOOL)isInternal;
- (id)volumeIcon;
- (id)url;
- (id)volumeName;
- (void)cleanupSystem;
- (id)systemDescription;
- (id)displayName;
- (id)displayState;
- (void)invalidateCachedData;
- (void)prepareSystem;
- (int)systemType;
- (BOOL)matches:(id)arg1;
- (struct __DADisk *)copyDisk;
- (id)description;
- (id)extendedDescription;
- (BOOL)dmKnowsAboutThisDisk;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)unlockDisk:(id)arg1;
- (id)isPasswordLocked;
- (id)coreStorageStatus;
- (id)parentLVGUUID;
- (id)logicalVolumeUUID;
- (id)logicalVolumeDictionary;
- (void)dealloc;
- (id)initWithLogicalVolumeUUID:(id)arg1;

@end
