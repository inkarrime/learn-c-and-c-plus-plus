#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pedido.h"

class Cliente {
    string nombre;
    Pedido *pPedido;
public:
    Cliente(string nom) { nombre = nom; }
    void asociar_pedido(Pedido *pPed) {
        pPedido = pPed;
    }
    string imprimir() {
        return nombre + " " + pPedido->imprimir();
    }
};



#endif //CLIENTE_H
