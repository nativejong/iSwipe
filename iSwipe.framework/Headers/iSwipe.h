//
//  iSwipe.h
//  iSwipe
//
//  Created by John Blaine on 7/18/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Swipe.h"
#import "Planet.h"
#import "SwipeAnimate.h"

//! Project version number for iSwipe.
FOUNDATION_EXPORT double iSwipeVersionNumber;
FOUNDATION_EXPORT const unsigned char iSwipeVersionString[];


@interface iSwipe : UIView

@property (nonatomic, retain) Swipe *swipe;
@property (nonatomic, retain) Planet *planet;
@property (nonatomic, retain) SwipeAnimate *swipeAnimate;

- (void)watch:(BOOL)n currentValue:(void(^)(CGFloat value)) lx;

@end
