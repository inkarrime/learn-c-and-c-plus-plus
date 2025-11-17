//
// Created by ruben on 6/10/19.
//

#ifndef AGREGACION_ROBOT_H
#define AGREGACION_ROBOT_H


#include <iostream>
#include "Tipos.h"

using namespace std;

class CRobot {
private:
  TipoString    m_Nombre;
  TipoCaracter  m_Color;
  void moverse(TipoEntero pPosX, TipoEntero pPosY);
public:
    CRobot();
    CRobot(TipoString pNombre, TipoCaracter pColor,
           TipoEntero pPosX, TipoEntero pPosY);
    virtual ~CRobot();
    TipoEntero    m_PosX;
    TipoEntero    m_PosY;

    void setNombre(TipoString pNombre);
    TipoString getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    TipoCaracter getColor();  
    TipoString mostrarPosicion();
};

#endif //AGREGACION_ROBOT_H