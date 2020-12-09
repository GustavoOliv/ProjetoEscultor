#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The CutSphere class
 * é uma classe concreta derivada da FiguraGeometrica,
 * responsável por desabilitar todos os voxels
 * que estão em posições que satisfazem a equação
 * da esfera.
 * @details
 * xcenter - coordenada do centro da esfera no eixo x.
 * ycenter - coordenada do centro da esfera no eixo y.
 * zcenter - coordenada do centro da esfera no eixo z.
 * radius - raio da esfera.
 */

class CutSphere : public FiguraGeometrica{
protected:
    int centroX, centroY, centroZ, raio, dx, dy, dz;
public:
    CutSphere(int dxe, int dye,int dze,int centroXe,int centroYe,int centroZe,int raioe);
    ~CutSphere();
    void draw(Sculptor &d);
};

#endif // CUTSPHERE_H
