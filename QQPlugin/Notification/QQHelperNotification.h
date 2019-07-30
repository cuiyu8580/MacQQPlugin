//
//  QQHelperNotification.h
//  QQRedPackHelper
//
//  Created by tangxianhai on 2018/3/3.
//  Copyright © 2018年 tangxianhai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface QQHelperNotification : NSObject <NSTextFieldDelegate>

+ (instancetype)sharedInstance;

+ (void)showNotificationWithTitle:(NSString *)title content:(NSString *)content;

@end
