/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CredentialAndProtectionSpaceCollectionDelegate <NSObject>
- (void)didSortOrFilter;
- (void)willSortOrFilter;
- (id)passwordForSortingAndFilteringCredentialAndProtectionSpace:(id)arg1;
- (id)userForSortingAndFilteringCredential:(id)arg1;
- (id)addressStringForFilteringProtectionSpace:(id)arg1;
- (long long)compareAdressFromProtectionSpace:(id)arg1 toAddressFromProtectionSpace:(id)arg2;
@end
