//
//  SwipeAnimate.h
//  Test
//
//  Created by John Blaine on 7/18/21.
//  Copyright © 2021 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Swipe.h"

NS_ASSUME_NONNULL_BEGIN

@interface SwipeAnimate : UIView

@property (nonatomic, retain) Swipe *swipe;
@property (strong, nonatomic) NSTimer *timer;

//- (void)watch:(NSInteger)n currentValue:(void(^)(CGFloat value)) lx;
//@property (copy, nonatomic) void (^currentValueCB)(CGFloat value) ;

- (void)watch:(BOOL)n currentValue:(void(^)(CGFloat value)) lx;

@end

NS_ASSUME_NONNULL_END
