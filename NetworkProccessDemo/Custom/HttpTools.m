//
//  HttpTools.m
//  myinfo
//
//  Created by Apple on 14-11-14.
//  Copyright (c) 2014年 allianture. All rights reserved.
//

#import "HttpTools.h"
#import "AccountTools.h"
#import "Account.h"

static NSString * const BaseURL = @"http://api.app.net/";


@implementation HttpTools





+ (AFHTTPRequestOperation *)requestWithPath:(NSString *)path params:(NSDictionary *)params success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure method:(NSString *)method
{
    // 1.创建http请求
    AFHTTPRequestOperationManager *manager=[AFHTTPRequestOperationManager manager];
    
    [manager.requestSerializer willChangeValueForKey:@"timeoutInterval"];
    manager.requestSerializer.timeoutInterval = 15.f;
    [manager.requestSerializer didChangeValueForKey:@"timeoutInterval"];
    
    AFHTTPRequestOperation *operation=nil;

    NSMutableDictionary *allParams = [NSMutableDictionary dictionary];

    // 拼接传进来的参数
    if (params) {
        [allParams setDictionary:params];
    }
    
    // 拼接token参数
    NSString *token = [AccountTools sharedAccountTools].account.accessToken;
    
    
    if (token) {
        [allParams setObject:token forKey:@"access_token"];
    }
    
    //get请求
    NSComparisonResult comparisonOfGet = [method caseInsensitiveCompare:@"GET"];
    if (comparisonOfGet == NSOrderedSame) {
        
        operation  = [manager GET:path parameters:allParams success:^(AFHTTPRequestOperation *operation, id responseObject) {
            if (success) {
                success(responseObject);
            }
            
        } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        
            if (failure) {
                failure(error);
            }
        }];
    }
    
    
    //POST请求
    NSComparisonResult comparisonOfPost = [method caseInsensitiveCompare:@"POST"];
    if (comparisonOfPost == NSOrderedSame) {
        
         BOOL isFile=NO;
        
        for (NSString *key in params.allKeys) {
            
            id value=params[key];
            if ([value isKindOfClass:[NSData class]]) {
                
                isFile=YES;
                break;
            }
        }
 
        if (!isFile) {
            
            operation = [manager POST:path parameters:allParams constructingBodyWithBlock:^(id<AFMultipartFormData> formData) {
                
                
                [allParams enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
                    
                    if ([obj isKindOfClass:[NSData class]]) {
                    
                        [formData appendPartWithFileData:obj name:key fileName:key mimeType:@"image/jpeg"];
 
                    }
                    
                }];
                
            } success:^(AFHTTPRequestOperation *operation, id responseObject) {
                
                if (success) {
                    success(responseObject);
                }
                
                
            } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
                
                if (failure) {
                    failure(error);
                }
     
            }];
        }
        
    }
    
    return operation;

}


+ (void)postWithPath:(NSString *)path params:(NSDictionary *)params success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure
{
 
    [self requestWithPath:path params:params success:success failure:failure method:@"POST"];
    
}

+ (void)getWithPath:(NSString *)path params:(NSDictionary *)params success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure
{
    [self requestWithPath:path params:params success:success failure:failure method:@"GET"];
}

@end
