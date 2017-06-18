//
//  AppDelegate.h
//  Test11
//
//  Created by yakun yin on 2017/6/16.
//  Copyright © 2017年 yakun yin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

