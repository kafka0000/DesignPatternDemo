//
//  RestaurantProtocol.h
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*  在这里声明了一个接口，它包含了下单和支付的几种方式：
 下单：
 
 online下单
 电话下单
 店里下单（店内服务）
 支付
 
 online支付（适用于online下单和电话下单的顾客）
 店里支付（店内服务）
 */
@protocol RestaurantProtocol <NSObject>
- (void)placeOnlineOrder;         //下订单：online
- (void)placeTelephoneOrder;      //下订单：通过电话
- (void)placeWalkInCustomerOrder; //下订单：在店里

- (void)payOnline;                //支付订单：online
- (void)payInPerson;              //支付订单：在店里支付

@end
