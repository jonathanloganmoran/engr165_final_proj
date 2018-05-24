#include "Colors.hpp"

Colors::Colors(){
    
    redSelect = new TexSelect("", -1, 0.228, 0.134, 0.115);
    greenSelect = new TexSelect("", -0.886, 0.228, 0.141, 0.115);
    orangeSelect = new TexSelect("", -1, 0.109, 0.13, 0.094);
    blueSelect = new TexSelect("", -0.886, 0.109, 0.141, 0.095);
    yellowSelect = new TexSelect("", -1, 0.017, 0.13, 0.1);
    purpleSelect = new TexSelect("", -0.886, 0.015, 0.141, 0.1);
    whiteSelect = new TexSelect("", -1, -0.09, 0.131, 0.105);
    blackSelect = new TexSelect("", -0.886, -0.09, 0.140, 0.105);
    pencilSelect2 = new TexSelect("", -1, 0.987, 0.252, 0.17);
    
    redSelected = false;
    greenSelected = false;
    orangeSelected = false;
    blueSelected = false;
    yellowSelected = false;
    purpleSelected = false;
    whiteSelected = false;
    blackSelected = true;
    pencilSelected2 = false;
    
    
}

void Colors::down(float x, float y){
    float mx = x;
    float my = y;
    

    if (blueSelect->contains(mx, my)){
        blueSelected = true;
        r = 0;
        g = 0.423529411764706;
        b = 1;
    }
    
    else {
        blueSelected = false;
    }
    
    if (greenSelect->contains(mx, my)){
        greenSelected = true;
        r = 0;
        g = 1;
        b = 0;
    }
    
    else {
        greenSelected = false;
        
    }
    
    if (orangeSelect->contains(mx, my)){
        orangeSelected = true;
        r = 1;
        g = 0.611764705882353;
        b = 0;
    }
    
    else {
        orangeSelected = false;
        
    }
    
    if (redSelect->contains(mx, my)){
        redSelected = true;
        r = 1;
        g = 0;
        b = 0;
    }
    
    else {
        redSelected = false;
        
    }
    
    if (yellowSelect->contains(mx, my)){
        yellowSelected = true;
        r = 1;
        g = 0.941176470588235;
        b = 0;
    }
    
    else {
        yellowSelected = false;
        
    }
    
    if (purpleSelect->contains(mx, my)){
        purpleSelected = true;
        r = 0.541176470588235;
        g = 0.133333333333333;
        b = 1;
    }
    
    else {
        purpleSelected = false;
        
    }
    
    if (whiteSelect->contains(mx, my)){
        whiteSelected = true;
        r = 0.937254901960784;
        g = 0.92156862745098;
        b = 0.937254901960784;
    }
    
    else {
        whiteSelected = false;
        
    }
    
    if (blackSelect->contains(mx, my)){
        blackSelected = true;
        r = 0;
        g = 0;
        b = 0;
    }
    
    else {
        blackSelected = false;
        
    }

}

void Colors::drag(float mx, float my){
    
}

void Colors::draw(){
    if (blueSelected){
        blueSelect->draw();
        pencilSelect2->draw();
    }
    
    if (greenSelected){
        greenSelect->draw();
        pencilSelect2->draw();
    }
    
    if (orangeSelected){
        orangeSelect->draw();
        pencilSelect2->draw();
    }
    
    if (redSelected){
        redSelect->draw();
        pencilSelect2->draw();
        
    }
    
    if (yellowSelected){
        yellowSelect->draw();
        pencilSelect2->draw();
    }
    
    if (purpleSelected){
        purpleSelect->draw();
        pencilSelect2->draw();
    }
    
    if (whiteSelected){
        whiteSelect->draw();
        pencilSelect2->draw();
    }
    
    if (blackSelected){
        blackSelect->drawWhite();
        pencilSelect2->draw();
    }

}


Colors::~Colors(){
    
}
