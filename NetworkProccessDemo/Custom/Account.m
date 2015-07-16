//
//  Account.m
//  车商官家
//
//  Created by Apple on 14-10-21.
//  Copyright (c) 2014年 Apple. All rights reserved.
//

#import "Account.h"

@implementation Account

- (void)encodeWithCoder:(NSCoder *)encoder{
    
    [encoder encodeObject:_uid forKey:@"uid"];
    [encoder encodeObject:_loginName forKey:@"loginName"];
    [encoder encodeObject:_loginPasswd forKey:@"loginPasswd"];
    
}

- (id)initWithCoder:(NSCoder *)decoder{
    
    if (self =[super init]) {
        self.uid = [decoder decodeObjectForKey:@"uid"];
        self.loginName = [decoder decodeObjectForKey:@"loginName"];
        self.loginPasswd = [decoder decodeObjectForKey:@"loginPasswd"];

    }
    return self;

}
@end
