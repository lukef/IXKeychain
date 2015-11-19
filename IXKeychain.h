//
//  IXKeychain.m
//  DishFreely
//
//  Created by Luke Freeman on 10/6/11.
//  Copyright (c) 2011 Luke Freeman. All rights reserved.
//
//  Based on Keychain class from the OpenStack (Rackspace) project
//	https://github.com/rackspace/rackspace-ios
//

#import <Foundation/Foundation.h>

@interface Keychain : NSObject

+ (NSString *)serviceName;
+ (void)setServiceName:(NSString*)serviceName;

+ (BOOL)setSecureValue:(NSString *)string forKey:(NSString *)key;
+ (NSString *)secureValueForKey:(NSString *)key;
+ (BOOL)removeSecureValueForKey:(NSString *)aKey;

+ (OSStatus)valueStatusForKey:(NSString *)aKey;
+ (BOOL)hasValueForKey:(NSString *)aKey;

@end
