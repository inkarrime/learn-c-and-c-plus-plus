#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
using namespace std;

class Pedido {
    string nombre;
    double monto;
public:
    Pedido(const string &nombre, double monto)
        : nombre(nombre),
          monto(monto) {
    }

    string imprimir() {
        return nombre + " " + to_string(monto);
    }

    string get_nombre() const {
        return nombre;
    }

    void set_nombre(const string &nombre) {
        this->nombre = nombre;
    }

    double get_monto() const {
        return monto;
    }

    void set_monto(double monto) {
        this->monto = monto;
    }
};



#endif //PEDIDO_H
