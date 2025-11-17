#ifndef TEMPERATURA_H
#define TEMPERATURA_H
using namespace std;
class Temperatura {
private:
    double celsius;
public:
    Temperatura(); // constructor vacio
    Temperatura(double cels);

    void mostrar(double _celsius);

    double toFahrenheit();
    double toKelvin();
    double comparar();

    void setCelsius(double _celsius);
};
#endif //TEMPERATURA_H