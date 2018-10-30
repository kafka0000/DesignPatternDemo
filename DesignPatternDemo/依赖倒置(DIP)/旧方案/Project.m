//
//  Project.m
//  DesignPatternDemo
//
//  Created by Vinci on 2018/9/11.
//  Copyright © 2018年 Apple Inc. All rights reserved.
//

#import "Project.h"
#import "FrondEndDeveloper.h"
#import "BackEndDeveloper.h"
@implementation Project
{
    NSArray * _developers;
}
-(instancetype)initWithDevelopers:(NSArray *)devleopers{
    if (self = [super init]) {
        _developers = devleopers;
    }
    return self;
}

-(void)startDeveloping{
//  这里把id改成developer
    [_developers enumerateObjectsUsingBlock:^(id  _Nonnull developer, NSUInteger idx, BOOL * _Nonnull stop) {
        if ([developer isKindOfClass:[FrondEndDeveloper class]]) {
            [developer writeJavaScriptCode];
        }
        else if ([developer isKindOfClass:[BackEndDeveloper class]]){
            [developer WriteJavaCode];
        }else{
            
        }
    }];
}
@end
