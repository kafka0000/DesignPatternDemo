//
//  DeveloperProtocol.h
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 首先，创建一个接口，接口里面有一个写代码的方法writeCode：
 然后，让前端程序员和后端程序员类实现这个接口（遵循这个协议）并按照自己的方式实现：
 */
@protocol DeveloperProtocol <NSObject>
- (void)writeCode;
@end
