Pod::Spec.new do |s|

  s.name          = "UniMPSDK"
  s.version       = "3.0.0"
  s.summary       = "UniMPSDK"
  s.homepage      = "https://github.com/moliya/UniMPSDK"
  s.license       = "MIT"
  s.author        = {'Carefree' => '946715806@qq.com'}
  s.source        = { :git => "https://github.com/moliya/UniMPSDK.git", :tag => s.version}
  s.requires_arc  = true
  s.platform      = :ios, '9.0'
  
  s.static_framework = true
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  s.frameworks = "JavaScriptCore", "CoreMedia", "MediaPlayer", "AVFoundation", "AVKit", "GLKit", "OpenGLES", "CoreText", "QuartzCore", "CoreGraphics", "QuickLook", "CoreTelephony", "AssetsLibrary", "CoreLocation", "AddressBook"
  s.libraries = "c++"

  s.default_subspecs = "Core"

  s.subspec "Core" do |ss|
    ss.subspec "Headers" do |sss|
      sss.source_files = "Core/Headers/*.h"

      sss.subspec "weexHeader" do |ssss|
        ssss.source_files = "Core/Headers/weexHeader/*.h"
      end
    end

    ss.subspec "Libs" do |sss|
      sss.vendored_library = "Core/Libs/*.a"
      sss.vendored_frameworks = "Core/Libs/*.framework"
    end
  end

  s.resources = ["Core/Resources/*.js", "Core/Resources/*.ttf", "Core/Resources/*.bundle"]
end
