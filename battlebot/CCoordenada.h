#ifndef AGREGACION_CCOORDENADA_H
#define AGREGACION_CCOORDENADA_H

#include "Tipos.h"

class CCoordenada {
private:
    TipoEntero m_PosX;
    TipoEntero m_PosY;
public:
    CCoordenada();
    CCoordenada(TipoEntero pPosX, TipoEntero pPosY);
    virtual ~CCoordenada();

    TipoEntero getPosX();
    TipoEntero getPosY();
};

#endif