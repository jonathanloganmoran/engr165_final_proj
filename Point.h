#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include "freeglut/freeglut.h"

class Point {
    // The coordinates of the point
    float x;
    float y;
    
    // The color of the point
    float r;
    float g;
    float b;
    
    Point *p;
public:
    // A constructor for point
    Point(float x, float y, float r, float g, float b);
    
    virtual void draw() const;
    void 
    
    void handle(float x, float y);
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float , float y);
    
    ~Point();
};

#endif /* Point_hpp */
