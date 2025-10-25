#include <iostream>
using namespace std;

int main()
{
    int colores;
    int De24,De12, De6, Sobran;

    cout << "Numero de colores: ";
    cin >> colores;
    //--- calculo
    De24  = colores/24;
    colores = colores %24;  //-- hallamos es resto
    De12  = colores/12;
    colores = colores %12;
    De6   =  colores /6;
    Sobran = colores%6;

    cout << "Se empaquetan en cajas de " << "\n";
    cout << De24 << " cajas de 24 colores " <<"\n";
    cout << De12 << " cajas de 12 colores " << "\n";
    cout << De6  << " cajas de 6 colores  " << "\n";
    cout << Sobran << " colores";
}
