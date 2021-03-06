/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IconServices/ISStoreIndex.h>

// Not exported
@interface ISMutableStoreIndex : ISStoreIndex
{
    unsigned long long _initialCapacity;
    struct dispatch_queue_s *_serialQueue;
}

@property(readonly) struct dispatch_queue_s *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) unsigned long long initialCapacity; // @synthesize initialCapacity=_initialCapacity;
- (void)_extend;
- (void)removeAll;
- (BOOL)removeValueForKey:(unsigned long long)arg1 passingTest:(id)arg2;
- (BOOL)removeValuePassingTest:(id)arg1;
- (BOOL)addValue:(CDStruct_7b983088 *)arg1 forKey:(unsigned long long)arg2;
- (void)performBlock:(id)arg1;
- (id)data;
- (void)finalize;
- (void)dealloc;
- (id)initWithStoreFileURL:(id)arg1 capacity:(unsigned long long)arg2;

@end

