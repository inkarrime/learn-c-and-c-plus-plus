#include <iostream>
using namespace std;

int main() {
    int edad;
    double precio;

    cout<<"Ingrese su edad:";
    cin>>edad;
    if (edad<18){
        cout<<"Se aplica el descuento para menores de edad\n";
        precio = 15;
    }
    else if (edad <= 25){
        cout<<"Se aplica el descuento para estudiantes\n";
        precio = 40;
    }
    else if(edad <=59){
        cout<<"Se cobra le precio regular\n";
        precio = 70;
    }
    else{
        cout<<"Se aplica el descuento para adulto mayor\n";
        precio = 20;
    }

    cout<<"El precio a pagar es: "<<precio;
    return 0;
}
