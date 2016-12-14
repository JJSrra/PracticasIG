#ifndef _LUZ_H
#define _LUZ_H

#include <iostream>
#include <vector>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

class Luz{

  protected:
    vector<float> color;

  public:
    Luz();
    void activar();
    void desactivar();

};

#endif
