#ifndef CUTVOXEL_H
#define CUTVOXEL_H


#include "figurageometrica.h"

/**
 * @brief The CutVoxel class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por desativar o voxel da posição (x,y,z)
 * por meio da atribuição de false para o isOn.
 * @details
 * x - coordenada do eixo x
 * y - coordenada do eixo y
 * z - coordenada do eixo z
 */

class CutVoxel : public FiguraGeometrica
{
protected:
    int x, y, z;
public:
    CutVoxel(int xe,int ye,int ze);
    ~CutVoxel();
    void draw(Sculptor &d);
};


#endif // CUTVOXEL_H
