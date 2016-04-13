//
//  UIScrollView+KeyboardAvoidingAdditions.h
//  KeyboardAvoiding
//
//  Created by Zhu Shengqi on 4/13/16.
//  Copyright © 2016 dia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (KeyboardAvoidingAdditions)


- (BOOL)KeyboardAvoiding_focusNextTextField;
- (void)KeyboardAvoiding_scrollToActiveTextField;

- (void)KeyboardAvoiding_keyboardWillShow:(NSNotification*)notification;
- (void)KeyboardAvoiding_keyboardWillHide:(NSNotification*)notification;
- (void)KeyboardAvoiding_updateContentInset;
- (void)KeyboardAvoiding_updateFromContentSizeChange;
- (void)KeyboardAvoiding_assignTextDelegateForViewsBeneathView:(UIView*)view;
- (UIView*)KeyboardAvoiding_findFirstResponderBeneathView:(UIView*)view;
- (CGSize)KeyboardAvoiding_calculatedContentSizeFromSubviewFrames;

@end
