//
// Created by Teo on 2/11/2019.
//

#include "CFelino.h"

CFelino::CFelino(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
                 TipoEntero mCantAlimento) : CMamifero(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}

CFelino::~CFelino() {

}
