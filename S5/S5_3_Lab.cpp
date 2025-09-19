#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarTemperaturas(int *temperaturas, int dias) {
    srand(time(NULL));
    for(int i = 0; i < dias; i++) {
        *(temperaturas + i) = rand() % 41 + 5;
    }
}

void contarDias(int *temperaturas, int dias, int *frios, int *templados, int *calurosos) {
    *frios = 0;
    *templados = 0;
    *calurosos = 0;
    
    for(int i = 0; i < dias; i++) {
        if(*(temperaturas + i) <= 15) {
            (*frios)++;
        } else if(*(temperaturas + i) >= 16 && *(temperaturas + i) <= 25) {
            (*templados)++;
        } else {
            (*calurosos)++;
        }
    }
}

void mostrarTemperaturas(int *temperaturas, int dias) {
    cout << "Temperaturas generadas: ";
    for(int i = 0; i < dias; i++) {
        cout << *(temperaturas + i) << "°C ";
    }
    cout << endl;
}

int main() {
    const int DIAS = 10;
    int temperaturas[DIAS];
    int frios, templados, calurosos;
    
    generarTemperaturas(temperaturas, DIAS);
    mostrarTemperaturas(temperaturas, DIAS);
    
    contarDias(temperaturas, DIAS, &frios, &templados, &calurosos);
    
    cout << "\n--- CLASIFICACIÓN DE DÍAS ---" << endl;
    cout << "Días fríos (≤ 15°C): " << frios << endl;
    cout << "Días templados (16°C - 25°C): " << templados << endl;
    cout << "Días calurosos (> 25°C): " << calurosos << endl;
    
    return 0;
}