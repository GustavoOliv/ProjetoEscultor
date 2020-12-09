#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The PutVoxel class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por ativar e atribuir cor e transparência
 * para o voxel na posição (x,y,z).
 * @details
 * x - coordenada do eixo x
 * y - coordenada do eixo y
 * z - coordenada do eixo z
 * r - variável referente a cor vermelha
 * g - variável referente a cor verde
 * b - variável referente a cor azul
 * a - variável referente a opacidade
 * as variáveis de cores e transparência variam entre 0 e 1
 */


class PutVoxel : public FiguraGeometrica{
protected:
    int x, y, z;
    float r, g, b, alpha;
public:
    PutVoxel(int xe,int ye,int ze, float re, float ge, float be, float alphae);
    ~PutVoxel();
    void draw(Sculptor &d);
};

#endif // PUTVOXEL_H
