#include "DiosGriego.h"
#include <iostream>
#include <fstream>

// Constructor
DiosGriego::DiosGriego(string nom, string alterno) {
    nombre = nom;
    nombreAlterno = alterno;
    contadorHijos = 0;
    morada = "";
}

// Getters
string DiosGriego::getNombre() {
    return nombre;
}

string DiosGriego::getNombreAlterno() {
    return nombreAlterno;
}

vector<string> DiosGriego::getPadres() {
    return padres;
}

int DiosGriego::getContadorHijos() {
    return contadorHijos;
}

string DiosGriego::getMorada() {
    return morada;
}

vector<string> DiosGriego::getHijosComidos() {
    return hijosComidos;
}

// Setters
void DiosGriego::agregarPadres(string padre) {
    padres.push_back(padre);
}

void DiosGriego::setMorada(string nuevaMorada) {
    morada = nuevaMorada;
}

// Métodos para comer (sobrecarga)
void DiosGriego::comer(DiosGriego& dios) {
    hijosComidos.push_back(dios.getNombre());
}

void DiosGriego::comer(string objeto) {
    hijosComidos.push_back(objeto);
}

// Método para vomitar
void DiosGriego::vomitar() {
    // Este método se implementará en el main para manejar el archivo
}

void DiosGriego::mostrarCantidadHijos() {
    cout << nombre << " tiene " << contadorHijos << " hijos." << endl;
}

// ========== PREGUNTA 6 ==========
// Operador + original (solo retorna string)
/*
string operator+(DiosGriego& dios1, DiosGriego& dios2) {
    return dios1.getNombre() + " y " + dios2.getNombre();
}
*/

// ========== PREGUNTA 7 ==========
// Operador + modificado (incrementa contador de hijos)
string operator+(DiosGriego& dios1, DiosGriego& dios2) {
    dios1.contadorHijos++;
    dios2.contadorHijos++;
    return dios1.getNombre() + " y " + dios2.getNombre();
}

// ========== PREGUNTA 13 ==========
// Operador + para dios con no-dios
string operator+(DiosGriego& dios, string noDios) {
    dios.contadorHijos++;
    return dios.getNombre() + " y " + noDios;
}