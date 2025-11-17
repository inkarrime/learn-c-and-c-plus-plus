#include "Cliente.h"
int main () {
    Cliente cli1("Manuel");
    Pedido obj("Cajas",234);

    cli1.asociar_pedido( &obj );
    cout << cli1.imprimir() << endl;

    Pedido *pP = new Pedido("Bolsas", 564.5);
    cli1.asociar_pedido( pP );
    cout << cli1.imprimir();

    return 0;
}