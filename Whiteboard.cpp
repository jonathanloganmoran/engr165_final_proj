//
//  Whiteboard.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Whiteboard.hpp"
#include "GlutApp.h"
#include "Point.h"
#include <deque>

Whiteboard::Whiteboard() {
    Point* p;
    deque<Point*> points;
}

void GlutApp::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    Whiteboard::handle(x, y) {
        points.push_back(new Point(x, y));
    } // store into points deque
    
    // Redraw the scene
    redraw();
}

Whiteboard::~Whiteboard() {
    Point::~Point() {
        for(int i = 0; i < points.size(); i++) {
            delete points[i].x;
            delete points[i].y;
        }
    }
}

Whiteboard::draw() const {
    for(int i = 0; i < points.size(); i++) {
        (points[i])->draw();
    }
}
