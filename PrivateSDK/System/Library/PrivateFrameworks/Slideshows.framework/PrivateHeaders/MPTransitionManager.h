//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MPTransitionManager : NSObject
{
    NSMutableDictionary *mTransitions;
    NSMutableDictionary *mTransitionCategories;
    NSMutableDictionary *mTransitionPresets;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (void)loadTransitionManagerWithPaths:(id)arg1;
- (id)presetsForTransitionID:(id)arg1;
- (double)defaultDurationForTransitionID:(id)arg1;
- (id)controlForAttribute:(id)arg1 forTransitionID:(id)arg2;
- (id)settingsUIControlDescriptionsForTransition:(id)arg1;
- (id)imageResourceForTransitionID:(id)arg1 withFileName:(id)arg2;
- (id)localizedSettingsUITitleForTitleKey:(id)arg1 inTransition:(id)arg2;
- (id)attributesForTransitionID:(id)arg1 andPresetID:(id)arg2;
- (id)localizedCategoryNameFromCategoryID:(id)arg1;
- (id)localizedTransitionNameForTransitionID:(id)arg1 andPresetID:(id)arg2;
- (id)localizedNameForTransitionID:(id)arg1 withLanguage:(id)arg2;
- (id)localizedTransitionNameForTransitionID:(id)arg1;
- (id)transitionsForCategoryID:(id)arg1;
- (id)descriptionForTransitionID:(id)arg1;
- (id)categoryIDsForTransitionID:(id)arg1;
- (id)versionOfTransitionID:(id)arg1;
- (id)allCategoryIDs;
- (id)allTransitionIDs;
- (void)dealloc;
- (long long)transitionNeedsRandomSeedInformation:(id)arg1;
- (double)bestBeatTimeForTransitionID:(id)arg1;
- (double)beatStrengthForTransitionID:(id)arg1;
- (id)transitionPresetsMatchingCriteria:(id)arg1;
- (id)randomTransitionPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2;
- (id)constraintsForTransitionPresetsMatchingList:(id)arg1 andCriteria:(id)arg2;
- (id)initWithPaths:(id)arg1;

@end
