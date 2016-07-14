//
//  UIDeviceHardware.h
//  GetDeviceInfoFrameworkProject
//
//  Created by Sagar Shirbhate on 7/14/16.
//  Copyright © 2016 Sagar Shirbhate. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIDeviceHardware : NSObject


/**
*  @author Sagar Shirbhate, 16-07-14 12:07:15
*
*  The model name of the device. For example, `iPhone5,3`, `iPad3,1`, `iPod5,1`
*
*  @return The current devices model name as a string
*/
+ (NSString *) platform;


/**
 *  @author Sagar Shirbhate, 16-07-14 12:07:43
 *
 *   The human readable platform string. For example, `iPhone 5C (GSM)`, `iPad 3 (WiFi)`, `iPod Touch 5G`.
 *
 *  @return The current devices platform string in a human readable format
 */
+ (NSString *) platformString;


/**
 *  @author Sagar Shirbhate, 16-07-14 12:07:22
 *
 *  The human readable platform string Simple. For example, `iPhone 5C`, `iPad 3`, `iPod Touch 5G`.
 *
 *  @return The current devices platform string in a human readable format
 */
+ (NSString *) platformStringSimple;


/**
 *  @author Sagar Shirbhate, 16-07-14 12:07:09
 *
 *  Get Unique Device Token to Store in server side with Device Token ID Generated For Push Notification
 *
 *  @return uniqueDeviceTokenMadefromUUID
 */
+ (NSString *)uniqueDeviceToken;

@end
