
//  Point.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Point.h"
#include <GlutApp.h>
#include "App.hpp"
#include <deque>
#include "Whiteboard.hpp"

using namespace std;

Whiteboard *board;

Point::Point(float x, float y, float r, float g, float b) {
    this->x = x;
    this->y = y;
    this->r = r;
    this->g = g;
    this->b = b;
}

void handle(float x, float y) {
    
    
    
}
void Point::draw() const {
    glColor3f(r, g, b);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}
