#
#  Created by teambition-ios on 2020/7/27.
#  Copyright © 2020 teambition. All rights reserved.
#     

Pod::Spec.new do |s|
  s.name             = 'KeyboardAvoiding'
  s.version          = '1.1.2'
  s.summary          = 'A Carthage compatible version of TPKeyboardAvoiding.'
  s.description      = <<-DESC
  A Carthage compatible version of TPKeyboardAvoiding.
                       DESC

  s.homepage         = 'https://github.com/teambition/KeyboardAvoiding'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'teambition mobile' => 'teambition-mobile@alibaba-inc.com' }
  s.source           = { :git => 'https://github.com/teambition/KeyboardAvoiding.git', :tag => s.version.to_s }

  s.source_files = 'KeyboardAvoiding/*.{h,m}'

end
