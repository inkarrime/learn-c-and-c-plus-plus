#include <iostream>
#include "Cilindro.h"
using namespace std;
int main() {
    Cilindro cil1, cil2(3,4);

    cil1.set_altura(5);
    cil1.set_radio(2);

    cout << "Area:"<<cil1.area()<<endl;
    cout << "Vol:"<<cil1.volume()<<endl;

    cout << "Area:"<<cil2.area()<<endl;
    cout << "Vol:"<<cil2.volume()<<endl;

}