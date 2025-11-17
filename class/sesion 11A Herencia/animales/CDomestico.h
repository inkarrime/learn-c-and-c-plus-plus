//
// Created by Teo on 3/11/2019.
//

#ifndef HERENCIAANIMAL_CDOMESTICO_H
#define HERENCIAANIMAL_CDOMESTICO_H
#include "CFelino.h"
class CDomestico: public CFelino {
private:
public:
    CDomestico(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
               TipoEntero mCantAlimento);
    virtual ~CDomestico();
};
#endif //HERENCIAANIMAL_CDOMESTICO_H
