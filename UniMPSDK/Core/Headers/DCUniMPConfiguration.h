//
//  DCUniMPConfiguration.h
//  libPDRCore
//
//  Created by XHY on 2020/6/16.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 打开小程序页面的方式
typedef NS_ENUM(NSUInteger,DCUniMPOpenMode) {
    /// 获取宿主当前显示的 ViewController 调用 presentViewController:animated:completion: 方法打开小程序页面对应的 DCUniMPViewController
    DCUniMPOpenModePresent,
    /// 获取宿主当前显示的 ViewController 对应的 navigationController 调用 pushViewController:animated: 方法打开小程序页面对应的 DCUniMPViewController，注意：如果 navigationController 不存在则使用 DCUniMPOpenModePresent 的方式打开
    DCUniMPOpenModePush
};

@interface DCUniMPConfiguration : NSObject

@property (nonatomic, strong, nullable) NSDictionary *arguments; /**< 启动参数（在小程序中通过 plus.runtime.arguments 获取此参数）默认：nil*/
@property (nonatomic, copy, nullable) NSString *redirectPath;   /**< 启动后直接打开的页面路径 例："pages/component/view/view?a=1&b=2" 默认：nil*/
@property (nonatomic, assign) BOOL enableBackground;    /**< 是否开启后台运行（退出小程序时隐藏到后台不销毁小程序应用） 默认：NO*/
@property (nonatomic, assign) BOOL showAnimated;    /**< 是否开启 show 小程序时的动画效果 默认：YES */
@property (nonatomic, assign) BOOL hideAnimated;    /**< 是否开启 hide 时的动画效果 默认：YES*/
@property (nonatomic, assign) DCUniMPOpenMode openMode;  /**< 打开小程序的方式 默认： DCUniMPOpenModePresent*/
@property(nonatomic, assign) BOOL enableGestureClose;   /**< 是否开启手势关闭小程序 默认：NO */

@end

NS_ASSUME_NONNULL_END
