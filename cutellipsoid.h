#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The CutEllipsoid class
 * é uma classe concreta derivada da FiguraGeometrica,
 * responsável por desativar todos os voxels
 * que satisfazem a equação do elipsóide.
 * @details
 * xcenter - coordenada do centro do elipsóide no eixo x.
 * ycenter - coordenada do centro do elipsóide no eixo y.
 * zcenter - coordenada do centro do elipsóide no eixo z.
 * rx - raio no eixo x.
 * ry - raio no eixo y.
 * rz - raio no eixo z.
 */


class CutEllipsoid : public FiguraGeometrica
{
protected:
    int centroX, centroY, centroZ;
    int raioX, raioY, raioZ;
    int dx, dy, dz;
public:
    CutEllipsoid(int dxe,int dye,int dze,int centroXe,int centroYe,int centroZe,int raioXe,int raioYe,int raioZe);
    virtual ~CutEllipsoid();
    void draw(Sculptor &d);
};

#endif // CUTELLIPSOID_H
