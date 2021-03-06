//
//  LHWebAVPlayer.h
//  biUp
//
//  Created by snowimba on 15/12/26.
//  Copyright © 2015年 snowimba. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LHSortAV;

typedef void(^PlayerBlock)(NSArray *arr,NSString *desc,NSString *up);
typedef void(^PlayerURLBlock)(NSArray *arr);
@interface LHWebAVPlayer : NSObject
@property (nonatomic, copy) NSString* param;
@property (nonatomic, copy) NSString* danmaku;
@property (nonatomic, copy) void (^AVPlayer)(NSArray*);
@property (nonatomic, copy) void (^SpAVPlayer)(NSDictionary*);

@property (nonatomic,copy) PlayerBlock player;

+(void)getDownLoadURLToSortAV:(NSString *)param backBlock:(PlayerBlock)player;

+(void)getPlayerURL:(LHSortAV *)sotr backBlock:(PlayerURLBlock)URLArr;


@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com