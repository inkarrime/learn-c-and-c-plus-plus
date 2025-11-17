#ifndef ALIMENTO_H
#define ALIMENTO_H
class Alimento {
    int pf;
public:
    Alimento(int puntos){ pf = puntos; }
    int getPf() { return pf; }
};
class Abarrote : public Alimento {
public:
    Abarrote() : Alimento(2) {}
};
#endif //ALIMENTO_H
