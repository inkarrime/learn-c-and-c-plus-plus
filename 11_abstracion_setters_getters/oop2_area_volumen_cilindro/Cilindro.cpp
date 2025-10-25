#include "Cilindro.h"

const double PI = 3.14159265359;

// Constructor vacío
Cilindro::Cilindro() {
    radio = 0;
    altura = 0;
}

// Constructor con parámetros
Cilindro::Cilindro(double r, double a) {
    radio = r;
    altura = a;
}

// Área de la base (círculo): A = πr²
double Cilindro::area_base() {
    return PI * radio * radio;
}

// Área lateral (rectángulo enrollado): A = 2πrh
double Cilindro::area_lateral() {
    return 2 * PI * radio * altura;
}

// Área total de superficie cilíndrica: A = 2πr² + 2πrh
double Cilindro::area() {
    return 2 * area_base() + area_lateral();
}

// Volumen del cilindro: V = πr²h
double Cilindro::volume() {
    return area_base() * altura;
}

// Setter para radio
void Cilindro::set_radio(double r) {
    radio = r;
}

// Setter para altura
void Cilindro::set_altura(double a) {
    altura = a;
}

// Getter para radio
double Cilindro::get_radio() {
    return radio;
}

// Getter para altura
double Cilindro::get_altura() {
    return altura;
}