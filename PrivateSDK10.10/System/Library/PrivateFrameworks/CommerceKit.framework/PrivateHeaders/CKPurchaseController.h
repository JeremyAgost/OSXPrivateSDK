/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommerceKit/CKServiceInterface.h>

@class NSArray, NSMutableArray, NSNumber;

@interface CKPurchaseController : CKServiceInterface
{
    NSMutableArray *_purchases;
    NSMutableArray *_rejectedPurchases;
    NSArray *_adoptionEligibleItems;
    NSNumber *_adoptionServerStatus;
    NSNumber *_adoptionErrorNumber;
    id _dialogHandler;
}

+ (void)setNeedsSilentMachineAuthorization:(BOOL)arg1;
+ (id)sharedPurchaseController;
@property(copy) id dialogHandler; // @synthesize dialogHandler=_dialogHandler;
- (void).cxx_destruct;
- (BOOL)adoptionCompletedForBundleID:(id)arg1;
- (void)_performVPPReceiptRenewal;
- (void)checkServerDownloadQueue;
- (id)purchaseInProgressForProductID:(id)arg1;
- (id)purchasesInProgress;
- (void)cancelPurchaseWithProductID:(id)arg1;
- (void)resumeDownloadForPurchasedProductID:(id)arg1;
- (void)startPurchases:(id)arg1 shouldStartDownloads:(BOOL)arg2 eventHandler:(id)arg3;
- (void)performPurchase:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)checkInstallRequirementsAtURL:(id)arg1 productID:(id)arg2 completionHandler:(id)arg3;

@end
