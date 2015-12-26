# GMPush
对第三方推送进行封装
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {</p>
    //注册极光推送</p>
    [JPush registerRemotePushService:application withOptions:launchOptions];</p>
    
    return YES;</p>
}</p>

//上传设备token</p>
-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken</p>
{</p>
    [JPush registerDeviceToken:deviceToken];</p>
}</p>

// 处理收到的APNS消息，向服务器上报收到APNS消息</p>
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo</p>
{</p>
    [JPush handleRemoteNotification:userInfo];</p>
}</p>

//ios7</p>
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo</p> fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler</p>
{</p>
    [JPush handleRemoteNotification:userInfo fetchCompletionHandler:completionHandler];</p>
}</p>
