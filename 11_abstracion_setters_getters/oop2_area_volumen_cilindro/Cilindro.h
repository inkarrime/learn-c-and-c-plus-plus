#ifndef CILINDRO_H
#define CILINDRO_H

class Cilindro {
private:
    double radio, altura;
public:
    Cilindro();
    Cilindro(double r, double a);

    double area_base();
    double area_lateral();
    double area();
    double volume();

    void set_radio(double r);
    void set_altura(double a);
    double get_radio();
    double get_altura();
};

#endif //CILINDRO_H