//
//  API.h
//  pinchehui
//
//  Created by zhisheshe on 14-12-12.
//  Copyright (c) 2014年 zhisheshe. All rights reserved.
//

#ifndef pinchehui_API_h
#define pinchehui_API_h

#define kBaseUrl @"http://appapi.pinchehui.com/"
#define kSuburl @"api.php?"
#define URL_HEAD_STR   @"http://appapi.pinchehui.com/"
//app strore升级地址
#define APP_URL @"http://itunes.apple.com/lookup?id=954766347"


//-----------------------------------------------------登录注册----------------------------------------------------
//50、登录接口
#define kLogin   [NSString stringWithFormat:@"%@%@c=member&a=login",kBaseUrl,kSuburl]

//51、注册接口
#define kREGISTER  [NSString stringWithFormat:@"%@%@c=member&a=register",kSuburl,kBaseUrl]

//52、修改密码接口
#define kChangePasswd   [NSString stringWithFormat:@"%@%@c=member&a=getpass&mobile&login_pass",kSuburl,kBaseUrl]

//53、忘记密码接口
#define kForgetPasswd [NSString stringWithFormat:@"%@%@c=member&a=getpass",kSuburl,kBaseUrl]

//54、手机验证码获得接口
#define kGetSMSCode   [NSString stringWithFormat:@"%@%@c=sms&a=reggetsmscode",kSuburl,kBaseUrl]


////56、判断手机是否已注册接口
//#define kPhoneReg   @"c=common&a=getdata_bymobile"
//
////---------------------------------------------------车源------------------------------------------------------


//发布车源
#define kPublicCar [NSString stringWithFormat:@"%@%@c=auto&a=addauto",kSuburl,kBaseUrl]

//获取车源：搜索条件
#define kCarSourceList [NSString stringWithFormat:@"%@%@c=auto&a=soso",kBaseUrl,kSuburl]

//修改车源：在售车，下驾车 已售 收藏 特卖
#define kChangeCarSoure [NSString stringWithFormat:@"%@%@c=common&a=upload_autopic",kSuburl,kBaseUrl]

//好友车辆列表
#define kFriendCarList [NSString stringWithFormat:@"%@%@a=getautolistbystatus",kSuburl,kBaseUrl]

//是否收藏
#define kFavoriteCar [NSString stringWithFormat:@"%@%@m=api&c=favorite&a=favoritestatus",kSuburl,kBaseUrl]

//统计车辆查看次数

//评价车辆
#define kAssess [NSString stringWithFormat:@"%@%@c=assess&a=addassess",kSuburl,kBaseUrl]



////--------------------------------------------------------个人信息-------------------------------------------------

//11、获取个人信息接口
#define kFetechPersonInfo [NSString stringWithFormat:@"%@%@c=member&a=getdata_byid",kBaseUrl,kSuburl]

//12、修改个人信息接口
#define kModifPersonInfo [NSString stringWithFormat:@"%@%@c=member&a=modifymember",kBaseUrl,kSuburl]

//50、商户认证接口
#define kUserApprove [NSString stringWithFormat:@"%@%@c=Member&a=up_attest",kBaseUrl,kSuburl]

//50、上传头像接口


//50、反馈信息接口
#define kFEEDBACK   @"c=guestbook&a=add"
//---------------------------------------------------------好友接口------------------------------------------------
//
//
//
//



//---------------------------------------------------------金融------------------------------------------------
//品牌回家 和e系列

#define kBrandHome [NSString stringWithFormat:@"%@%@c=finance&a=zy_finance",kBaseUrl,kSuburl]

#define kEBackHome [NSString stringWithFormat:@"%@%@c=finance&a=home_finance",kBaseUrl,kSuburl]






//-------------------------------------------------------- 订单--------------------------------------------------------


//订单列表
#define kFetchOrderFormList [NSString stringWithFormat:@"%@%@c=Order&a=buy",kBaseUrl,kSuburl]

//订单详情
#define kFetchOrderFormDetail [NSString stringWithFormat:@"%@%@c=Order&a=details",kBaseUrl,kSuburl]

//订单状态修改
#define kOrderStateModify [NSString stringWithFormat:@"%@%@c=Order&a=upd",kBaseUrl,kSuburl]

//生成订单
#define kGenerateOrderForm [NSString stringWithFormat:@"%@%@c=Order&a=createorder",kBaseUrl,kSuburl]


//--------------------------------------------------------求购-------------------------------------------------------

//发布求购
#define kPublicPurChase [NSString stringWithFormat:@"%@%@c=Purchase&a=add_purchase",kSuburl,kBaseUrl]

//求购列表
#define kPublicPurList [NSString stringWithFormat:@"%@%@c=Purchase&a=sel_fb",kSuburl,kBaseUrl]

//删除求购


//-----------------------------------------------------通用----------------------------------------------------

//注册-上传图片
#define kRegisterUpimage [NSString stringWithFormat:@"%@%@c=common&a=upload",kSuburl,kBaseUrl]

//获取省份

#define kGetProvince [NSString stringWithFormat:@"%@%@c=District&a=getdata_byarg&arg=0",kSuburl,kBaseUrl]

//获取城市
#define kGetCity [NSString stringWithFormat:@"%@%@c=District&a=getdata_byarg&arg=",kSuburl,kBaseUrl]

//获取品牌列表
//品牌
#define kGetBrand [NSString stringWithFormat:@"%@%@c=auto&a=getbrandfz",kSuburl,kBaseUrl]
//系列

#define kGetSeries [NSString stringWithFormat:@"%@%@c=auto&a=getautobrand",kSuburl,kBaseUrl]
//款系

#define kGetSeriesID [NSString stringWithFormat:@"%@%@c=auto&a=getautobrand",kSuburl,kBaseUrl]

//获取首页banner图
#define kHomeSlide [NSString stringWithFormat:@"%@%@m=api&c=Sysclassdata&a=getdate&codename=app_slide_flash_pic",kBaseUrl,kSuburl]
//#define kHomeSlide  @"/api.php?m=api&c=Sysclassdata&a=getdate&codename=app_slide_flash_pic"

//版本
#define kVersion [NSString stringWithFormat:@"%@%@m=api&c=Sysclassdata&a=getdate&codename=app_version_ios",kSuburl,kBaseUrl]



#endif
