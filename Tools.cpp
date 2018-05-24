//
//  Tools.cpp
//  glutapp
//
//  Created by Emily Bossiere on 5/10/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#include "Tools.hpp"

Tools::Tools(){
    pencilSelect = new TexSelect("", -1, 0.987, 0.252, 0.17);
    eraserSelect = new TexSelect("", -1, 0.81, 0.252, 0.14);
    stampSelect = new TexSelect("", -1, 0.665, 0.252, 0.14); //stamp tool
    thickSelect = new TexSelect("", -1, 0.5247, 0.252, 0.076); //thickSelect
    mediumSelect = new TexSelect("", -1, 0.4308, 0.252, 0.057); //mediumSelect
    smallSelect = new TexSelect("", -1, 0.359, 0.252, 0.045);
    tinySelect = new TexSelect("", -1, 0.299, 0.252, 0.035);
    
    
    pencilSelected = true;
    eraserSelected = false;
    stampSelected = false;
    thickSelected = false;
    mediumSelected = false;
    smallSelected = false;
    tinySelected = false;
}

void Tools::draw(){
    if (smallSelected){
        smallSelect->draw();
        glPointSize(5);
        pencilSelect->draw();
    }
    
    if (tinySelected){
        tinySelect->draw();
        glPointSize(2);
        pencilSelect->draw();
    }
    
    if (pencilSelected){
        pencilSelect->draw();
    }
    
    if (eraserSelected){
        eraserSelect->draw();
    }
    
    if (stampSelected){
        stampSelect->draw();
    }
    
    if (thickSelected){
        thickSelect->draw();
        glPointSize(20);
        pencilSelect->draw();
    }
    
    if (mediumSelected){
        mediumSelect->draw();
        glPointSize(10);
        pencilSelect->draw();
    }

}

void Tools::down(float mx, float my){
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
    if (stampSelect->contains(mx,my)){
        stampSelected = true;
    }
    else {
        stampSelected = false;
    }
    
    if (thickSelect->contains(mx,my)){
        thickSelected = true;
    }
    else {
        thickSelected = false;
    }
    
    if (mediumSelect->contains(mx,my)){
        mediumSelected = true;
    }
    else {
        mediumSelected = false;
    }
    
    
    if (smallSelect->contains(mx,my)){
        smallSelected = true;
    }
    else {
        smallSelected = false;
    }
    
    if (tinySelect->contains(mx,my)){
        tinySelected = true;
    }
    else {
        tinySelected = false;
    }
    
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
    
    if (stampSelected == true){
        points.push_back(new Point(mx, my, 0.341176470588235, 0.341176470588235, 0.341176470588235));
        
        float inc = 0.1;
        
        for (float theta = 0; theta < 2*M_PI; theta +=inc) {
            float cx = 0.05*cos(theta) + mx;
            float cy = 0.05*sin(theta) + my;
            points.push_back(new Point(cx, cy, 0.341176470588235, 0.341176470588235, 0.341176470588235));
        }
        
    }
    else {
        points.push_back(new Point(mx, my, r, g, b));
    }

}



void Tools::drag(float mx, float my){
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
    
    if (stampSelected == true){
        points.push_back(new Point(mx, my, 0.341176470588235, 0.341176470588235, 0.341176470588235));
        
        float inc = 0.1;
        
        for (float theta = 0; theta < 2*M_PI; theta +=inc) {
            float cx = 0.05*cos(theta) + mx;
            float cy = 0.05*sin(theta) + my;
            points.push_back(new Point(cx, cy, 0.341176470588235, 0.341176470588235, 0.341176470588235));
        }
        
    }
    
}


Tools::~Tools(){
    
}


