#import <Foundation/Foundation.h>
#import <Mapbox/Mapbox.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString *const MBXCamera;
FOUNDATION_EXTERN NSString *const MBXUserTrackingMode;
FOUNDATION_EXTERN NSString *const MBXShowsUserLocation;
FOUNDATION_EXTERN NSString *const MBXShowsDebugMask;
FOUNDATION_EXTERN NSString *const MBXShowsZoomLevelHUD;
FOUNDATION_EXTERN NSString *const MBXShowsTimeFrameGraph;

@interface MBXState : NSObject

@property (nonatomic, nullable) NSMutableDictionary *state;

@property (nonatomic, nullable) MGLMapCamera *camera;
@property (nonatomic, nullable) MGLUserTrackingMode *userTrackingMode;
@property (nonatomic) BOOL showsUserLocation;
@property (nonatomic) BOOL showsDebugMask;
@property (nonatomic) BOOL showsZoomLevelHUD;
@property (nonatomic) BOOL showsTimeFrameGraph;

- (void)saveMapCameraState:(MGLMapCamera *)camera;
- (void)saveUserTrackingModeState:(MGLUserTrackingMode)trackingMode;
- (void)saveShowsUserLocationState:(BOOL)showUserLocation;
- (void)saveDebugMaskState:(NSInteger)showDebugMask;
- (void)saveZoomLevelHUDState:(BOOL)showsZoomLevelHUD;
- (void)saveDisplayTimeFrameGraphState:(BOOL)displayTimeFramGraphState;

@end

NS_ASSUME_NONNULL_END
