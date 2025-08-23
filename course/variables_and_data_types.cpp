#include <iostream>
#include <string> // Para usar strings
using namespace std;

int main()
{
    // Tipo numericos enteros
    int edad = 21;                      // Entero con signo
    unsigned int puntos = 1500;         // Entero sin signo (solo valores positivos)
    short dias = 7;                     // Entero corto
    long poblacion = 8000000;           // Entero largo

    // Tipos numericos decimales
    float temperaturad = 36.6f;         // Decimal con menor precision
    double altura = 1.75;               // Decimal con mayor precision
    long double pi = 3.141592653589;    // Decimal de alta precision

    // Caracter y cadena
    char inicial = 'I';                 // Un solo caracter
    string nombre = "inkarri";          // Cadena de texto (requiere #include <string>)

    // Booleano
    bool estudiante = true;             // true o false

    // Mostrar los valores
    cout << "Nombre: " << nombre << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Edad: " << edad << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Temperatura corporal: " << temperaturad << "C" << endl;
    cout << "Puntos acumulados: " << puntos << endl;
    cout << "Estudiante: " << (estudiante ? "Si" : "No") << endl;
    cout << "Poblacion estimada: " << poblacion << endl;
    cout << "Dias de la semana: " << dias << endl;
    cout << "Valor de pi: " << pi << endl;

    return 0;
}
