//
//  TKQQPluginConfig.h
//  QQPlugin
//
//  Created by TK on 2018/3/19.
//  Copyright © 2018年 TK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
@interface TKQQPluginConfig : NSObject

@property (nonatomic, assign) BOOL preventRevokeEnable;                 /**<    是否开启防撤回    */

@property (nonatomic, assign) BOOL isHideRedPacketWindow;                 /**<    是否隐藏红包弹窗    */

@property (nonatomic, assign) BOOL autoOpenRedPacket;                 /**<    是否开启自动抢红包    */

@property (nonatomic, assign) BOOL alfredEnable;                        /**<    是否开启Alfred   */  
@property (nonatomic, copy) NSMutableArray *autoReplyModels;            /**<    自动回复的数组    */


@property (nonatomic, strong) NSMutableArray *redPacControllers;


+ (instancetype)sharedConfig;
- (void)saveAutoReplyModels;



- (void)saveOneRedPacController:(NSViewController *)redPacVc;
- (void)closeRedPactWindowns;


@end
