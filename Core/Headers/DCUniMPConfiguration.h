//
//  DCUniMPConfiguration.h
//  libPDRCore
//
//  Created by XHY on 2020/6/16.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCUniMPConfiguration : NSObject

@property (nonatomic, strong, nullable) NSDictionary *arguments; /**< 启动参数（在小程序中通过 plus.runtime.arguments 获取此参数）默认：nil*/
@property (nonatomic, copy, nullable) NSString *redirectPath;   /**< 启动后直接打开的页面路径 例："pages/component/view/view?a=1&b=2" 默认：nil*/
@property (nonatomic, assign) BOOL enableBackground;    /**< 是否开启后台运行（退出小程序时隐藏到后台不销毁小程序应用） 默认：NO*/
@property (nonatomic, assign) BOOL showAnimated;    /**< 是否开启 show 小程序时的动画效果 默认：YES */
@property (nonatomic, assign) BOOL hideAnimated;    /**< 是否开启 hide 时的动画效果 默认：YES*/

@end

NS_ASSUME_NONNULL_END
