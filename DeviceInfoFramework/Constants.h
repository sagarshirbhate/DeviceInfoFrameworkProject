//
//  Constants.h
//  GetDeviceInfoFrameworkProject
//
//  Created by Sagar Shirbhate on 7/14/16.
//  Copyright © 2016 Sagar Shirbhate. All rights reserved.
//

#ifndef Constants_h
#define Constants_h


#endif /* Constants_h */

// is device iPad
#define iPad ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad)

// is device iPhone
#define iPhone ([UIDevice currentDevice].userInterfaceIdiom != UIUserInterfaceIdiomPad)

//is device iphone 4s
#define iPhone4s  ([[UIScreen mainScreen] bounds].size.height == 480)?TRUE:FALSE

//is device iphone 5s or 5
#define iPhone5or5s  ([[UIScreen mainScreen] bounds].size.height == 568)?TRUE:FALSE

//is device iphone 6Plus or 6sPlus
#define iPhone6Plusor6sPlus  ([[UIScreen mainScreen] bounds].size.height == 736)?TRUE:FALSE

//is device iphone 6 or 6s
#define iPhone6or6s  ([[UIScreen mainScreen] bounds].size.height == 667)?TRUE:FALSE

// Get Device Name
#define DeviceName [[UIDevice currentDevice] name]

// Get Device System Name
#define DeviceSystemName [[UIDevice currentDevice] systemName]

// Get Device UUID
#define DeviceUUID [[[UIDevice currentDevice]identifierForVendor]UUIDString]

// GET Build Number
#define AppBuildNumber [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

// GET App Version
#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

// Device OS Is Greater than iOS8
#define IS_IOS8 ([[[UIDevice currentDevice] systemVersion]floatValue] >= 8.0f)

// Device OS Is Greater than iOS9
#define IS_IOS9 ([[[UIDevice currentDevice] systemVersion]floatValue] >= 9.0f)

// Device OS Is Greater than iOS10
#define IS_IOS10 ([[[UIDevice currentDevice] systemVersion]floatValue] >= 10.0f)

// Get Screen Width
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)

//get Screen Height
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)

//get is device Landscape Mode
#define iS_Landscape ([[UIDevice currentDevice] orientation] == UIDeviceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation ]== UIDeviceOrientationLandscapeRight)?TRUE:FALSE

//get is device Portrait Mode
#define iS_Portrait ([[UIDevice currentDevice] orientation] == UIDeviceOrientationPortrait || [[UIDevice currentDevice] orientation] == UIDeviceOrientationPortraitUpsideDown )?TRUE:FALSE

//get Color From HEX Values
#define UIColorFromHEX(rgbValue) [UIColor \ colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \ green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \ blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

