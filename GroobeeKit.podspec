 #
# Be sure to run `pod lib lint ${POD_NAME}.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GroobeeKit'
  s.version          = '1.0.5'
  s.summary          = 'GroobeeKit Framework Library'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                      GroobeeKit Extended Framework For Hybrid Application of Swift
                      DESC

  s.homepage         = 'http://plateer.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'Copyright', :file => <<-LICENSE
                          Copyright 2021 All Rights Reserved By Groobee
                          LICENSE
                        }

  s.author           = { 'GroobeeKit' => 'hongoon@plateer.com' }
  s.source           = { :git => 'https://github.com/groobee/groobee-kit-ios-sdk.git' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  s.vendored_frameworks = "GroobeeKit.xcframework"
  s.platform = :ios
  s.swift_version = "5.0"
  s.ios.deployment_target = '11.0'

  # s.dependency 'Alamofire', '~> 5.2' (example)
  
  # s.resource_bundles = {
  #   '${POD_NAME}' => ['${POD_NAME}/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
