#include <iostream>
using namespace std;

int sumatoria(int n) {
    if (n <= 1) return n;
    return n + sumatoria(n - 1);
}

int sumatoriaDeSumatorias(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    return sumatoria(n) + sumatoriaDeSumatorias(n - 1);
}

void construirPiramide(int totalCubos, int& altura, int& sobra) {
    altura = 0;
    int cubosUsados = 0;

    while (true) {
        int cubosNecesarios = sumatoriaDeSumatorias(altura + 1);
        if (cubosNecesarios <= totalCubos) {
            altura++;
            cubosUsados = cubosNecesarios;
        } else {
            break;
        }
    }

    sobra = totalCubos - cubosUsados;
}

int main() {
    int cubos, altura, sobra;

    cout << "Cubos: ";
    cin >> cubos;

    construirPiramide(cubos, altura, sobra);

    cout << "Altura: " << altura << endl;
    cout << "Sobra: " << sobra << endl;

    return 0;
}