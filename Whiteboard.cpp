#include "Whiteboard.hpp"
//#include "GlutApp.h"
#include "Point.h"
#include <deque>


using namespace std;

Whiteboard::Whiteboard() {
    Point* p;
    deque<Point*> points;
    
    toolbar = new TexRect("images/newtoolbar.png", -1, 1, 0.252, 1.2);
    colors = new Colors();
    tools = new Tools();



}


Whiteboard::~Whiteboard() {
    //Point::~Point() {
    for(int i = 0; i < points.size(); i++) {
        delete points[i];
    }
    
    
    
}

//handle the click function for anything in the toolbar
void Whiteboard::handleDown(float mx, float my){
    //toolbarDeclare->declare();
    
    if (toolbar->contains(mx,my)){
        colors->down(mx, my);
        tools->down(mx, my);
        
        
    }
    

}


//handle the dragging function
void Whiteboard::handleDrag(float mx, float my){
    
    
    if (toolbar->contains(mx,my)){
        //don't draw points
    }
    else{
        tools->drag(mx, my);
    }
}


//Draw Selection around each tool
void Whiteboard::draw() {
    for (std::deque<Point*>::iterator i = points.begin(); i != points.end(); i++) {
        //points[i]->draw();
        
        glColor3f((*i)->r, (*i)->g, (*i)->b);
        
        
        
        glBegin(GL_POINTS);
        
        glVertex2f((*i)->x, (*i)->y);
        
        
        glEnd();
    }
    
    toolbar->draw();
    colors->draw();
    tools->draw();
    

    
}
