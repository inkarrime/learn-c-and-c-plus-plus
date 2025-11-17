#include "CRobot.h"

CRobot::CRobot(): m_Color{}, m_Coordenada{} {}

CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
           TipoEntero pPosX, TipoEntero pPosY):
                m_Nombre{pNombre},
                m_Color{pColor},
                m_Coordenada{pPosX, pPosY} {}

CRobot::~CRobot() {}

void CRobot::setNombre(TipoString pNombre) {
    this->m_Nombre = pNombre;
}

TipoString CRobot::getNombre() {
    return m_Nombre;
}

TipoEntero CRobot::getPosX() {
    return m_Coordenada.getPosX();
}

TipoEntero CRobot::getPosY() {
    return m_Coordenada.getPosY();
}

TipoCaracter CRobot::getColor() {
    return m_Color;
}

TipoString CRobot::mostrarPosicion() {
    return "X = " + to_string(m_Coordenada.getPosX()) +
           " Y = " + to_string(m_Coordenada.getPosY());
}