#include <iostream>
using namespace std;

void diferencia(int* pSeg1, int* pSeg2, int& h, int& m, int& s);

int main() {
    int horas1, minutos1, segundos1;
    int horas2, minutos2, segundos2;
    int totalSeg1, totalSeg2;
    int horasDif, minutosDif, segundosDif;

    cout << "Ingrese la hora de inicio (hh mm ss): ";
    cin >> horas1 >> minutos1 >> segundos1;

    cout << "Ingrese la hora de fin (hh mm ss): ";
    cin >> horas2 >> minutos2 >> segundos2;

    totalSeg1 = (horas1 * 3600) + (minutos1 * 60) + segundos1;
    totalSeg2 = (horas2 * 3600) + (minutos2 * 60) + segundos2;

    diferencia(&totalSeg1, &totalSeg2, horasDif, minutosDif, segundosDif);

    cout << "\nDiferencia de tiempo: " 
         << horasDif << "h:" 
         << minutosDif << "m:" 
         << segundosDif << "s" << endl;
    
    return 0;
}

void diferencia(int* pSeg1, int* pSeg2, int& h, int& m, int& s) {
    int diferenciaTotal;

    if(*pSeg2 >= *pSeg1) {
        diferenciaTotal = *pSeg2 - *pSeg1;
    } else {
        diferenciaTotal = *pSeg1 - *pSeg2;
    }

    h = diferenciaTotal / 3600;
    m = (diferenciaTotal % 3600) / 60;
    s = diferenciaTotal % 60;
}