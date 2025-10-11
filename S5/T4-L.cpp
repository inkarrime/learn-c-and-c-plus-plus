#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

void generarArray(int arr[], int tam);
void mostrarArray(int arr[], int tam);
double calcularMedia(int arr[], int tam);
void calcularModa(int arr[], int n, int modas[], int& cantidadModas, int& maxFrecuencia);
double calcularMediana(int arr[], int n);
double calcularDesviacionIndividual(int xi, double media);
double calcularDesviacionMedia(int arr[], int n, double media);
double calcularVarianza(int arr[], int n, double media);
double calcularDesviacionEstandar(double varianza);


int main() {
    srand(time(0));
    int tam;
    cout << "Ingrese el tamano del array: ";
    cin >> tam;
    if (tam <= 0) {
        cout << "Error: El tamanio debe ser mayor a 0" << endl;
        return 1;
    }

    int* arr = new int[tam];
    generarArray(arr, tam);
    mostrarArray(arr, tam);

    double media = calcularMedia(arr, tam);
    cout << endl;

    cout << "1. Media: " << media << endl;

    int* modas = new int[tam];
    int cantidadModas = 0;
    int maxFrecuencia;
    calcularModa(arr, tam, modas, cantidadModas, maxFrecuencia);
    cout << "2. Moda:" << endl;
    cout << "   Valores: ";
    for (int i = 0; i < cantidadModas; i++) {
        cout << modas[i];
        if (i < cantidadModas - 1) cout << ", ";
    }
    cout << endl;
    cout << "   Frecuencia: " << maxFrecuencia << " veces" << endl;

    double mediana = calcularMediana(arr, tam);
    cout << endl << "3. Mediana: " << mediana << endl;

    cout << "4. Desviacion respecto de la media: " << endl;
    for (int i = 0; i < tam; i++) {
        double desv = calcularDesviacionIndividual(arr[i], media);
        cout << "   D" << (i+1) << " = |" << arr[i] << " - " << media
             << "| = " << desv << endl;
    }

    double desvMedia = calcularDesviacionMedia(arr, tam, media);
    cout << "5. Desviacion media: " << desvMedia << endl;

    double varianza = calcularVarianza(arr, tam, media);
    cout << "6. Varianza: " << varianza << endl;

    double desvEstandar = calcularDesviacionEstandar(varianza);
    cout << "7. Desviacion estandar: " << desvEstandar << endl;

    delete[] arr;
    delete[] modas;

    return 0;
}

void generarArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 30 + 1;
    }
}

void mostrarArray(int arr[], int n) {
    cout << "Array generado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double calcularMedia(int arr[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma / n;
}

void calcularModa(int arr[], int n, int modas[], int& cantidadModas, int& maxFrecuencia) {
    map<int, int> frecuencias;

    for (int i = 0; i < n; i++) {
        frecuencias[arr[i]]++;
    }

    maxFrecuencia = 0;
    for (auto& par : frecuencias) {
        if (par.second > maxFrecuencia) {
            maxFrecuencia = par.second;
        }
    }

    cantidadModas = 0;
    for (auto& par : frecuencias) {
        if (par.second == maxFrecuencia) {
            modas[cantidadModas] = par.first;
            cantidadModas++;
        }
    }
}

double calcularMediana(int arr[], int n) {
    int* temp = new int[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    sort(temp, temp + n);

    double mediana;
    if (n % 2 == 1) {
        mediana = temp[n / 2];
    } else {
        mediana = (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
    }

    delete[] temp;
    return mediana;
}

double calcularDesviacionIndividual(int xi, double media) {
    return abs(xi - media);
}

double calcularDesviacionMedia(int arr[], int n, double media) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += abs(arr[i] - media);
    }
    return suma / n;
}

double calcularVarianza(int arr[], int n, double media) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(arr[i] - media, 2);
    }
    return suma / n;
}

double calcularDesviacionEstandar(double varianza) {
    return sqrt(varianza);
}
