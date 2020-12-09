#ifndef CUTBOX_H
#define CUTBOX_H

#include "sculptor.h"
#include "figurageometrica.h"

/**
 * @brief The CutBox class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por desativar todos os voxels
 * encontrados nas posições dos intervalos
 * [x0,x1],[y0,y1],[z0,z1] e atribui a essas
 * posições a cor e transparência da figura.
 * @details
 * x0-início da figura no eixo x
 * x1-final da figura no eixo x
 * y0-início da figura no eixo y
 * y1-final da figura no eixo y
 * z0-início da figura no eixo z
 * z1-final da figura no eixo z
 */

class CutBox : public FiguraGeometrica{
protected:
    int xi, yi, zi, xf, yf, zf,dx,dy,dz;
public:
    CutBox(int dxe,int dye,int dze,int xie,int yie,int zie,int xfe,int yfe,int zfe);
    ~CutBox();
    void draw(Sculptor &d);
};

#endif // CUTBOX_H
