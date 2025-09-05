#include <iostream>
using namespace std;

int main() {
    int numEstudiantes;
    int aprobados = 0, reprobados = 0;
    int excelentes = 0, buenos = 0, regulares = 0, insuficientes = 0;
    double sumaPromedios = 0.0;

    cout << "=== SISTEMA DE ANÁLISIS DE CALIFICACIONES ===" << endl;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numEstudiantes;

    if (numEstudiantes <= 0) {
        cout << "Error: El número de estudiantes debe ser positivo." << endl;
        return 1;
    }

    cout << "\n--- INGRESO DE CALIFICACIONES ---" << endl;

    for (int i = 1; i <= numEstudiantes; i++) {
        cout << "\nEstudiante " << i << ":" << endl;

        double sumaCalificaciones = 0.0;
        bool calificacionesValidas = true;

        for (int j = 1; j <= 4; j++) {
            double calificacion;
            cout << "  Calificación " << j << " (0-10): ";
            cin >> calificacion;

            if (calificacion < 0.0 || calificacion > 10.0) {
                cout << "  Error: Calificación inválida. Debe estar entre 0 y 10." << endl;
                calificacionesValidas = false;
                j--;
            } else {
                sumaCalificaciones += calificacion;
            }
        }

        if (calificacionesValidas) {
            double promedio = sumaCalificaciones / 4.0;
            sumaPromedios += promedio;

            cout << "  Promedio: " << promedio;

            if (promedio >= 6.0) {
                cout << " - APROBADO";
                aprobados++;
            } else {
                cout << " - REPROBADO";
                reprobados++;
            }

            if (promedio >= 18.0) {
                cout << " (Excelente)" << endl;
                excelentes++;
            } else if (promedio >= 14.0) {
                cout << " (Bueno)" << endl;
                buenos++;
            } else if (promedio >= 12.0) {
                cout << " (Regular)" << endl;
                regulares++;
            } else {
                cout << " (Insuficiente)" << endl;
                insuficientes++;
            }
        }
    }

    cout << "\n=== ESTADÍSTICAS GENERALES ===" << endl;
    cout << "Total de estudiantes: " << numEstudiantes << endl;
    cout << "Aprobados: " << aprobados << " ("
         << (aprobados * 100.0 / numEstudiantes) << "%)" << endl;
    cout << "Reprobados: " << reprobados << " ("
         << (reprobados * 100.0 / numEstudiantes) << "%)" << endl;

    cout << "\n--- DISTRIBUCIÓN POR RENDIMIENTO ---" << endl;
    cout << "Excelente (9.0-10.0): " << excelentes << " estudiantes" << endl;
    cout << "Bueno (7.0-8.9): " << buenos << " estudiantes" << endl;
    cout << "Regular (6.0-6.9): " << regulares << " estudiantes" << endl;
    cout << "Insuficiente (<6.0): " << insuficientes << " estudiantes" << endl;

    if (numEstudiantes > 0) {
        double promedioGeneral = sumaPromedios / numEstudiantes;
        cout << "\nPromedio general del grupo: " << promedioGeneral << endl;


        if (promedioGeneral >= 16.0) {
            cout << "Evaluación del grupo: EXCELENTE DESEMPEÑO" << endl;
        } else if (promedioGeneral >= 14.0) {
            cout << "Evaluación del grupo: BUEN DESEMPEÑO" << endl;
        } else if (promedioGeneral >= 12.0) {
            cout << "Evaluación del grupo: DESEMPEÑO REGULAR" << endl;
        } else {
            cout << "Evaluación del grupo: REQUIERE REFUERZO" << endl;
        }
    }

    return 0;
}
