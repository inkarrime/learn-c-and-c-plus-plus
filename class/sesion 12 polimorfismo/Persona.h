#ifndef PERSONA_H
#define PERSONA_H
#include <vector>
#include "Documento.h"

class Persona {
    vector<Documento*> docs;
public:
    void addDocumento(Documento* doc) {
        docs.push_back(doc);
    }
    ~Persona() {
        for (auto &pDoc : docs) {
            delete pDoc;
        }
    }
    void mostrar() {
        for (auto &pDoc : docs) {
            cout << pDoc->mostrar() << endl;
        }
    }
};



#endif //PERSONA_H
