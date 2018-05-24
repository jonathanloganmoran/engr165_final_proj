#ifndef Colors_hpp
#define Colors_hpp

#include <stdio.h>
#include "TexRect.hpp"
#include "TexSelect.hpp"
#include "Point.h"


class Colors {
public:
    
    Colors();
    
    void down(float x, float y);
    void drag(float x, float y);
    void draw();
    
    float r;
    float g;
    float b;
    
    
    TexSelect* blueSelect;
    TexSelect* greenSelect;
    TexSelect* orangeSelect;
    TexSelect* redSelect;
    TexSelect* yellowSelect;
    TexSelect* purpleSelect;
    TexSelect* whiteSelect;
    TexSelect* blackSelect;
    TexSelect* pencilSelect2;
    
    
    bool redSelected;
    bool greenSelected;
    bool orangeSelected;
    bool blueSelected;
    bool yellowSelected;
    bool purpleSelected;
    bool whiteSelected;
    bool blackSelected;
    bool pencilSelected2;
    
    
    
    ~Colors();
    
    
    
    
};



#endif /* Colors_hpp */
