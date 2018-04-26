//
//  App.hpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef App_hpp
#define App_hpp

#include <stdio.h>
#include "app_main.cpp"
#include "glutapp"
#include <GL/glutapp.h>
#include "GlutApp.h"
#include <GL/freeglut.h>
#include <deque>

class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;
    
public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
};

#endif /* App_hpp */
