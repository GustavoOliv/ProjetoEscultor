#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

/**
 * @brief The FiguraGeometrica class
 * é utilizada como classe obstrata
 * para a criação de figuras
 * @details em FiguraGeometrica utilizamos
 * o conceito de classe abstrata. Ou seja,
 * endereços de objetos de classes derivadas
 * podem ser armazenados em ponteiros dessa classe.
 */

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    virtual void draw(Sculptor &d)=0;
};

#endif // FIGURAGEOMETRICA_H
