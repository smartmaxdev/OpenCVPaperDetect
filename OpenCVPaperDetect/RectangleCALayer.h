//
//  RectangleCALayer.h
//  DocBox
//
//  Created by Maximiliano on 12/06/17.
//  Copyright (c) 2017 Maximiliano. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@class Rectangle;

@interface RectangleCALayer : CALayer{
    Rectangle * rectangle;
}

@property (nonatomic, strong) Rectangle * rectangle;

@end
