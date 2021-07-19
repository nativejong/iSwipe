//
//  CAnimate.h
//  Test
//
//  Created by John Blaine on 6/26/21.
//  Copyright © 2021 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAnimate : UIView

@property (nonatomic, retain) UILabel *valLabel;

@property int value;
@property (strong, nonatomic) NSTimer *timer;
@property float rstart;

@end

NS_ASSUME_NONNULL_END
