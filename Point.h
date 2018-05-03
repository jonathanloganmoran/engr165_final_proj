#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


struct Point {
    // The coordinates of the point
    float x;
    float y;
    
    // The color of the point
    float r;
    float g;
    float b;
    
//public:
    Point ();
    // A constructor for point
    Point (float x, float y);
    Point(float x, float y, float r, float g, float b);
    
    virtual void draw() const;
    
    float getX();
    float getY();
    float getR();
    float getG();
    float getB();
    
    void setX();
    void setY();
    void setR();
    void setG();
    void setB();
    
    void handle(float x, float y);
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float , float y);
    
    ~Point();
};

#endif /* Point_hpp */
