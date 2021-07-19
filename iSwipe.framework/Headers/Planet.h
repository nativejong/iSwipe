//
//  Planet.h
//  Test
//
//  Created by John Blaine on 7/18/21.
//  Copyright © 2021 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface Planet : UIView


@property int value;
@property (strong, nonatomic) NSTimer *timer;
@property float rstart;

@end

NS_ASSUME_NONNULL_END
