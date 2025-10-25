#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <cmath>
#include <vector>
using namespace std;
class CTriangulo {
private:
    double lado1, lado2, lado3;
public:
    CTriangulo(); // constructor vacio
    CTriangulo(double l1, double l2, double l3);
    double area();
    double perimetro();
    double semiperimetro();

    void setLados(double _lado1, double _lado2, double _lado3);
    vector<double> getLados();
};
#endif //CTRIANGULO_H