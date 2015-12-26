//
//  JPush.h
//  test2
//
//  Created by 汪高明 on 15/12/26.
//  Copyright © 2015年 汪高明. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"
#import "APService.h"


@interface JPush : NSObject

/**
 *  注册极光推送
 *
 */
+(void)registerRemotePushService:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

/**
 *  向服务器上报Device Token
 *
 *  @param deviceToken 设备token值
 */
+(void)registerDeviceToken:(NSData *)deviceToken;


/**
 *  处理收到的APNS消息，向服务器上报收到APNS消息
 */
+(void)handleRemoteNotification:(NSDictionary *)userInfo;


/**
 *  IOS 7 Support Required
 *
 */
+(void)handleRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

/**
 *  设置 tag值和别名
 *
 *  @param tags       tag值 是标志唯一设备
 *  @param alias      alias 是标志一类用户
 */
+ (void)setTags:(NSSet *)tags
          alias:(NSString *)alias;
@end
