DPCrackDetection
================

DPCrackDetection - is a static library that is able to detect the presence of cracking the application and to take certain measures. 
Definitions of cracking In-app purchase to set the library is not included.

Setup
================

    //import header
    #import "DPCrackDetection.h"

    //DPCrackDetection activation
    DPCrackDetection *crackDetection = [[DPCrackDetection alloc] initWithLicenseKey:@"LICENSE_KEY"];
    //enable debug mode. Before publishing in the Appstore must set to NO
    crackDetection.debugMode = YES;
    //check app
    [crackDetection checkCrackedAppAndGoToAppstoreWithAppleId:@"APPLE_ID" andExit:YES];
    
Purchase
================

The license key is tied to a specific application. 
To purchase a license key please e-mail dev@darknessproduction.com
