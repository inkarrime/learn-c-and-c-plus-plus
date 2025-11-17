#ifndef AGREGACION_ROBOT_H
#define AGREGACION_ROBOT_H

#include <iostream>
#include "Tipos.h"
#include "CCoordenada.h"

using namespace std;

class CRobot {
private:
    TipoString m_Nombre;
    TipoCaracter m_Color;
    CCoordenada m_Coordenada;
public:
    CRobot();
    CRobot(TipoString pNombre, TipoCaracter pColor,
           TipoEntero pPosX, TipoEntero pPosY);
    virtual ~CRobot();

    void setNombre(TipoString pNombre);
    TipoString getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    TipoCaracter getColor();
    TipoString mostrarPosicion();
};

#endif