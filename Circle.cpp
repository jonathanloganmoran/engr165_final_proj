#include <cmath>
#include <iostream>
#include <GLUT/glut.h>

#include "Circle.h"

Circle::Circle() : Point() {
    x = 0;
    y = 0;
    radius = 1;
}

Circle::Circle(float radius, float x, float y, float r, float g, float b) : Point(r, g, b) {
    this->radius = radius;
    this->x = x;
    this->y = y;
}



void Circle::draw() const {
    
    float inc = 0.01;
    
    glColor3f(r, g, b);
    
        glBegin(GL_LINES);
        for (float theta = 0; theta < 2 * M_PI; theta += inc) {
            glVertex2f(radius * cos(theta) + x, radius * sin(theta) + y);
            glVertex2f(radius * cos(theta + inc) + x, radius * sin(theta + inc) + y);
        }
        
        glEnd();
    }















































/*//
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
 */
