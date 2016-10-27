////////////////////////////////////////////////////////////////////////////
//
// Copyright 2016 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#import "RLMSyncPermissionBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface PermissionOffer : RLMSyncPermissionBaseObject

@property (readonly) NSString *token;

/**
 the URL to the realm
 */
@property NSString *realmUrl;

@property BOOL mayRead;
@property BOOL mayWrite;
@property BOOL mayManage;

@property (nullable) NSDate *expiresAt;

+ (instancetype)permissionOfferForRealm:(RLMRealm *)realm
                              expiresAt:(nullable NSDate *)expiresAt
                                   read:(BOOL)mayRead
                                  write:(BOOL)mayWrite
                                 manage:(BOOL)mayManage;

@end

NS_ASSUME_NONNULL_END

@compatibility_alias RLMSyncPermissionOffer PermissionOffer;
