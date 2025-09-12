#include <iostream>
using namespace std;

float monto_final_iterativo(float mi, float in, float anios);
float monto_final_recursivo(float mi, float in, float anios);

int main() {
    cout << "monto final (no recursivo): " << monto_final_iterativo(1000, 10, 10) << endl;
    cout << "monto final (recursivo): " << monto_final_recursivo(1000, 10, 10) << endl;
    return 0;
}

float monto_final_iterativo(float mi, float in, float anios) {
    float monto_final = mi;
    for(int i = 0; i < anios; i++) {
        monto_final = monto_final * (1 + in / 100);
    }
    return monto_final;
}

float monto_final_recursivo(float mi, float in, float anios) {
    if(anios == 0) return mi;
    return monto_final_recursivo(mi, in, anios -1) * (1 + in / 100);
}
