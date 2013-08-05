/***
 *  DPCrackDetection
 *  Created by ILYA2606 on 25.02.13.
 *  Copyright (c) 2013 Darkness Production. All rights reserved.
 ***/

#import <Foundation/Foundation.h>


@interface DPCrackDetection : NSObject

/***
 *  Activation debug mode. 
 *  Default is NO.
 *  If YES, method 'isCrackedApp' will be always return NO.
 *  ATTENTION: For distribution in the Appstore set up debugMode NO
 ***/

@property (nonatomic) BOOL debugMode;

/***
 *  Initialize DPCrackDetection4iOS
 *  @param licenseKey License Key for activation DPCrackDetection4iOS
 *  @return An initialized object.
 ***/

- (id) initWithLicenseKey:(NSString*)licenseKey;

/***
 *  Application checking for the cracking.
 *  ATTENTION: If the application is a test and did not pass in the Appstore release stage yet,
 *  the method will return YES, because the test application have the same data as cracked application.
 *  @return YES if the application data compromised (cracked). NO if the application data is not compromised
 ***/

- (BOOL) isCrackedApp;

/***
 *  Application checking for the presence of cracking and redirect to Appstore for purchasing.
 *  @param appleId Apple ID for open in the Appstore
 *  @param isExit exiting app after detection crack
 ***/

- (void) checkCrackedAppAndGoToAppstoreWithAppleId:(NSString*)appleId andExit:(BOOL)isExit;

@end
