#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The PutEllipsoid class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por ativar todos os voxels em que a
 * posição satisfaz a equação do elipsóide e atribui
 * a cor e a transparência da figura.
 * @details
 * xcenter - coordenada do centro do elipsóide no eixo x.
 * ycenter - coordenada do centro do elipsóide no eixo y.
 * zcenter - coordenada do centro do elipsóide no eixo z.
 * rx - raio no eixo x.
 * ry - raio no eixo y.
 * rz - raio no eixo z.
 * r - variável referente a cor vermelha
 * g - variável referente a cor verde
 * b - variável referente a cor azul
 * a - variável referente a opacidade
 * as variáveis de cores e transparência variam entre 0 e 1
 */


class PutEllipsoid : public FiguraGeometrica{
protected:
    int centroX, centroY, centroZ , raioX, raioY, raioZ;
    float r ,g, b, dx, dy, dz, alpha;
public:
    PutEllipsoid(int dxe,int dye,int dze,int centroXe,int centroYe,int centroZe,int raioXe
                 ,int raioYe,int raioZe, float re, float ge, float be,float alphae);
    ~PutEllipsoid();
    void draw(Sculptor &d);
};

#endif // PUTELLIPSOID_H
