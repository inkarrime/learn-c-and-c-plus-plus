#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    float resultado,radianes;
    float pi = 3.14159;
    int width = 29;
    cout<<"Diagrama de la funcion coseno de 0 a 360 grados con incremento de 15 grados:"<<endl;
    cout<<setw(6)<<"-1"<<setw(9)<<"0"<<setw(9)<<"1"<<setw(9)<<""<<endl;
    cout<<setw(34)<<setfill('+')<<""<<endl;
    for (int grado = 0; grado <= 360; grado = grado +15) {
        radianes = grado * (pi / 180);
        resultado = cos(radianes);
        if (grado > 15 and grado <165){
            width = width - 1;
        }
        else if (grado > 195 and grado<360) {
            width = width + 1;
        }
        cout << setw(width) << setfill(' ') << "* cos(" << grado << ")=" << fixed << setprecision(2) << resultado <<""<< endl;
    }
}
