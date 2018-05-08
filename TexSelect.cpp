#include "TexSelect.hpp"


TexSelect::TexSelect (const char* filename, float x=0, float y=0, float w=0.5, float h=0.5){
    
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
    
    texture_id = SOIL_load_OGL_texture (
                                        filename,
                                        SOIL_LOAD_AUTO,
                                        SOIL_CREATE_NEW_ID,
                                        SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
                                        );
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    
    
    xinc = 0.01;
    yinc = 0.01;
}

//Draw selection outline

void TexSelect::draw(){
    glBindTexture( GL_TEXTURE_2D, texture_id );
    glEnable(GL_TEXTURE_2D);
    
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    
    //left line
    glVertex2f(x+0.01, y - h);
    glVertex2f(x+0.01, y);
    
    //top line
    glVertex2f(x+0.01, y-0.001);
    glVertex2f(((x-0.01)+(w)), y-0.001);//top right point
    
    //right line
    glVertex2f(((x-0.01)+(w)), y);
    glVertex2f(x-0.01+w, y - h);//bottom right point
    
    //bottom line
    glVertex2f(x-0.01+w, y - h);
    glVertex2f(x+0.01, y - h);
    
    glEnd();

    
    glDisable(GL_TEXTURE_2D);
}

void TexSelect::drawWhite(){
    glBindTexture( GL_TEXTURE_2D, texture_id );
    glEnable(GL_TEXTURE_2D);
    
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    
    //left line
    glVertex2f(x+0.01, y - h);
    glVertex2f(x+0.01, y);
    
    //top line
    glVertex2f(x+0.01, y-0.001);
    glVertex2f(((x-0.01)+(w)), y-0.001);//top right point
    
    //right line
    glVertex2f(((x-0.01)+(w)), y);
    glVertex2f(x-0.01+w, y - h);//bottom right point
    
    //bottom line
    glVertex2f(x-0.01+w, y - h);
    glVertex2f(x+0.01, y - h);
    
    glEnd();
    
    
    glDisable(GL_TEXTURE_2D);
}



bool TexSelect::contains(float mx, float my){
    return mx >= x && mx <= x+w && my <= y && my >= y - h;
}
