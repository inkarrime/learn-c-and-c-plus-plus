//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CMAMIFERO_H
#define HERENCIAANIMAL_CMAMIFERO_H


#include "CAnimal.h"

class CMamifero: public CAnimal {
private:
public:
    CMamifero(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
              TipoEntero mCantAlimento);
};


#endif //HERENCIAANIMAL_CMAMIFERO_H
