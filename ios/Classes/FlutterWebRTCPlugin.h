#import <Flutter/Flutter.h>
#import <Foundation/Foundation.h>

#import <WebRTC/RTCDataChannel.h>
#import <WebRTC/RTCPeerConnection.h>
#import <WebRTC/RTCDataChannel.h>
#import <WebRTC/RTCDataChannelConfiguration.h>
#import <WebRTC/RTCMediaStreamTrack.h>

@class FlutterRTCVideoRenderer;

@interface FlutterWebRTCPlugin : NSObject<FlutterPlugin, RTCPeerConnectionDelegate>

@property (nonatomic, strong) RTCPeerConnectionFactory *peerConnectionFactory;
@property (nonatomic, strong) NSMutableDictionary<NSString *, RTCPeerConnection *> *peerConnections;
@property (nonatomic, strong) NSMutableDictionary<NSString *, RTCMediaStream *> *localStreams;
@property (nonatomic, strong) NSMutableDictionary<NSString *, RTCMediaStreamTrack *> *localTracks;
@property (nonatomic, strong) NSMutableDictionary<NSNumber *, FlutterRTCVideoRenderer *> *renders;
@property (nonatomic, retain) UIViewController *viewController;/*for broadcast or ReplayKit */

- (RTCMediaStream*)streamForId:(NSString*)streamId;

@end
