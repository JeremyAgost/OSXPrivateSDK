//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOAttributedRoute.h"

#import "GEOMapAccessRestrictions.h"
#import "VKOverlay.h"

@class GEOMapRegion, GEORoute, GEOZilchDecoder, NSArray, NSMutableArray, VKTrafficSegmentsAlongRoute;

@interface VKPolylineOverlay : GEOAttributedRoute <VKOverlay, GEOMapAccessRestrictions>
{
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    struct __CFSet *_observers;
    unsigned int _firstVisiblePoint;
    BOOL _isReadyForSnapping;
    BOOL _allowsNetworkTileLoad;
    struct unordered_map<VKPolylineOverlaySection *, std::__1::vector<VGLRect, vk_allocator<VGLRect>>, std::__1::hash<VKPolylineOverlaySection *>, std::__1::equal_to<VKPolylineOverlaySection *>, vk_allocator<std::__1::pair<VKPolylineOverlaySection *const, std::__1::vector<VGLRect, vk_allocator<VGLRect>>>>> _sectionToRectsMap;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute *_trafficSegments;
}

@property(nonatomic) BOOL allowsNetworkTileLoad; // @synthesize allowsNetworkTileLoad=_allowsNetworkTileLoad;
@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) VKTrafficSegmentsAlongRoute *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(nonatomic) unsigned int firstVisiblePoint; // @synthesize firstVisiblePoint=_firstVisiblePoint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)attributedRouteHasChanged;
- (BOOL)isSnappingForSceneTiles;
- (void)forEachSnappedPath:(CDUnknownBlockType)arg1;
- (void)clearPathsForObserver:(id)arg1;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_snapPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSnappedPathsForLocation:(id)arg1;
- (id)getPathsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(BOOL)arg4 snappingCompletionHandler:(CDUnknownBlockType)arg5;
- (BOOL)updateRectsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(BOOL)arg4;
- (BOOL)supportsSnapping;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 localRects:(const vector_3bee010d *)arg3;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2;
- (void)_addPolylinePathsForSection:(id)arg1 toPaths:(id)arg2;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (BOOL)resetTrafficWithRoute:(id)arg1 WithStep:(struct RouteCalibration *)arg2 trafficWalking:(struct TrafficWalking *)arg3 routeIndex:(int *)arg4;
- (void)updateTraffic;
- (void)calibrate:(struct RouteCalibration *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 forDistance:(unsigned int)arg4;
- (struct _NSRange)sectionRangeForBounds:(CDStruct_d2b197d1)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_buildSectionsFromRoute:(id)arg1;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (CDStruct_c3b9c2ee)coordinateAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) GEORoute *geoRoute;
- (void)_setNeedsLayout;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end
