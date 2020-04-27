//
//  MZVideoCapturer.h
//  MZCamera
//
//  Created by user on 2/24/20.
//

#ifndef MZVideoCapturer_h
#define MZVideoCapturer_h

#import <WebRTC/WebRTC.h>

NS_ASSUME_NONNULL_BEGIN

@interface MZVideoCapturer : RTCVideoCapturer

- (instancetype)initWithSource: (RTCVideoSource*) source;
                            
- (void)putVideoSample:(CMSampleBufferRef)buffer;

- (void)adaptOutputFormatToWidth:(int)width height:(int)height fps:(int)fps;

@end

NS_ASSUME_NONNULL_END

#endif /* MZVideoCapturer_h */
