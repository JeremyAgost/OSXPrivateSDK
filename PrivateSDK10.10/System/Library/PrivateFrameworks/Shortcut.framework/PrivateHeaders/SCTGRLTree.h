/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, SCTGRL;

@interface SCTGRLTree : NSObject
{
    NSString *mKey;
    SCTGRL *mGRL;
    NSMutableArray *mChildren;
    SCTGRLTree *mParent;
}

- (void)dealloc;
- (id)toString;
- (id)children;
- (id)parent;
- (id)key;
- (id)addChild:(id)arg1;
- (id)setParent:(id)arg1;
- (id)grl;
- (id)setGRL:(id)arg1;
- (id)setKey:(id)arg1;
- (id)newChildWithKey:(id)arg1;
- (id)childWithKey:(id)arg1;
- (void)addGRLsInGRLIndex:(id)arg1;
- (void)addGRLToTree:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initRootWithKey:(id)arg1 withGRLIndex:(id)arg2;
- (id)init;

@end
