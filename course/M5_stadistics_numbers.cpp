#include <iostream>
using namespace std;

// Funcion para llenar un arreglo dinamico con datos del usuario
void llenarArray(int* arr, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingresa un numero: ";
        cin >> arr[i]; // Guardamos cada numero ingresado en el arreglo
    }
}

// Funcion para calcular el promedio de los elementos de un arreglo
float calcularPromedio(int* arr, int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i]; // Acumulamos todos los valores
    }
    return static_cast<float>(suma) / tam; // Devolvemos el promedio como float
}

// Funcion para encontrar el valor mas grande en un arreglo
int encontrarMayor(int* arr, int tam) {
    int mayor = arr[0]; // Suponemos que el primero es el mayor
    for (int i = 1; i < tam; i++) {
        if (arr[i] > mayor) mayor = arr[i]; // Actualizamos si encontramos uno mayor.
    }
    return mayor;
}

// Funcion para encontrar el valor mas pequeno en un arreglo
int encontrarMenor(int* arr, int tam) {
    int menor = arr[0]; // Suponemos que el primero es el menor
    for (int i = 1; i < tam; i++) {
        if (arr[i] < menor) menor = arr[i]; // Actualizamos si encontramos uno menor
    }
    return menor;
}

int main() {
    int n;
    cout << "Cuantos numeros deseas ingresar?: ";
    cin >> n;

    // Validamos que la cantidad ingresada sea valida
    if (n <=0) {
        cout << "Cantidad invalida." << endl;
        return 1; // Salimos del programa si la entrada es incorrecta
    }

    // Reservamos memoria dinamica para n enteros
    int* numeros = new int[n];

    // Llenamos el arreglo con los valores que ingresa el usuario
    llenarArray(numeros, n);

    // Mostramos las estadisticas calculadas
    cout << "Promedio: " << calcularPromedio(numeros, n) << endl;
    cout << "Mayor: " << encontrarMayor(numeros, n) << endl;
    cout << "Menor: " << encontrarMenor(numeros, n) << endl;

    // Liberamos la memoria reservada dinamicamente
    delete[] numeros;
    numeros = nullptr; // Asignamos nullptr para evitar uso accidental

    return 0;
}