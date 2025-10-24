#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int filas = 8;
const int columnas = 10;

int** crearMatriz();
void liberarMatriz(int** matriz);
void llenarMatrizAleatoria(int** matriz);
void imprimirMatriz(int** matriz);
void reporteResanado(int** matriz);
void reporteSectorEspecifico(int** matriz);
void reportePorLetra(int** matriz);
int letraAIndice(char letra);
char indicePorLetra(int indice);
string clasificarNecesidad(int valor);

int main() {
    srand(time(0));
    int** cancha = crearMatriz();
    llenarMatrizAleatoria(cancha);
    
    cout << "SISTEMA DE MANTENIMIENTO DE LA CANCHA" << endl;
    cout << "Matriz de sectores (8m x 10m cada uno)" << endl << endl;
    
    imprimirMatriz(cancha);

    int opcion;
    do {
        cout << "\nMENU" << endl;
        cout << "1. Reporte total de resanado" << endl;
        cout << "2. Reporte por sector especifico" << endl;
        cout << "3. Reporte por Letra" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                reporteResanado(cancha);
                break;
            case 2:
                reporteSectorEspecifico(cancha);
                break;
            case 3:
                reportePorLetra(cancha);
                break;
            case 4:
                cout << "\nFinalizando programa" << endl;
                break;
            default:
                cout << "\nOpcion invalida. Intente nuevamente." << endl;
        }
    } while(opcion != 4);
    
    // Liberar memoria
    liberarMatriz(cancha);
    
    return 0;
}

int** crearMatriz() {
    int** matriz = new int*[filas];
    for(int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    return matriz;
}

void liberarMatriz(int** matriz) {
    for(int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

void llenarMatrizAleatoria(int** matriz) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 400;
        }
    }
}

void imprimirMatriz(int** matriz) {
    cout << "    ";
    for(int j = 0; j < columnas; j++) {
        cout << setw(5) << indicePorLetra(j);
    }
    cout << endl;
    cout << "   " << string(columnas * 5 + 1, '-') << endl;
    
    for(int i = 0; i < filas; i++) {
        cout << i << " | ";
        for(int j = 0; j < columnas; j++) {
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void reporteResanado(int** matriz) {
    int contador = 0;
    
    cout << "\nREPORTE DEL RESANADO" << endl;
    cout << "Sectores que necesitan resanado (100-199):" << endl << endl;
    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(matriz[i][j] >= 100 && matriz[i][j] <= 199) {
                cout << "Sector [" << i << indicePorLetra(j) << "] - Valor: " 
                     << matriz[i][j] << endl;
                contador++;
            }
        }
    }
    
    cout << "\nTotal de sectores que necesitan resanado: " << contador << endl;
}

void reporteSectorEspecifico(int** matriz) {
    char letra;
    int fila;
    
    cout << "\nREPORTE POR SECTOR ESPECIFICO" << endl;

    do {
        cout << "Ingrese numero de fila (0-7): ";
        cin >> fila;
        if(fila < 0 || fila > 7) {
            cout << "Fila invalida. Debe estar entre 0 y 7." << endl;
        }
    } while(fila < 0 || fila > 7);

    int columna;
    do {
        cout << "Ingrese letra de columna (A-J): ";
        cin >> letra;
        letra = toupper(letra);
        columna = letraAIndice(letra);
        if(columna == -1) {
            cout << "Letra invalida. Debe estar entre A y J." << endl;
        }
    } while(columna == -1);

    int valor = matriz[fila][columna];
    cout << "\nInformacion del Sector [" << fila << letra << "]" << endl;
    cout << "Valor registrado: " << valor << endl;
    cout << "Estado: " << clasificarNecesidad(valor) << endl;
}

void reportePorLetra(int** matriz) {
    char letra;
    int columna;
    
    cout << "\nREPORTE POR LETRA" << endl;
    
    // Validar letra
    do {
        cout << "Ingrese letra de columna (A-J): ";
        cin >> letra;
        letra = toupper(letra);
        columna = letraAIndice(letra);
        if(columna == -1) {
            cout << "Letra invalida. Debe estar entre A y J." << endl;
        }
    } while(columna == -1);

    int sinNecesidad = 0;
    int resanado = 0;
    int pintado = 0;
    int pasto = 0;
    
    cout << "\nColumna " << letra << "" << endl;
    cout << "Detalle por sector:" << endl;
    
    for(int i = 0; i < filas; i++) {
        int valor = matriz[i][columna];
        cout << "  [" << i << letra << "] = " << setw(3) << valor 
             << " - " << clasificarNecesidad(valor) << endl;

        if(valor >= 0 && valor <= 99) {
            sinNecesidad++;
        } else if(valor >= 100 && valor <= 199) {
            resanado++;
        } else if(valor >= 200 && valor <= 299) {
            pintado++;
        } else if(valor >= 300 && valor <= 399) {
            pasto++;
        }
    }

    cout << "\nRESUMEN DE NECESIDADES" << endl;
    cout << "Sin necesidad (0-99):        " << sinNecesidad << " sectores" << endl;
    cout << "Resanado (100-199):          " << resanado << " sectores" << endl;
    cout << "Pintado (200-299):           " << pintado << " sectores" << endl;
    cout << "Arreglo de pasto (300-399):  " << pasto << " sectores" << endl;
    cout << "Total de sectores:           " << filas << endl;
}

int letraAIndice(char letra) {
    letra = toupper(letra);
    if(letra >= 'A' && letra <= 'J') {
        return letra - 'A';
    }
    return -1;
}

char indicePorLetra(int indice) {
    return 'A' + indice;
}

string clasificarNecesidad(int valor) {
    if(valor >= 0 && valor <= 99) {
        return "Sin necesidad";
    } else if(valor >= 100 && valor <= 199) {
        return "Necesita resanado";
    } else if(valor >= 200 && valor <= 299) {
        return "Necesita pintado";
    } else if(valor >= 300 && valor <= 399) {
        return "Necesita arreglo de pasto";
    }
    return "Valor fuera de rango";
}