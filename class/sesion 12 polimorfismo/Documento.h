
#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <iostream>
using namespace std;
class Documento {
protected:
    string numero, fecha_cad;
public:
    Documento(string nom, string fc) {
        numero = nom;
        fecha_cad = fc;
    }
    virtual string mostrar() = 0; // virtual puro
};

class DNI : public Documento {
    string ciudad;
public:
    DNI(string nom, string fc, string ciu) : Documento(nom, fc){
        ciudad = ciu;
    }
    string mostrar() {
        return "DNI: "+ numero + " " + fecha_cad + " " + ciudad;
    }
};



#endif //DOCUMENTO_H
