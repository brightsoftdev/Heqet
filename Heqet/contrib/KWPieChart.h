//
//  KWPieChart.h
//  _Kobold2D-With-Heqet-Template_
//
//  Created by  on 12/01/12.
//  Copyright (c) 2012 Kawaz. All rights reserved.
//

#import "cocos2d.h"

@interface KWPieChart : CCSprite {
  BOOL reverse_;
  int segments_;
  int segmentsDrawn_;
  CGFloat rate_;
  CGFloat radius_;
  CGPoint* vertices_;
  ccColor3B chartColor_;
  ccColor4B backgroundColor_;
}

@property(readwrite) BOOL reverse;
@property(readwrite) int segments;
@property(readwrite) CGFloat rate;
@property(readwrite) CGFloat radius;
@property(readwrite) ccColor3B chartColor;
@property(readwrite) ccColor4B backgroundColor;

+ (id)chartWithRadius:(CGFloat)radius color:(ccColor3B)color;

- (id)initWithRadius:(CGFloat)radius color:(ccColor3B)color;

@end
