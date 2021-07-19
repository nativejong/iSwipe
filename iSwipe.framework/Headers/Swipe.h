//
//  Swipe.h
//  Test
//
//  Created by John Blaine on 7/18/21.
//  Copyright © 2021 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Swipe : UIView

@property (nonatomic, retain) UILabel *valLabel;
@property float value;
- (void)animateIt;

- (void)watch:(void(^)(CGFloat value)) lx;
@property (copy, nonatomic) void (^currentValueCB)(CGFloat value) ;

@end
NS_ASSUME_NONNULL_END
