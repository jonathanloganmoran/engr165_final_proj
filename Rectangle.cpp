/*#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle() : Point(mx, my) {        // want to render Rectangle instance at (mx, my)
    h = 1.0;
    w = 1.0;
}

Rectangle::Rectangle(float h, float w) : Point() {
    this->h = h;
    this->w = w;
}

Rectangle::Rectangle(float x, float y, float h, float w) : Point() {
    Point->setX(x);
    Point->setY(y);
    this->h =h;
    this->w =w;
}
    
Rectangle::float getH() {
    return h;
}
    
Rectangle::float getW() {
    return w;
}

Rectangle::void setH(float h) {
    this->h = h;
}

Rectangle::void setW(float w) {
    this->w = w;
}
    
Rectangle::bool contains(Rectangle* v) {
    if(mx >= v->getX() && my <= v->getX() + v->getW()){
        if(mx <= v->getY() && my >= v->getY() - v->getH()){
            return true;
        }
    }
    return false;
}
*/
