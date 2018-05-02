//
//  Sticker.hpp
//  glutapp
//
//  Created by Jonathan Moran on 4/25/18.
//  Copyright © 2018 Angelo Kyrilov. All rights reserved.
//

#ifndef Sticker_hpp
#define Sticker_hpp

#include <stdio.h>
#include "Point.h"

class Sticker : Point {
    bool isSelected;        // to determine if Sticker tool is selected

public:
    Sticker() : Point() {
        
    }           // need get/set methods for Point() instances
    
    Sticker(float x, float y, float r, float g, float b) : Point(x, y, r, g, b) {
                // Sticker with custom color (via set/get methods)
    }
};

#endif /* Sticker_hpp */
