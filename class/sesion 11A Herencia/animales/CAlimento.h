//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CALIMENTO_H
#define HERENCIAANIMAL_CALIMENTO_H

#include "Tipos.h"
class CAlimento {
private:
    TipoString m_Nombre;
    TipoEntero m_Cantidad;
public:
    CAlimento(TipoString, TipoEntero);
    ~CAlimento();
    TipoEntero getCantidad();
    TipoString getNombre();
};
#endif //HERENCIAANIMAL_CALIMENTO_H
