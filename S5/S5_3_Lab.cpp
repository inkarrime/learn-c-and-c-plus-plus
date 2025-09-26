#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void contarDias(int *temperaturas, int dias, int *frios, int *templados, int *calurosos);

int main() {
    srand(time(nullptr));
    const int dias = 10;
    int temperaturas[dias] = {0};
    int frios, templados, calurosos;

    for(int i = 0; i < dias; i++) {
        temperaturas[i] = rand() % 50;
    }

    cout << "Temperaturas generadas: ";

    for(int i = 0; i < dias; i++) {
        cout << temperaturas[i] << " ";
    }
    
    contarDias(temperaturas, dias, &frios, &templados, &calurosos);
    
    cout << endl;
    cout << "Dias frios (<= 15C): " << frios << endl;
    cout << "Dias templados (16C - 25C): " << templados << endl;
    cout << "Dias calurosos (> 25C): " << calurosos << endl;
    
    return 0;
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