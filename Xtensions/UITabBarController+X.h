//
//  UITabBarController+X.h
//
//  Copyright (c) 2014 Anthony Shoumikhin. All rights reserved under MIT license.
//  mailto:anthony@shoumikh.in
//

#import <UIKit/UIKit.h>

@interface UITabBarController (X)

/**
 A Boolean value that determines whether the tab bar is hidden.
 */
@property (nonatomic, getter = isTabBarHidden) BOOL tabBarHidden;

/**
 Hide or show the tab bar. If animated, it will transition vertically using UINavigationControllerHideShowBarDuration.
 This method changing frame only for tab bar.
 
 @param hidden Specify `YES` to hide the tab bar or `NO` to show it.
 @param animated Specify `YES` if you want to animate the change in visibility or `NO` if you want the tab bar to appear immediately.
 @param resize Specify 'YES' if you want to change frame of tab bar controller's view and subviews or 'NO' if you don't whant change frame of this.
 */
- (void)setTabBarHidden:(BOOL)hidden animated:(BOOL)animated withResizeView:(BOOL)resize;

/**
 Hide or show the tab bar. If animated, it will transition vertically using UINavigationControllerHideShowBarDuration.
 This method changing frame only for tab bar.

 @param hidden Specify `YES` to hide the tab bar or `NO` to show it.
 @param animated Specify `YES` if you want to animate the change in visibility or `NO` if you want the tab bar to appear immediately.
 */
- (void)setTabBarHidden:(BOOL)hidden animated:(BOOL)animated;

/**
 Switch between view controllers with swipe-like transition.
 
 @param index An index of a destination view controller.
 */
- (void)swipeToIndex:(NSUInteger)index;

@end
