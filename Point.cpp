#include "Point.h"

#include <deque>
#include "Whiteboard.hpp"

using namespace std;

//Whiteboard *board;

Point::Point() {
    x = 0;
    y = 0;
    r = 1.0;
    g = 0.0;
    b = 0.0;
}
Point::Point(float x, float y) {        // instantiate point with default RGB = red
    this->x = x;
    this->y = y;
    r = 1.0;
    g = 0.0;
    b = 0.0;
}
Point::Point(float x, float y, float r, float g, float b) {
    this->x = x;
    this->y = y;
    this->r = r;
    this->g = g;
    this->b = b;
}

Point::Point(float r, float g, float b){
    this->r = r;
    this->g = g;
    this->b = b;
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}

float Point::getR() {
    return r;
}

float Point::getG() {
    return g;
}

float Point::getB() {
    return b;
}

void setX();
void setY();
void setR();
void setG();
void setB();


void handle(float x, float y) {
    
    
    
}

void Point::draw() const {
    glColor3f(r, g, b);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}

Point::~Point(){
    
}
