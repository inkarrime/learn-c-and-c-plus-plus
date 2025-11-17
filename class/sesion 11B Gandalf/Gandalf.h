#ifndef GANDALF_H
#define GANDALF_H
#include <iostream>
#include "Alimento.h"
using namespace std;
class Gandalf {
    int pf;
public:
    Gandalf() { pf = 0; }
    void comer(Alimento *pAli) {
        pf += pAli->getPf();
    }
    string getEstadoAnimo() {
        return "Feliz";
    }
};
#endif //GANDALF_H
