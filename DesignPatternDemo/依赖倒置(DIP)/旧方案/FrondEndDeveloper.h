//
//  FrondEndDeveloper.h
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

/* 依赖倒置原则：
 1. 依赖抽象，而不是依赖实现
 2. 抽象不应该依赖细节，细节应该依赖抽象
 3. 高层模块不能依赖低层模块，二者都应该依赖抽象
   解读：
 1.针对接口编程，而不是针对实现编程。
 2.尽量不要从具体的类派生，而是以继承抽象类或实现接口来实现。
 3.关于高层模块与低层模块的划分可以按照决策能力的高低进行划分。业务层自然就处于上层模块，逻辑层和数据层自然就归类为底层。
   优点：
 使用抽象来搭建框架，建立类和类之间的关联，减少类之间的耦合性。
 */

#import <Foundation/Foundation.h>

#import "DeveloperProtocol.h"
/*
 需求点：代码模拟实际项目开发，前端和后端一起开发一个项目
 */
@interface FrondEndDeveloper : NSObject<DeveloperProtocol>
/*
1、不好的解决方案：
    定义FrondEndDeveloper实现writeJaveScriptCode方法， BackEndDeveloper实现writeJavaCode方法
    定义Project类实现initWithDelevopers startDeveloping方法
    在Project类中，首先通过一个构造器方法，讲开发者的数组传入project的实例对象，然后再开始方法startDeveloping里面，遍历数组并判断元素类型的方式让不同的开发者调用自己的函数
 问题一：
 假如后台的开发语言改成了GO语言，那么上述代码需要改动两个地方：
 
 BackEndDeveloper:需要向外提供一个writeGolangCode方法。
 Project类的startDeveloping方法里面需要将BackEndDeveloper类的writeJavaCode改成writeGolangCode。
 
 问题二：
 假如后期老板要求做移动端的APP（需要iOS和安卓的开发者），那么上述代码仍然需要改动两个地方：
 
 还需要给Project类的构造器方法里面传入IOSDeveloper和AndroidDeveloper两个类。而且按照现有的设计，还要分别向外部提供writeSwiftCode和writeKotlinCode。
 Project类的startDeveloping方法里面需要再多两个elseif判断，专门判断IOSDeveloper和AndroidDeveloper这两个类。

 重点：高层模块依赖了低层模块！！！
 
2、好的解决方案：
    在实践了依赖倒置原则的 UML 类图中，我们可以看到Project仅仅依赖于新的接口；而且低层的FrondEndDevelope和
    BackEndDevelope类按照自己的方式实现了这个接口：通过接口解除了原有的依赖。（在 UML 类图中，虚线三角箭头表示接口实线，由实现方指向接口）

 */
-(void)writeJavaScriptCode;

@end
