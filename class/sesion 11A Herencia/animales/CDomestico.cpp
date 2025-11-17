//
// Created by Teo on 3/11/2019.
//

#include "CDomestico.h"

CDomestico::CDomestico(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre,
                       TipoDecimal mPeso, TipoEntero mCantAlimento) : CFelino(mGenero, mRegionVive, mNombre, mPeso,
                                                                              mCantAlimento) {}

CDomestico::~CDomestico() {

}
