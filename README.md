# GMPush
对第三方推送进行封装
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {/br
    //注册极光推送/br
    [JPush registerRemotePushService:application withOptions:launchOptions];/br
    
    return YES;/br
}/br

//上传设备token/br
-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken/br
{/br
    [JPush registerDeviceToken:deviceToken];/br
}/br

// 处理收到的APNS消息，向服务器上报收到APNS消息/br
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo/br
{/br
    [JPush handleRemoteNotification:userInfo];/br
}/br

//ios7/br
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler/br
{/br
    [JPush handleRemoteNotification:userInfo fetchCompletionHandler:completionHandler];/br
}/br
