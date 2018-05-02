//
//  Whiteboard.hpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef Whiteboard_hpp
#define Whiteboard_hpp

#include <stdio.h>
#include <deque>
#include "Point.h"
#include "Sticker.hpp"

using namespace std;

class Whiteboard {
    
    Whiteboard *w;
    deque<Point*> points;
    deque<Sticker*> stickers;

public:
    
    Whiteboard();
    
    void handle(float x, float y);
    void draw();
    
    ~Whiteboard();
};

#endif /* Whiteboard_hpp */
