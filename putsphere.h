#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The PutSphere class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por ativar os voxels que estão nas
 * posições que satisfazem a equação da esfera e atribuir
 * a cor e a transparência aos mesmos.
 * xcenter - coordenada do centro da esfera no eixo x.
 * ycenter - coordenada do centro da esfera no eixo y.
 * zcenter - coordenada do centro da esfera no eixo z.
 * radius - raio da esfera.
 * r - variável referente a cor vermelha
 * g - variável referente a cor verde
 * b - variável referente a cor azul
 * a - variável referente a opacidade
 * as variáveis de cores e transparência variam entre 0 e 1
 */


class PutSphere : public FiguraGeometrica
{
protected:
    int centroX, centroY, centroZ, raio,dx, dy, dz;
    float r, g, b, alpha;
public:
    PutSphere(int dxe, int dye, int dze, int centroXe, int centroYe, int centroZe, int raioe,
              float re, float ge, float be, float alphae);
    ~PutSphere();
    void draw(Sculptor &d);
};

#endif // PUTSPHERE_H
