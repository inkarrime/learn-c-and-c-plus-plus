//
// Created by Teo on 2/11/2019.
//

#ifndef HERENCIAANIMAL_CGALLINA_H
#define HERENCIAANIMAL_CGALLINA_H
#include "CAve.h"
class CGallina: public CAve {
private :
public:
    ~CGallina();

    CGallina(TipoCaracter mGenero, const TipoString &mRegionVive, const TipoString &mNombre, TipoDecimal mPeso,
             TipoEntero mCantAlimento);
   
  virtual void Alimentar(ostream &os,CAlimento* pAlimento);
};

#endif //HERENCIAANIMAL_CGALLINA_H
