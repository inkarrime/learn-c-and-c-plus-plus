#include <iostream>
using namespace std;

int main() {
    int horas, minutos;
    char separador;

    cout << "Formato (hh:mm): ";
    cin >> horas >> separador >> minutos;

    // Coversion de 24h a 12h
    if (horas > 12) {
        horas -= 12;
    } else if (horas == 0) {
        horas = 12;
    };
    // 30.0 por angulo entre horas totales (360/12)
    // 0.5 por angulo por minutos totales (30/60)
    double angulo_hora = (30.0 * horas) + (0.5 * minutos);
    // 6 por grados totales entre minutos totales (360/60)
    double angulo_minuto = (6.0 * minutos);

    double angulo_manecillas;
    if(angulo_hora > angulo_minuto) {
        angulo_manecillas = angulo_hora - angulo_minuto;
    } else {
        angulo_manecillas = angulo_minuto - angulo_hora;
    }

    if (angulo_manecillas > 180) {
        angulo_manecillas = 360 - angulo_manecillas;
    }

    cout << angulo_hora << endl;
    cout << angulo_minuto << endl;
    cout << "Ángulo entre las manecillas es: " << angulo_manecillas << "°" << endl;

    return 0;
}