//
//  ColorWheel.h
//  FunFacts
//
//  Created by Graeme Harrison on 2015-12-27.
//  Copyright © 2015 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
