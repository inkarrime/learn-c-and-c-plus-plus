#include "CCoordenada.h"

CCoordenada::CCoordenada(): m_PosX{0}, m_PosY{0} {}

CCoordenada::CCoordenada(TipoEntero pPosX, TipoEntero pPosY):
    m_PosX{pPosX}, m_PosY{pPosY} {}

CCoordenada::~CCoordenada() {}

TipoEntero CCoordenada::getPosX() {
    return m_PosX;
}

TipoEntero CCoordenada::getPosY() {
    return m_PosY;
}