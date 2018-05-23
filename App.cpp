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
    
    toolbar = new TexRect("images/toolbar.png", -1, 1, 0.252, 1.2);
    thicknessBar = new TexRect("images/thiccness.png", -1, -0.19, 0.252, .26);
    
    pencilSelect = new TexSelect("", -1, 1, 0.252, 0.2);
    eraserSelect = new TexSelect("", -1, 0.8, 0.252, 0.13); //edit the 2nd float
    squareSelect = new TexSelect("", -1, 0.651, 0.252, 0.13);
    circleSelect = new TexSelect("", -1, 0.515, 0.252, 0.13);
    crossSelect = new TexSelect("", -1, 0.387, 0.252, 0.13);
    
    redSelect = new TexSelect("", -1, 0.228, 0.134, 0.115);
    greenSelect = new TexSelect("", -0.886, 0.228, 0.141, 0.115);
    orangeSelect = new TexSelect("", -1, 0.109, 0.13, 0.094);
    blueSelect = new TexSelect("", -0.886, 0.109, 0.141, 0.095);
    yellowSelect = new TexSelect("", -1, 0.017, 0.13, 0.1);
    purpleSelect = new TexSelect("", -0.886, 0.015, 0.141, 0.1);
    whiteSelect = new TexSelect("", -1, -0.09, 0.131, 0.105);
    blackSelect = new TexSelect("", -0.886, -0.09, 0.140, 0.105);
    
    thickSelect = new TexSelect("", -1, -0.2, 0.252, 0.075);
    mediumSelect = new TexSelect("", -1, -0.279, 0.252, 0.057);
    smallSelect = new TexSelect("", -1, -0.34, 0.252, 0.045);
    tinySelect = new TexSelect("", -1, -0.399, 0.252, 0.032);
    
    
    
    pencilSelected = true;
    eraserSelected = false;
    squareSelected = false;
    circleSelected = false;
    crossSelected = false;
    
    redSelected = true;
    greenSelected = false;
    orangeSelected = false;
    blueSelected = false;
    yellowSelected = false;
    purpleSelected = false;
    whiteSelected = false;
    blackSelected = false;
    
    thickSelected = true;
    mediumSelected = false;
    
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
    
    
    
    //glPointSize(20);
    
    for (std::deque<Point*>::iterator i = points.begin(); i != points.end(); i++) {
        //points[i]->draw();
        
        glColor3f((*i)->r, (*i)->g, (*i)->b);
        
        
        
        glBegin(GL_POINTS);
        
        glVertex2f((*i)->x, (*i)->y);
        
        
        glEnd();
    }
    
    toolbar->draw();
    thicknessBar->draw();
    
    if (thickSelected){
        thickSelect->draw();
         glPointSize(20);
    }
    
    if (mediumSelected){
        mediumSelect->draw();
         glPointSize(10);
    }
    
    if (smallSelected){
        smallSelect->draw();
         glPointSize(5);
    }
    
    if (tinySelected){
        tinySelect->draw();
         glPointSize(1);
    }
    
    if (pencilSelected){
        pencilSelect->draw();
    }
    
    if (eraserSelected){
        eraserSelect->draw();
    }
    
    if (squareSelected){
        squareSelect->draw();
    }
    
    if (circleSelected){
        circleSelect->draw();
    }
    
    if (crossSelected){
        crossSelect->draw();
    }
    
    if (blueSelected){
        blueSelect->draw();
        pencilSelect->draw();
    }
    
    if (greenSelected){
        greenSelect->draw();
        pencilSelect->draw();
    }
    
    if (orangeSelected){
        orangeSelect->draw();
        pencilSelect->draw();
    }
    
    if (redSelected){
        redSelect->draw();
        pencilSelect->draw();
    }
    
    if (yellowSelected){
        yellowSelect->draw();
        pencilSelect->draw();
    }
    
    if (purpleSelected){
        purpleSelect->draw();
        pencilSelect->draw();
    }
    
    if (whiteSelected){
        whiteSelect->draw();
        pencilSelect->draw();
    }
    
    if (blackSelected){
        blackSelect->drawWhite();
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
    
//    cout << mx << endl;
//    cout << my << endl;
//    cout << endl;
    
   /* if (anywhere->contains(mx,my)){
        circleTool = true;
    }*/
    
    if (toolbar->contains(mx,my) || thicknessBar->contains(mx, my)){
        
        //make selection on pencil
        if (pencilSelect->contains(mx, my)){
            pencilSelected = true;
        }
        else {
            pencilSelected = false;
        }
        
        //make selection on eraser
        if (eraserSelect->contains(mx, my)){
            eraserSelected = true;
        }
        else {
            eraserSelected = false;
        }
        
        //make selection on square
        if (squareSelect->contains(mx,my)){
            squareSelected = true;
        }
        else {
            squareSelected = false;
        }
        
        if (circleSelect->contains(mx,my)){
            circleSelected = true;
        }
        else {
            circleSelected = false;
        }
        
        if (crossSelect->contains(mx,my)){
            crossSelected = true;
        }
        else {
            crossSelected = false;
        }
        
        if (blueSelect->contains(mx, my)){
            blueSelected = true;
            r = 0;
            g = 0.423529411764706;
            b = 1;
        }
        
        else {
            blueSelected = false;
        }
        
        if (greenSelect->contains(mx, my)){
            greenSelected = true;
            r = 0;
            g = 1;
            b = 0;
        }
        
        else {
            greenSelected = false;
            
        }
        
        if (orangeSelect->contains(mx, my)){
            orangeSelected = true;
            r = 1;
            g = 0.611764705882353;
            b = 0;
        }
        
        else {
            orangeSelected = false;
            
        }
        
        if (redSelect->contains(mx, my)){
            redSelected = true;
            r = 1;
            g = 0;
            b = 0;
        }
        
        else {
            redSelected = false;
            
        }
        
        if (yellowSelect->contains(mx, my)){
            yellowSelected = true;
            r = 1;
            g = 0.941176470588235;
            b = 0;
        }
        
        else {
            yellowSelected = false;
            
        }
        
        if (purpleSelect->contains(mx, my)){
            purpleSelected = true;
            r = 0.541176470588235;
            g = 0.133333333333333;
            b = 1;
        }
        
        else {
            purpleSelected = false;
            
        }
        
        if (whiteSelect->contains(mx, my)){
            whiteSelected = true;
            r = 0.937254901960784;
            g = 0.92156862745098;
            b = 0.937254901960784;
        }
        
        else {
            whiteSelected = false;
            
        }
        
        if (blackSelect->contains(mx, my)){
            blackSelected = true;
            r = 0;
            g = 0;
            b = 0;
        }
        
        else {
            blackSelected = false;
            
        }
        
        if (thickSelect->contains(mx,my)){
            thickSelected = true;
           // glPointSize(20);
        }
        else {
            thickSelected = false;
        
        }
        
        if (mediumSelect->contains(mx,my)){
            mediumSelected = true;
          //  glPointSize(10);
        }
        else {
            mediumSelected = false;
            
        }
        
        if (smallSelect->contains(mx,my)){
            smallSelected = true;
           // glPointSize(5);
        }
        else {
            smallSelected = false;
            
        }
        
        if (tinySelect->contains(mx,my)){
            tinySelected = true;
           // glPointSize(1);
        }
        else {
            tinySelected = false;
            
        }

        
    }
    else {
    
        //if eraser selected, draw white
        if (eraserSelected == true){
            points.push_back(new Point(mx, my, 1, 1, 1));
            
            float inc = 0.1;
            
            for (float theta = 0; theta < 2*M_PI; theta +=inc) {
                float cx = 0.05*cos(theta) + mx;
                float cy = 0.05*sin(theta) + my;
                points.push_back(new Point(cx, cy, 1, 1, 1));
            }
            
        }
        else {
            points.push_back(new Point(mx, my, r, g, b));
        }
    }
    // Redraw the scene
    redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    //points.push_back(new Point(mx, my, 1, 0, 0));
    
    
    if (toolbar->contains(mx,my) || thicknessBar->contains(mx, my)){
        //don't draw points
    }
    else {
        if (eraserSelected == true){
            points.push_back(new Point(mx, my, 1, 1, 1));
            float inc = 0.1;
            
            for (float theta = 0; theta < 2*M_PI; theta +=inc) {
                float cx = 0.05*cos(theta) + mx;
                float cy = 0.05*sin(theta) + my;
                points.push_back(new Point(cx, cy, 1, 1, 1));
            }
        }
        else{
             points.push_back(new Point(mx, my, r, g, b));
        }
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


























































































































// Main project instance class
//  App.cpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//
/*
#include "App.h"
//#include "Point.h"
//#include "GlutApp.h"
//#include "freeglut/freeglut.h"
//#include "Whiteboard.hpp"
//#include "../images/toolbar.png"
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


*/




