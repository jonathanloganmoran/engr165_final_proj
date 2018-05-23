#ifndef App_hpp
#define App_hpp

#include "GlutApp.h"
#include "Point.h"
#include "TexRect.hpp"
#include "TexSelect.hpp"
#include "Circle.h"
#include <deque>
#include <math.h>

class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;
    
    float r;
    float g;
    float b;
    
public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
    
    TexRect* toolbar;
    TexRect* thicknessBar;
    
    std::deque<Point*> points;

    TexSelect* pencilSelect;
    TexSelect* eraserSelect;
    TexSelect* squareSelect;
    TexSelect* circleSelect;
    TexSelect* crossSelect;
    TexSelect* blueSelect;
    TexSelect* greenSelect;
    TexSelect* orangeSelect;
    TexSelect* redSelect;
    TexSelect* yellowSelect;
    TexSelect* purpleSelect;
    TexSelect* whiteSelect;
    TexSelect* blackSelect;
    TexSelect* thickSelect;
    TexSelect* mediumSelect;
    TexSelect* smallSelect;
    TexSelect* tinySelect;
    

    bool pencilSelected;
    bool eraserSelected;
    bool squareSelected;
    bool circleSelected;
    bool crossSelected;
    
    bool redSelected;
    bool greenSelected;
    bool orangeSelected;
    bool blueSelected;
    bool yellowSelected;
    bool purpleSelected;
    bool whiteSelected;
    bool blackSelected;

    
    bool thickSelected;
    bool mediumSelected;
    bool smallSelected;
    bool tinySelected;
    
};

#endif /* App_hpp */
