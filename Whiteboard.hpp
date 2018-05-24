#ifndef Whiteboard_hpp
#define Whiteboard_hpp

#include <stdio.h>
#include <deque>
#include "Colors.hpp"
#include "Tools.hpp"

#include <math.h>

using namespace std;

class Whiteboard {
    
    Whiteboard *w;
    deque<Point*> points;

public:
    
    Whiteboard();
    
    void handleDown(float x, float y);
    void handleDrag(float x, float y);
    void draw();
    
    float r;
    float g;
    float b;
    
    Colors* colors;
    Tools* tools;
    TexRect* toolbar;

    
    ~Whiteboard();
    
    
    
    
};

#endif /* Whiteboard_hpp */
