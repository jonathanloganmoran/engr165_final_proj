#ifndef Circle_h
#define Circle_h

#include "Point.h"

class Circle : public Point {
    float radius;
    
public:
    Circle();
    Circle(float, float, float);
    Circle(float, float, float, float, float, float);
    
    float getRadius() const;
    float getX() const;
    float getY() const;
    
    void setRadius(float);
    void setX(float);
    void setY(float);
    
    void draw() const;
};

#endif






/*//
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
*/
//#endif /* Circle_hpp */
