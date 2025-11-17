//
// Created by Teo on 2/11/2019.
//

#include "CGallina.h"

CGallina::~CGallina() {}

CGallina::CGallina(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
                   TipoEntero mCantAlimento) : CAve(mGenero, mRegionVive, mNombre, mPeso, mCantAlimento) {}


void CGallina::Alimentar(ostream &os,CAlimento* pAlimento){
 os<<m_Nombre<<" en proceso de implementación la alimentación"<<endl;
}
