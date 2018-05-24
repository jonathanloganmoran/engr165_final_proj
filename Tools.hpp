//
//  Tools.hpp
//  glutapp
//
//  Created by Emily Bossiere on 5/10/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef Tools_hpp
#define Tools_hpp

#include <stdio.h>
#include "TexRect.hpp"
#include "TexSelect.hpp"
#include "Point.h"
//#include "Whiteboard.hpp"
#include <math.h>
#include <deque>



class Tools{
    
    std::deque<Point*> points;
    
public:
    
    Tools();
    
    void down(float x, float y);
    void drag(float x, float y);
    void draw();
    
    float r;
    float g;
    float b;
    
    
    TexSelect* pencilSelect;
    TexSelect* eraserSelect;
    TexSelect* stampSelect;
    TexSelect* thickSelect;
    TexSelect* mediumSelect;
    TexSelect* smallSelect;
    TexSelect* tinySelect;
    
    
    bool pencilSelected;
    bool eraserSelected;
    bool stampSelected;
    bool thickSelected;
    bool mediumSelected;
    bool smallSelected;
    bool tinySelected;
    
    
    
    ~Tools();
    
    
    
    
};

#endif /* Tools_hpp */
