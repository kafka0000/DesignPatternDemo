//
//  Car.h
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*迪米特法则
 定义：一个对象应该对尽可能少的对象有接触 也就是只接触那些真正需要接触的对象
 解读：一个类应该纸盒它的成员变阿玲，方法输入，返回参数中的类作交流，而不应该引入其他的类
 优点：可以良好地降低类与类之间的耦合，减少类与类之间的关联程度，让类与类之间的协作更加直接。
 需求点：设计一个汽车类，包含汽车的品牌名称，引擎等成员变量。提供一个方法返回引擎的品牌名称
 */
@class GasEngine;
@interface Car : NSObject
//构造方法
- (instancetype)initWithEngine:(GasEngine *)engine;

//返回私有成员变量：引擎的实例
- (GasEngine *)usingEngine;

@end
