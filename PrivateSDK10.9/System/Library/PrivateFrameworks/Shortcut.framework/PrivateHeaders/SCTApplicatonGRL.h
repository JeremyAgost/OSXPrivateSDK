//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Shortcut/SCTGRL.h>

@class NSString;

@interface SCTApplicatonGRL : SCTGRL
{
    NSString *mAppName;
    NSString *mAppBundleIdentifier;
}

- (id)title;
- (id)representativeIcon;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithProcessInfo:(id)arg1 withParent:(id)arg2;

@end
