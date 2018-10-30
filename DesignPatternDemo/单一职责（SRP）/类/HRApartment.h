//
//  HRApartment.h
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"
//人事部门类
@interface HRApartment : NSObject
//今年是否晋升
- (BOOL)willGetPromotionThisYear:(Employee*)employee;
@end
