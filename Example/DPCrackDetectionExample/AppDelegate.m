//
//  AppDelegate.m
//  DPCrackDetectionExample
//
//  Created by ILYA2606 on 05.08.13.
//  Copyright (c) 2013 Darkness Production. All rights reserved.
//

#import "AppDelegate.h"
#import "DPCrackDetection4iOS.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    DPCrackDetection4iOS *crackDetection = [[DPCrackDetection4iOS alloc] initWithLicenseKey:@"f7a888eaca3e1621b644329e"];
    crackDetection.debugMode = YES;
    [crackDetection checkCrackedAppAndGoToAppstoreWithAppleId:@"495655551" andExit:YES];
    return YES;
}
							
- (void)applicationWillResignActive:(UIApplication *)application
{
    
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    
}

@end
