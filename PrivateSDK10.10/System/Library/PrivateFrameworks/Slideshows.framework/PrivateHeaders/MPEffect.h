/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPActionableSupport-Protocol.h"
#import "MPActionableSupportInternal-Protocol.h"
#import "MPAnimationSupport-Protocol.h"
#import "MPAudioSupport-Protocol.h"
#import "MPEffectSupport-Protocol.h"
#import "MPFilterSupport-Protocol.h"
#import "MPGeometrySupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, NSArray, NSMutableArray, NSMutableDictionary, NSObject<MZEffectTiming>, NSString;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport>
{
    NSMutableArray *_slides;
    NSMutableArray *_secondarySlides;
    NSMutableArray *_texts;
    NSMutableArray *_filters;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_animationPaths;
    MCContainerEffect *_container;
    MCPlugParallel *_plug;
    MPAudioPlaylist *_audioPlaylist;
    MPEffectContainer *_parentContainer;
    BOOL _replaceSlides;
    BOOL _supportsEffectTiming;
    BOOL _skipEffectTiming;
    NSObject<MZEffectTiming> *_effectTiming;
    double _opacity;
    struct CGPoint _position;
    double _zPosition;
    struct CGSize _size;
    double _rotationAngle;
    double _xRotationAngle;
    double _yRotationAngle;
    double _scale;
    double _timeIn;
    double _phaseInDuration;
    double _phaseOutDuration;
    double _mainDuration;
    NSString *_effectID;
    NSString *_presetID;
    long long _audioPriority;
    long long _randomSeed;
    NSString *_uuid;
    long long _liveIndex;
    BOOL _cleaningUp;
}

+ (id)effectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
+ (id)effectWithEffectID:(id)arg1 andStrings:(id)arg2;
+ (id)effectWithEffectID:(id)arg1 andPaths:(id)arg2;
+ (id)effectWithEffectID:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSObject<MZEffectTiming> *effectTiming; // @synthesize effectTiming=_effectTiming;
- (void)setRandomSeed:(long long)arg1;
- (long long)randomSeed;
- (id)parentContainer;
- (void)setAudioPriority:(long long)arg1;
- (long long)audioPriority;
- (void)setAudioPlaylist:(id)arg1;
- (id)audioPlaylist;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)setAnimationPath:(id)arg1 forKey:(id)arg2;
- (id)animationPathForKey:(id)arg1;
- (id)animationPaths;
- (void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)arg1;
- (void)insertFilters:(id)arg1 atIndex:(long long)arg2;
- (void)addFilters:(id)arg1;
- (void)addFilter:(id)arg1;
- (id)filters;
- (BOOL)isTextOnly;
- (void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(id)arg1;
- (void)insertTexts:(id)arg1 atIndex:(long long)arg2;
- (void)addTexts:(id)arg1;
- (void)addText:(id)arg1;
@property(readonly, nonatomic) NSArray *texts;
- (double)lowestDisplayTime;
- (void)_updateTiming:(BOOL)arg1 forExport:(BOOL)arg2;
- (void)_updateTiming:(BOOL)arg1;
- (void)_updateEffectTimingWithDocument:(id)arg1 forExport:(BOOL)arg2;
- (void)_updateEffectTimingWithDocument:(id)arg1;
@property(nonatomic) BOOL replaceSlides;
- (BOOL)supportsUnlimitedSlides;
- (void)removeAllSecondarySlides;
- (void)removeSecondarySlidesAtIndices:(id)arg1;
- (void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSecondarySlides:(id)arg1;
- (void)addSecondarySlide:(id)arg1;
- (id)secondarySlides;
- (void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)replaceSlide:(id)arg1 atIndex:(long long)arg2;
- (void)replaceSlideAtIndex:(long long)arg1 withSlide:(id)arg2;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(id)arg1;
- (void)insertSlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSlides:(id)arg1;
- (void)addSlide:(id)arg1;
@property(readonly, nonatomic) NSArray *slides;
- (long long)zIndex;
@property(nonatomic) double mainDuration;
@property(nonatomic) double phaseOutDuration;
@property(nonatomic) double phaseInDuration;
- (void)setFullDuration:(double)arg1;
- (double)fullDuration;
- (void)setYRotationAngle:(double)arg1;
- (double)yRotationAngle;
- (void)setXRotationAngle:(double)arg1;
- (double)xRotationAngle;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (void)setZPosition:(double)arg1;
- (double)zPosition;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setScale:(double)arg1;
- (double)scale;
- (void)setOpacity:(double)arg1;
- (double)opacity;
- (void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
- (id)effectAttributeForKey:(id)arg1;
- (void)setEffectAttributes:(id)arg1;
- (id)effectAttributes;
@property(copy, nonatomic) NSString *presetID;
@property(copy, nonatomic) NSString *effectID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
- (id)initWithEffectID:(id)arg1 andStrings:(id)arg2;
- (id)initWithEffectID:(id)arg1 andPaths:(id)arg2;
- (id)initWithEffectID:(id)arg1;
- (id)effectPresetID;
- (id)videoPaths;
- (id)fullDebugLog;
- (void)dump;
- (void)reconfigureSlides;
- (void)createSecondarySlidesWithPaths:(id)arg1;
- (void)createSlidesWithPaths:(id)arg1;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2;
- (void)replaceTextsWitStrings:(id)arg1;
- (void)createTextsWithDefaultStrings;
- (id)plug;
- (id)container;
- (void)setLiveIndex:(long long)arg1;
- (long long)liveIndex;
- (long long)maxNumberOfSecondarySlides;
- (long long)maxNumberOfSlides;
- (id)slideForMCSlide:(id)arg1;
- (id)nearestLayerGroup;
- (BOOL)hasPanoramasInDocument:(id)arg1;
- (BOOL)hasMovies;
- (void)scaleMainDuration;
- (BOOL)needsParallelizer;
- (void)setParentContainer:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setPlug:(id)arg1;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyFilters:(id)arg1;
- (void)copyTexts:(id)arg1;
- (void)copySecondarySlides:(id)arg1;
- (void)copySlides:(id)arg1;
- (void)copyVars:(id)arg1;
- (id)nearestPlug;
- (id)parentDocument;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (void)updateEffectAttributes;
- (id)slideInformationWithDocument:(id)arg1;
- (BOOL)supportsEffectTiming;
- (void)applyFormattedAttributes;
- (id)formattedAttributes;
- (id)_effectAttributes;
- (void)updateTimingForExport;
- (void)updateTiming;
- (void)setSkipEffectTiming:(BOOL)arg1;
- (BOOL)isLive;
- (id)objectSpecifier;
- (void)setupDefaultDurations:(id)arg1;
- (void)setScriptingAnimations:(id)arg1;
- (id)scriptingAnimations;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setYPosition:(double)arg1;
- (double)yPosition;
- (void)setXPosition:(double)arg1;
- (double)xPosition;
- (void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromFiltersAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2;
- (id)objectInFiltersAtIndex:(long long)arg1;
- (long long)countOfFilters;
- (void)replaceObjectInTextsAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromTextsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inTextsAtIndex:(long long)arg2;
- (id)objectInTextsAtIndex:(long long)arg1;
- (long long)countOfTexts;
- (void)replaceObjectInSlidesAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromSlidesAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inSlidesAtIndex:(long long)arg2;
- (id)objectInSlidesAtIndex:(long long)arg1;
- (long long)countOfSlides;

@end

