#include "Alimento.h"
int main() {
    Alimento ali(5);
    ali.mostrar();
    Verdura tomate("Tomate", 4);
    tomate.mostrar();

    ali = tomate;
    ali.mostrar();

    Alimento *pAli = &tomate;
    pAli->mostrar();

}