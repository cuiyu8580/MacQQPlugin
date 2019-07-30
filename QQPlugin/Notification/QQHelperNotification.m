//
//  QQHelperNotification.m
//  QQRedPackHelper
//
//  Created by tangxianhai on 2018/3/3.
//  Copyright © 2018年 tangxianhai. All rights reserved.
//

#import "QQHelperNotification.h"

@implementation QQHelperNotification

static QQHelperNotification *instance = nil;

+ (instancetype)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[[self class] alloc] init];
    });
    return instance;
}
+ (void)showNotificationWithTitle:(NSString *)title content:(NSString *)content {
    NSUserNotification *localNotify = [[NSUserNotification alloc] init];
    localNotify.title = title;
    localNotify.informativeText = content;
    localNotify.soundName = NSUserNotificationDefaultSoundName;
    [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:localNotify];
}

@end
