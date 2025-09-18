#include <iostream>
using namespace std;

int main() {
    int edad;
    double precio;

    cout<<"Ingrese su edad:";
    std::cin>>edad;

    if (edad<18){
        cout<<"Se aplica el descuento para menores de edad\n";
        precio = 15;
    }
    else{
        //aqui se asume que no son menores a 18
        if(edad<=25){
            cout<<"Se aplica el descuento para estudiantes\n";
            precio = 40;
        }
        else{
            //se asume que tiene 26 o más
            if(edad<=59){
                cout<<"Se cobra el precio regular\n";
                precio = 70;
            }
            else{
                //se asume que tiene 60 o más
                cout<<"Se aplica el descuento para adulto mayor\n";
                precio = 20;

            }
        }

    }
    cout<<"El precio a pagar es "<<precio;
    return 0;
}
