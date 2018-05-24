// Main project instance class
//  App.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "App.h"
#include <deque>

using namespace std;


App::App(const char* label, int x, int y, int w, int h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;
    
    whiteboard = new Whiteboard();

    
    r = 1.0;
    g = 0;
    b = 0;
}

void App::draw() {
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Set background color to white
    glClearColor(1.0, 1.0, 1.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set Color
    glColor3d(1.0, 1.0, 1.0);
    

    
    whiteboard->draw();

    
    
    
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::mouseDown(float x, float y) {
    // Update app state
    mx = x;
    my = y;

    whiteboard->handleDown(mx, my);
    
    //redraw the scene
    redraw();

}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    whiteboard->handleDrag(mx, my);
    
    // Redraw the scene
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        
        
        //delete toolbar;
        exit(0);
    }
}

