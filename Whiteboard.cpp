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
#include "Rectangle.h"
#include <deque>

using namespace std;

Whiteboard::Whiteboard() {
    Point* p;
    deque<Point*> points;
    
    Sticker *s;
    deque<Sticker*> stickers;
    
    Rectangle *v;
    deque<Rectangle*> rectangles;
    deque<Rectangle*> toolbar_objects;                  // to store each toolbar element
    
  //  Cross *x;                                         // TO BE IMPLEMENTED -- Week 3 goals
 //   deque<Cross*> crosses;
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
