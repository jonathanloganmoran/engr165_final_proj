#ifndef App_hpp
#define App_hpp

#include "GlutApp.h"
#include "Point.h"
#include "TexRect.hpp"
#include "TexSelect.hpp"
#include "Whiteboard.hpp"
#include <deque>
#include <math.h>

class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;
    
    float r;
    float g;
    float b;
    
public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
    
    Whiteboard* whiteboard;
    

   // TexRect* thicknessBar;
    
    std::deque<Point*> points;




    
};

#endif /* App_hpp */
