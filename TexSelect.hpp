#ifndef TexSelect_hpp
#define TexSelect_hpp


#include <GLUT/glut.h>
#include <SOIL.h>

//#endif

class TexSelect {
public:
    float x;
    float y;
    float w;
    float h;
    GLuint texture_id;
    
    TexSelect (const char*, float, float, float, float);
    
    void draw();
    void drawWhite();
    
    bool contains(float, float);
    
    
    float xinc;
    float yinc;
};

#endif
