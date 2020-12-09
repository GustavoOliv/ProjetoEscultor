#ifndef PUTBOX_H
#define PUTBOX_H


#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The PutBox class
 * é uma classe concreta derivada de FiguraGeometrica,
 * responsável por ativar todos os voxels que estão
 * nas posições do intervalo [x0,x1],[y0,y1],[z0,z1].
 * e atribuir aos mesmos a cor e a transparência da figura.
 * @details
 * x0 - início da caixa no eixo x
 * x1 - fim da caixa no eixo x
 * y0 - início da caixa no eixo y
 * y1 - fim da caixa no eixo y
 * z0 - início da caixa no eixo z
 * z1 - fim da caixa no eixo z
 * r - variável referente a cor vermelha
 * g - variável referente a cor verde
 * b - variável referente a cor azul
 * a - variável referente a opacidade
 * as variáveis de cores e transparência variam entre 0 e 1
 */

class PutBox : public FiguraGeometrica{
protected:
    int xi, yi, zi, xf, yf, zf, dx, dy, dz;
    float r, g, b, alpha;
public:
    PutBox(int dxe,int dye,int dze,int xie,int yie,int zie,int xfe,int yfe,int zfe,float re,float ge,float be,float alphae);
    ~PutBox();
    void draw(Sculptor &d);
};
#endif // PUTBOX_H
