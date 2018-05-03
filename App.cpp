// Main project instance class
//  App.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "App.h"
//#include "Point.h"
//#include "GlutApp.h"
//#include "freeglut/freeglut.h"
//#include "Whiteboard.hpp"
#include <deque>

using namespace std;


App::App(const char* label, int x, int y, int w, int h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;
    
    toolbar = new TexRect("images/toolbar.png", -1, 1, 0.252, 1.2);
    pencilSelect = new TexRect("", -1, 1, 0.252, 0.2);
    pencilSelected = true;
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
  
   
    
    glPointSize(20);
    
    for (std::deque<Point*>::iterator i = points.begin(); i != points.end(); i++) {
        //points[i]->draw();
        
        glColor3f((*i)->r, (*i)->g, (*i)->b);
        
        
        
        glBegin(GL_POINTS);
        
        glVertex2f((*i)->x, (*i)->y);
        
        
        glEnd();
    }
    
     toolbar->draw();
    
    if (pencilSelected){
        pencilSelect->draw();
    }
    
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::mouseDown(float x, float y) {
    // Update app state
    mx = x;
    my = y;
    
    points.push_back(new Point(mx, my, 1, 0, 0));
    
    if (toolbar->contains(mx,my)){
        if (pencilSelect->contains(mx, my)){
            pencilSelected = true;
        }
        else {
            pencilSelected = false;
        }
    }
    
   
    
    // Redraw the scene
    redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    points.push_back(new Point(mx, my, 1, 0, 0));
    
    if (toolbar->contains(mx,my)){
        //don't draw points
    }
    
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



