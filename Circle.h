//
//  Circle.hpp
//  glutapp
//
//  Created by Jonathan Moran on 5/2/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

#include "math.h"

class Circle {
    
    float radius;
    
public:
    float area;
    
    Circle();
    Circle(float x, float y);
    Circle(float x, float y, float radius);
    
    void setRadius(float radius);
    float getRadius();
    
};

#endif /* Circle_hpp */
