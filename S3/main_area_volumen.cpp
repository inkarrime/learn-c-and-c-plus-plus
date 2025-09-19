#include <iostream>
using namespace std;
const double PI = 3.1415;

double AreaBase(double r){
    //double una_R = r;
    return PI * r * r;
}

double calcularVolumen(double r, double h){
    return (AreaBase(r))*h;
}

double inpuuuuuut(string unmensaje){
    double algo;
    cout << unmensaje<<"\n";
    cin>>algo;
    return algo;
}



int main() {

    double radio, altura, vol;
    radio = inpuuuuuut("Ingrese el radio");
    altura = inpuuuuuut("Ingrese la altura");

    vol = calcularVolumen(radio, altura);
    return 0;
}
