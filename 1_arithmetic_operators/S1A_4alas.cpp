#include <iostream>
using namespace std;
int main()
{ int Numero;
    int Piso, Ala;
    int Resto;
    char Habitacion;

    cout << "Ingrese numero : ";
    cin >> Numero;

    Piso  = (Numero-1)/12 + 1;
    Resto = (Numero-1)%12 + 1;
    Ala   = (Resto-1)/4 + 1;
    Habitacion =(char) ((Resto -1)%4 + 65);

    cout << "Piso : " << Piso << endl;
    cout << "Ala  : "  << Ala << endl;
    cout << "Habitacion : " << Habitacion << endl;
}