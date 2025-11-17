//
// Created by Teo on 2/11/2019.
//



#include "CAnimal.h"
/*
CAnimal::CAnimal(TipoString pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento) {
    m_Nombre = pNombre;
    m_Peso=pPeso;
    m_CantAlimento = pCantAlimento;
}
CAnimal::CAnimal() {}

TipoString CAnimal::getNombre(){
    return m_Nombre;
}
TipoDecimal CAnimal::getPeso(){
    return m_Peso;
}
TipoEntero CAnimal::getCantAlimento(){
    return m_CantAlimento;
}

*/
CAnimal::~CAnimal() {}
CAnimal::CAnimal(TipoCaracter pGenero, const TipoString &pRegionVive, const TipoString &pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento) : m_Genero(pGenero), m_RegionVive(pRegionVive), m_Nombre(pNombre), m_Peso(pPeso), m_CantAlimento(pCantAlimento) {}
TipoCaracter CAnimal::getGenero() const {
    return m_Genero;
}
const TipoString &CAnimal::getRegionVive() const {
    return m_RegionVive;
}
const TipoString &CAnimal::getNombre() const {
    return m_Nombre;
}
TipoDecimal CAnimal::getPeso() const {
    return m_Peso;
}
TipoEntero CAnimal::getCantAlimento() const {
    return m_CantAlimento;
}
void  CAnimal::ProduceSonido(ostream &os){
  cout << "El animal " << m_Nombre << " no produce sonido" << endl;
}
void  CAnimal::Alimentar(ostream &os,CAlimento* pAlimento){}