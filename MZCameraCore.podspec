#
# Be sure to run `pod lib lint MZCamera.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MZCameraCore'
  s.version          = '0.1.3'
  s.summary          = 'A short description of MZCameraCore.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/derek-x-wang/MZCamera'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'derek-x-wang' => 'derekxinzhewang@gmail.com' }
  s.source           = { :git => 'https://github.com/derek-x-wang/MZCameraCore.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.swift_version = '4.2'
  s.ios.deployment_target = '12.2'
  s.static_framework = false

  
  # s.resource_bundles = {
  #   'MZCamera' => ['MZCamera/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.libraries = 'z'
  s.frameworks = 'CoreMedia', 'CoreVideo', 'AudioToolbox', 'VideoToolbox', 'AVFoundation', 'ARKit'
  s.dependency 'MZStreamCore'
  s.dependency 'MetalPetal'
  s.dependency 'MetalPetal/Swift'
  s.dependency 'Starscream', '<= 3.1.0'

  # MZStreamNetwork
  s.dependency 'Repeat'
  s.dependency 'Moya', '~> 14.0.0-beta.5'
  s.dependency 'SwiftNIO', '~> 2.0.0'
  s.dependency 'SwiftNIOWebSocket', '~> 2.0.0'
  s.dependency 'SwiftNIOTransportServices', '~> 1.0.0'
  s.dependency 'ReachabilitySwift'
  
  # s.source_files = 'MZCamera/Classes/Core/**/*.{swift,h,m}'
  s.xcconfig = {
    # GoogleWebRTC (MZRTC) wasn't compiled with bitcode
    'ENABLE_BITCODE' => 'NO',
  }
  s.vendored_frameworks = ['Frameworks/WebRTC.framework', 'Frameworks/MZCameraCore.framework']
  
  s.default_subspec = "Default"
  s.subspec 'Default' do |t|
    t.xcconfig = { }
  end
  s.subspec 'DebugVideoFrames' do |t|
    t.xcconfig = {
      "GCC_PREPROCESSOR_DEFINITIONS" => '$(inherited) DEBUG_VIDEO_FRAMES=1',
      "OTHER_CFLAGS" => '$(inherited) -DDEBUG_VIDEO_FRAMES=1',
      "OTHER_SWIFT_FLAGS" => '$(inherited) -D DEBUG_VIDEO_FRAMES',
    }
  end
end
