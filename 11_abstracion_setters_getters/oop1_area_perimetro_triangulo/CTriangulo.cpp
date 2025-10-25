#include "CTriangulo.h"
CTriangulo::CTriangulo() {
    lado1 = lado2 = lado3 = 0;
}
CTriangulo::CTriangulo(double l1, double l2, double l3) {
    lado1 = l1;
    lado2 = l2;
    lado3 = l3;
}
void CTriangulo::setLados(double _lado1, double _lado2, double _lado3) {
    lado1 = _lado1;
    lado2 = _lado2;
    lado3 = _lado3;
}
double CTriangulo::semiperimetro() {
    return (lado1 + lado2 + lado3) / 2;
}
double CTriangulo::perimetro() {
    return (lado1 + lado2 + lado3);
}
double CTriangulo::area() {
    double s = semiperimetro();
    return sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
}
vector<double> CTriangulo::getLados() {
    vector<double> lados={lado1,lado2,lado3};
    return lados;
}