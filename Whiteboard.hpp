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
#include "Point.h"

using namespace std;

class Whiteboard {
    
    Whiteboard *w;
    deque<Point*> points;           // already implemented: need functioning methods to add/retreive from deque
    deque<Sticker*> stickers;       // to be implemented: need sticker base class

public:
    
    Whiteboard();
    
    void handle(float x, float y);
    void draw();
    void handle(float x, float y);
    
    ~Whiteboard();
};

#endif /* Whiteboard_hpp */
