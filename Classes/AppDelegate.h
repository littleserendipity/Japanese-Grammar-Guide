//
//  AppDelegate.h
//  LearningJapanese
//
//  Created by Ronald Timoshenko on 1/16/12.
//  Copyright (c) 2012 Ronald Timoshenko. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "LessonRepository.h"
#import "BookmarkRepository.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) LessonRepository *lessonRepository;
@property (strong, nonatomic) BookmarkRepository *bookmarkRepository;


@end
