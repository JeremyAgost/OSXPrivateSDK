/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSError;

@interface OSIRepairDiskElement : OSIInstallQueueElement
{
    NSError *_error;
    BOOL _repairCompleted;
}

- (double)estimatedTimeToComplete;
- (BOOL)_isKextCacheRunning;
- (BOOL)_attemptRepair;
- (BOOL)_promoteImgsrcDisk:(id)arg1;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;

@end
