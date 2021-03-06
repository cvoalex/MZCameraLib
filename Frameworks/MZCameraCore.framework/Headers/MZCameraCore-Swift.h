// Generated by Apple Swift version 5.1.3 effective-4.2 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreMedia;
@import Dispatch;
@import Foundation;
@import MZStreamCore;
@import ObjectiveC;
@import WebRTC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MZCameraCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC12MZCameraCore12MZConnection")
@interface MZConnection : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class RTCPeerConnection;
@class RTCMediaStream;
@class RTCIceCandidate;
@class RTCDataChannel;

@interface MZConnection (SWIFT_EXTENSION(MZCameraCore)) <RTCPeerConnectionDelegate>
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeSignalingState:(RTCSignalingState)stateChanged;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didAddStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceConnectionState:(RTCIceConnectionState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceGatheringState:(RTCIceGatheringState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didGenerateIceCandidate:(RTCIceCandidate * _Nonnull)candidate;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveIceCandidates:(NSArray<RTCIceCandidate *> * _Nonnull)candidates;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didOpenDataChannel:(RTCDataChannel * _Nonnull)dataChannel;
- (void)peerConnectionShouldNegotiate:(RTCPeerConnection * _Nonnull)peerConnection;
@end


SWIFT_CLASS("_TtC12MZCameraCore17MZParticipantList")
@interface MZParticipantList : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MZCameraCore17MZParticipantType")
@interface MZParticipantType : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MZCameraCore10MZPeerInfo")
@interface MZPeerInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MZCameraCore10MZUserInfo")
@interface MZUserInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP12MZCameraCore14RoomMediaTrack_")
@protocol RoomMediaTrack
- (NSString * _Nonnull)getTrackId SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP12MZCameraCore14RoomAudioTrack_")
@protocol RoomAudioTrack <RoomMediaTrack>
@end


@interface RTCAudioTrack (SWIFT_EXTENSION(MZCameraCore)) <RoomAudioTrack>
- (NSString * _Nonnull)getTrackId SWIFT_WARN_UNUSED_RESULT;
@end

@protocol RoomVideoTrack;

SWIFT_PROTOCOL("_TtP12MZCameraCore15RoomMediaStream_")
@protocol RoomMediaStream
@property (nonatomic, readonly, copy) NSArray<id <RoomAudioTrack>> * _Nonnull audioStreams;
@property (nonatomic, readonly, copy) NSArray<id <RoomVideoTrack>> * _Nonnull videoStreams;
@end


@interface RTCMediaStream (SWIFT_EXTENSION(MZCameraCore)) <RoomMediaStream>
@property (nonatomic, readonly, copy) NSArray<id <RoomAudioTrack>> * _Nonnull audioStreams;
@property (nonatomic, readonly, copy) NSArray<id <RoomVideoTrack>> * _Nonnull videoStreams;
@end






SWIFT_PROTOCOL("_TtP12MZCameraCore14RoomVideoTrack_")
@protocol RoomVideoTrack <RoomMediaTrack>
@end


@interface RTCVideoTrack (SWIFT_EXTENSION(MZCameraCore)) <RoomVideoTrack>
- (NSString * _Nonnull)getTrackId SWIFT_WARN_UNUSED_RESULT;
@end





SWIFT_PROTOCOL("_TtP12MZCameraCore17RoomVideoDelegate_")
@protocol RoomVideoDelegate
@optional
- (void)roomVideoDidConnectSignalServer;
- (void)roomVideoDidDisconnectSignalServer;
- (void)roomVideoDidSendWithPeerId:(NSString * _Nonnull)peerId and:(id <RoomVideoTrack> _Nonnull)videoTrack;
- (void)roomVideoDidSendWithPeerId:(NSString * _Nonnull)peerId mediaStream:(id <RoomMediaStream> _Nonnull)mediaStream;
- (void)roomVideoDidLeaveWithPeerId:(NSString * _Nonnull)peerId;
- (void)roomVideoDidJoinWithPeerId:(NSString * _Nonnull)peerId;
- (void)roomVideoDidUpdateWithPeerId:(NSString * _Nonnull)peerId sdp:(NSString * _Nonnull)sdp;
- (void)roomVideoDidSendWithLimitMessage:(NSString * _Nonnull)limitMessage;
- (void)roomVideoWithPeerId:(NSString * _Nonnull)peerId didUpdateVideo:(BOOL)enable;
- (void)roomVideoDidReceiveWithParticipants:(MZParticipantList * _Nonnull)list joinedWithType:(MZParticipantType * _Nonnull)type;
- (void)roomVideoDidReceivePubRequestFrom:(MZUserInfo * _Nonnull)user;
- (void)roomVideoDidReceivePubAcceptFrom:(NSString * _Nonnull)userId;
- (void)roomVideoDidReceivePubRejectFrom:(NSString * _Nonnull)userId;
- (void)roomVideoDidLeave;
@end



SWIFT_CLASS("_TtC12MZCameraCore13VideoPipeline")
@interface VideoPipeline : NSObject
- (void)toggleVideoWithIsEnabled:(BOOL)isEnabled;
- (void)toggleAudioWithIsEnabled:(BOOL)isEnabled;
- (void)stopStreamingWithLeave:(BOOL)leave;
- (void)startLiveStreamingWithId:(NSString * _Nonnull)id video:(BOOL)video audio:(BOOL)audio;
- (void)startChunkedVideoRecording;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MZCameraCore19StreamVideoPipeline")
@interface StreamVideoPipeline : VideoPipeline
- (void)startLiveStreamingWithId:(NSString * _Nonnull)id video:(BOOL)video audio:(BOOL)audio;
- (void)startChunkedVideoRecording;
- (void)stopStreamingWithLeave:(BOOL)leave;
- (BOOL)audioSamplingSupported SWIFT_WARN_UNUSED_RESULT;
@end


@interface StreamVideoPipeline (SWIFT_EXTENSION(MZCameraCore)) <FrameQueueDelegate>
- (void)frameDequeued:(CMSampleBufferRef _Nonnull)sampleBuffer;
@end


@interface StreamVideoPipeline (SWIFT_EXTENSION(MZCameraCore))
- (void)compressedVideoDataReceived:(CMSampleBufferRef _Null_unspecified)sampleBuffer;
- (void)compressedAudioDataReceived:(uint8_t * _Null_unspecified)data size:(NSInteger)size pts:(CMTime)pts;
@end





@class MP4SegmentDescriptor;

@interface StreamVideoPipeline (SWIFT_EXTENSION(MZCameraCore)) <LiveStreamerConsolidatedDelegate>
- (void)segmentDataReceived:(NSData * _Null_unspecified)data trackID:(uint32_t)trackID mediaType:(AVMediaType _Null_unspecified)mediaType initSegment:(BOOL)initSegment rap:(BOOL)randomAccessPoint segmentIndex:(NSUInteger)segmentIndex fragmentIndex:(NSUInteger)fragmentIndex segmentStart:(BOOL)segmentStart timestamp:(double)firstPts;
- (void)playlistData:(NSString * _Null_unspecified)playlist trackID:(uint32_t)trackID mediaType:(AVMediaType _Null_unspecified)mediaType;
- (void)rootPlaylistData:(NSString * _Null_unspecified)playlist;
- (void)consolidatedDataReceived:(NSArray<MP4SegmentDescriptor *> * _Null_unspecified)descriptors;
@end


SWIFT_CLASS("_TtC12MZCameraCore12TrafficAlert")
@interface TrafficAlert : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface TrafficAlert (SWIFT_EXTENSION(MZCameraCore))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12MZCameraCore14TrafficMonitor")
@interface TrafficMonitor : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end








SWIFT_CLASS("_TtC12MZCameraCore14TrafficSummary")
@interface TrafficSummary : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



@interface VideoPipeline (SWIFT_EXTENSION(MZCameraCore)) <FDKAACEncoderDelegate>
- (BOOL)audioSamplingSupported SWIFT_WARN_UNUSED_RESULT;
- (void)createAudioTranscoder;
- (void)compressedAudioDataReceived:(uint8_t * _Null_unspecified)data size:(NSInteger)size pts:(CMTime)pts;
@end


@interface VideoPipeline (SWIFT_EXTENSION(MZCameraCore)) <GenericEncoderDelegate>
- (void)compressedVideoDataReceived:(CMSampleBufferRef _Null_unspecified)sampleBuffer;
@end





@class BitrateAdjustParams;
@class VideoQualityAdjustParams;
@class VideoQualityAdjustSettings;

@interface VideoPipeline (SWIFT_EXTENSION(MZCameraCore))
- (void)setWithBitrateAdjustCallback:(NSInteger (^ _Nonnull)(BitrateAdjustParams * _Nonnull))bitrateAdjustCallback;
- (void)setWithVideoQualityAdjustCallback:(VideoQualityAdjustSettings * _Nonnull (^ _Nonnull)(VideoQualityAdjustParams * _Nonnull))videoQualityAdjustCallback;
@end


SWIFT_PROTOCOL("_TtP12MZCameraCore21VideoPipelineDelegate_")
@protocol VideoPipelineDelegate <RoomVideoDelegate>
@optional
- (void)pipelineMP4FileRecorded:(NSURL * _Nonnull)filePath;
- (void)pipelineStateChanged:(VideoPipeline * _Nonnull)sender;
- (void)segmentDataReceived:(NSData * _Null_unspecified)data trackID:(uint32_t)trackID mediaType:(AVMediaType _Null_unspecified)mediaType initSegment:(BOOL)initSegment rap:(BOOL)randomAccessPoint segmentIndex:(NSUInteger)segmentIndex fragmentIndex:(NSUInteger)fragmentIndex segmentStart:(BOOL)segmentStart timestamp:(double)firstPts;
- (void)consolidatedDataReceived:(NSArray<MP4SegmentDescriptor *> * _Null_unspecified)descriptors;
- (void)playlistData:(NSString * _Null_unspecified)playlist trackID:(uint32_t)trackID mediaType:(AVMediaType _Null_unspecified)mediaType;
- (void)rootPlaylistData:(NSString * _Null_unspecified)playlist;
- (void)trafficStateChanged:(TrafficMonitor * _Nonnull)monitor;
- (void)trafficStatisticChange:(TrafficSummary * _Nonnull)summary;
- (void)trafficNetworkChange:(TrafficAlert * _Nonnull)alert;
@end


SWIFT_CLASS("_TtC12MZCameraCore19WebRTCVideoPipeline")
@interface WebRTCVideoPipeline : VideoPipeline
- (void)toggleVideoWithIsEnabled:(BOOL)isEnabled;
- (void)toggleAudioWithIsEnabled:(BOOL)isEnabled;
- (void)stopStreamingWithLeave:(BOOL)leave;
- (void)startLiveStreamingWithId:(NSString * _Nonnull)id video:(BOOL)video audio:(BOOL)audio;
- (void)startChunkedVideoRecording;
- (BOOL)audioSamplingSupported SWIFT_WARN_UNUSED_RESULT;
- (void)createAudioTranscoder;
- (void)setWithBitrateAdjustCallback:(NSInteger (^ _Nonnull)(BitrateAdjustParams * _Nonnull))clb;
- (void)setWithVideoQualityAdjustCallback:(VideoQualityAdjustSettings * _Nonnull (^ _Nonnull)(VideoQualityAdjustParams * _Nonnull))clb;
@end




@interface WebRTCVideoPipeline (SWIFT_EXTENSION(MZCameraCore))
@end


@interface WebRTCVideoPipeline (SWIFT_EXTENSION(MZCameraCore)) <FrameQueueDelegate>
- (void)frameDequeued:(CMSampleBufferRef _Nonnull)sampleBuffer;
@end





enum WebSocketReadyState : NSInteger;

/// WebSocket objects are bidirectional network streams that communicate over HTTP. RFC 6455.
SWIFT_CLASS("_TtC12MZCameraCore9WebSocket")
@interface WebSocket : NSObject
@property (nonatomic, readonly) NSUInteger hash;
- (BOOL)isEqual:(id _Nullable)other SWIFT_WARN_UNUSED_RESULT;
/// Create a WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond.
- (nonnull instancetype)init:(NSString * _Nonnull)url;
/// Create a WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond.
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url;
/// Create a WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond. Also include a list of protocols.
- (nonnull instancetype)init:(NSString * _Nonnull)url subProtocols:(NSArray<NSString *> * _Nonnull)subProtocols;
/// Create a WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond. Also include a protocol.
- (nonnull instancetype)init:(NSString * _Nonnull)url subProtocol:(NSString * _Nonnull)subProtocol;
/// Create a WebSocket connection from an NSURLRequest; Also include a list of protocols.
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request subProtocols:(NSArray<NSString *> * _Nonnull)subProtocols OBJC_DESIGNATED_INITIALIZER;
/// Create a WebSocket object with a deferred connection; the connection is not opened until the .open() method is called.
- (nonnull instancetype)init;
/// The URL as resolved by the constructor. This is always an absolute URL. Read only.
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
/// A string indicating the name of the sub-protocol the server selected; this will be one of the strings specified in the protocols parameter when creating the WebSocket object.
@property (nonatomic, readonly, copy) NSString * _Nonnull subProtocol;
/// Allow for Self-Signed SSL Certificates. Default is false.
@property (nonatomic) BOOL allowSelfSignedSSL;
/// The queue for firing off events. default is main_queue
@property (nonatomic, strong) dispatch_queue_t _Nullable eventQueue;
/// The current state of the connection; this is one of the WebSocketReadyState constants. Read only.
@property (nonatomic, readonly) enum WebSocketReadyState readyState;
/// Opens a deferred or closed WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond.
- (void)open:(NSString * _Nonnull)url;
/// Opens a deferred or closed WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond.
- (void)openWithNsurl:(NSURL * _Nonnull)url;
/// Opens a deferred or closed WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond. Also include a list of protocols.
- (void)open:(NSString * _Nonnull)url subProtocols:(NSArray<NSString *> * _Nonnull)subProtocols;
/// Opens a deferred or closed WebSocket connection to a URL; this should be the URL to which the WebSocket server will respond. Also include a protocol.
- (void)open:(NSString * _Nonnull)url subProtocol:(NSString * _Nonnull)subProtocol;
/// Opens a deferred or closed WebSocket connection from an NSURLRequest; Also include a list of protocols.
- (void)openWithRequest:(NSURLRequest * _Nonnull)request subProtocols:(NSArray<NSString *> * _Nonnull)subProtocols;
/// Opens a closed WebSocket connection from an NSURLRequest; Uses the same request and protocols as previously closed WebSocket
- (void)open;
/// Closes the WebSocket connection or connection attempt, if any. If the connection is already closed or in the state of closing, this method does nothing.
/// :param: code An integer indicating the status code explaining why the connection is being closed. If this parameter is not specified, a default value of 1000 (indicating a normal closure) is assumed.
/// :param: reason A human-readable string explaining why the connection is closing. This string must be no longer than 123 bytes of UTF-8 text (not characters).
- (void)close:(NSInteger)code reason:(NSString * _Nonnull)reason;
/// Transmits message to the server over the WebSocket connection.
/// :param: message The message to be sent to the server.
- (void)send:(id _Nonnull)message;
/// Transmits a ping to the server over the WebSocket connection.
/// :param: optional message The data to be sent to the server.
- (void)ping:(id _Nonnull)message;
/// Transmits a ping to the server over the WebSocket connection.
- (void)ping;
@end


@interface WebSocket (SWIFT_EXTENSION(MZCameraCore))
- (void)sendWithText:(NSString * _Nonnull)text frameSize:(NSInteger)frameSize maxFrame:(NSInteger)maxFrame;
@end

@protocol WebSocketDelegate;

@interface WebSocket (SWIFT_EXTENSION(MZCameraCore))
/// The events of the WebSocket using a delegate.
@property (nonatomic, strong) id <WebSocketDelegate> _Nullable delegate;
/// Transmits message to the server over the WebSocket connection.
/// :param: text The message (string) to be sent to the server.
- (void)sendWithText:(NSString * _Nonnull)text;
/// Transmits message to the server over the WebSocket connection.
/// :param: data The message (binary) to be sent to the server.
- (void)sendWithData:(NSData * _Nonnull)data;
@end

@class NSError;

/// WebSocketDelegate is an Objective-C alternative to WebSocketEvents and is used to delegate the events for the WebSocket connection.
SWIFT_PROTOCOL("_TtP12MZCameraCore17WebSocketDelegate_")
@protocol WebSocketDelegate
/// A function to be called when the WebSocket connection’s readyState changes to .Open; this indicates that the connection is ready to send and receive data.
- (void)webSocketOpen;
/// A function to be called when the WebSocket connection’s readyState changes to .Closed.
- (void)webSocketClose:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean;
/// A function to be called when an error occurs.
- (void)webSocketError:(NSError * _Nonnull)error;
@optional
/// A function to be called when a message (string) is received from the server.
- (void)webSocketMessageText:(NSString * _Nonnull)text;
/// A function to be called when a message (binary) is received from the server.
- (void)webSocketMessageData:(NSData * _Nonnull)data;
/// A function to be called when a pong is received from the server.
- (void)webSocketPong;
/// A function to be called when the WebSocket process has ended; this event is guarenteed to be called once and can be used as an alternative to the “close” or “error” events.
- (void)webSocketEnd:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean error:(NSError * _Nullable)error;
@end

/// The WebSocketReadyState enum is used by the readyState property to describe the status of the WebSocket connection.
typedef SWIFT_ENUM(NSInteger, WebSocketReadyState, closed) {
/// The connection is not yet open.
  WebSocketReadyStateConnecting = 0,
/// The connection is open and ready to communicate.
  WebSocketReadyStateOpen = 1,
/// The connection is in the process of closing.
  WebSocketReadyStateClosing = 2,
/// The connection is closed or couldn’t be opened.
  WebSocketReadyStateClosed = 3,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
