//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CPERRO_H
#define HERENCIAANIMAL_CPERRO_H

#include "Tipos.h"
#include "CMamifero.h"

class CPerro: public CMamifero {
private:
public:
    CPerro(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
    TipoEntero mCantAlimento);
    ~CPerro();
    void ProduceSonido(ostream &os);
    virtual void Alimentar(ostream &os,CAlimento* pAlimento);
    virtual void ExpresionFelicidad(ostream &os);
};


#endif //HERENCIAANIMAL_CPERRO_H
