//
//  KeyboardAvoidingScrollView.h
//  KeyboardAvoiding
//
//  Created by Zhu Shengqi on 4/13/16.
//  Copyright © 2016 dia. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UIScrollView+KeyboardAvoidingAdditions.h"

@interface KeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
