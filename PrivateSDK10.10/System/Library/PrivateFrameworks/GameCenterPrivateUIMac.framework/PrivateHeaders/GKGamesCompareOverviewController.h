/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

#import "NSUICollectionViewDelegate-Protocol.h"

@class GKPlayer, NSString;

@interface GKGamesCompareOverviewController : GKCollectionViewController <NSUICollectionViewDelegate>
{
    GKPlayer *_player;
}

+ (id)gamesControllerForOverviewCompareWithPlayer:(id)arg1;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (id)_gkPresentationIdentifier;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTouchShowAll:(long long)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)configureDataSource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
