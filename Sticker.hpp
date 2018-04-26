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
    Sticker() : Point(this->x, this->y) {
    }           // need get/set methods for Point() instances
    
    Sticker() : Point(this->x, this->y, this->r, this->g, this->b) {
                // Sticker with custom color (via set/get methods)
    }
};

#endif /* Sticker_hpp */
