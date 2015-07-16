//
//  HttpTools.h
//  myinfo
//
//  Created by Apple on 14-11-14.
//  Copyright (c) 2014年 allianture. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>


typedef void (^HttpSuccessBlock)(id responseObject);
typedef void (^HttpFailureBlock)(NSError *error);

@interface HttpTools : NSObject


//此处的PATH是除去baseurl之后的路径，baseurl，需要在afn中的manager中去修改

//POST请求
+ (void)postWithPath:(NSString *)path params:(NSDictionary *)params success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure;

//GET请求
+ (void)getWithPath:(NSString *)path params:(NSDictionary *)params success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure;



//下载图片


//上传图片


//上传视频




@end
