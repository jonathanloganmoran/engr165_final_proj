//
//  Circle.cpp
//  glutapp
//
//  Created by Jonathan Moran on 5/2/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Circle.h"

//
//  Circle.hpp
//  glutapp
//
//  Created by Jonathan Moran on 5/2/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//
#include "math.h"
#include "Circle.h"
#include "Point.h"

Circle::Circle() : Point() {
    Point.setX(0.0);
    Point.setY(0.0);
    this->radius = 1.0;
    area = M_PI*radius*radius;
}

// default constructor
Circle::Circle(float x, float y) : Point() {
    Point.setX(x);
    Point.setY(y);
    this->radius = 1.0;
    area = M_PI*radius*radius;
}
// (x, y) unit circle constructor
Circle::Circle(float x, float y, float radius) {
    Point.setX(x);
    Point.setY(y);
    this->radius = radius;
    area = M_PI*radius*radius;
}            // (x,y, radius) constructor

Circle::setRadius(float radius) {
    this->radius = radius;
}

Circle::float getRadius() {
    return radius;
}
