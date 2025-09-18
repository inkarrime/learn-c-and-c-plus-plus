#include <iostream>
using namespace std;

void separar(int numero, int *unidad, int *decena, int *centena){
    (*unidad) = numero % 10;
    (*decena) = numero / 10 % 10;
    (*centena) = numero / 100;
}


int main() {
    int num; //tiene 3 cifras
    int u, d, c;

    cout<<"Ingrese un numeroooo:";
    cin>>num;

    separar(num, &u, &d, &c);

    cout<<"La unidad es: "<<u<<"\n";
    cout<<"La decena es: "<<d<<"\n";
    cout<<"La centena es: "<<c<<"\n";
    return 0;
}
