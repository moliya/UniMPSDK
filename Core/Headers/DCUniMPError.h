//
//  DCUniMPError.h
//  libPDRCore
//
//  Created by XHY on 2020/6/15.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const DCUniMPErrorDomain = @"DCUniMPErrorDomain";

typedef NS_ENUM(NSInteger,DCUniMPErrorCode) {
    /// 未知错误
    DCUniMPErrorUnknown = -999,
    /// 应用资源不存在
    DCUniMPErrorUniMPResourcesDoesNotExist = -1001,
    /// 非v3编译模式
    DCUniMPErrorNotCompiledByV3Mode = -1002,
    /// 重复调用
    DCUniMPErrorRepeatedBehavior = -2001,
    /// 小程序未运行
    DCUniMPErrorUniMPNotRunning = -3001,
    /// 已存在运行的小程序
    DCUniMPErrorExistOtherUniMPRunning = 3002
};
NS_ASSUME_NONNULL_END
