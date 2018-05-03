//
//  Whiteboard.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Whiteboard.hpp"
//#include "GlutApp.h"
#include "Point.h"
#include <deque>

Whiteboard::Whiteboard() {
    Point* p;
    deque<Point*> points;
}


Whiteboard::~Whiteboard() {
    //Point::~Point() {
    for(int i = 0; i < points.size(); i++) {
        delete points[i];
    }
    
    for(int i = 0; i < stickers.size(); i++) {
        delete stickers[i];
    }

    
    //}
}

void Whiteboard::draw() {
    for(int i = 0; i < points.size(); i++) {
        (points[i])->draw();
    }
}
