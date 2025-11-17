#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Cbaldosa{
private:
    int tipo;   // 1 = estable, 0 = trampa
    int estado; // 1 = activa,  0 = inactiva
public:
    Cbaldosa(){
        estado = 1;
    }
    void setEstado(int _estado){
        estado = _estado;
    }
    void setTipo(int _tipo){
        tipo = _tipo;
    }
    int getEstado(){
        return estado;
    }
    int getTipo(){
        return tipo;
    }
};

class CJugador{
private:
    string nomnbre;
    int estado; // 1 = activo, 0 = eliminado
public:
    CJugador(){
        estado = 1;
    }
    void setNomnbre(string _nomnbre) {
        nomnbre = _nomnbre;
    }
    void setEstado(int _estado) {
        estado = _estado;
    }
    string getNomnbre() {
        return nomnbre;
    }
    int getEstado() {
        return estado;
    }
};

int main() {
    random_device generadorRandom;
    int tam, tipo_aleat, cant_jugadores, i, opcion, j;
    string unNombre;

    cout << "-----JUEGO DEL PUENTE DE CRISTAL-----\n\n";
    cout << "Ingrese el largo del puente:"; cin >> tam;

    vector<Cbaldosa> izquierda(tam);
    vector<Cbaldosa> derecha(tam);

    for (i = 0; i < izquierda.size(); i++){
        tipo_aleat = generadorRandom() % 2;
        izquierda[i].setTipo(tipo_aleat);
        derecha[i].setTipo(1 - tipo_aleat);
    }
    cout << "Ingrese el numero de jugadores:";
    cin >> cant_jugadores;
    vector<CJugador> jugadores(cant_jugadores);
    
    for (j = 0; j < cant_jugadores; j++){
        cout << "Ingrese el nombre del jugador(a) " << j + 1 << ": ";
        cin >> unNombre;
        jugadores[j].setNomnbre(unNombre);
    }
    for(j = 0; j < cant_jugadores; j++) {
        cout << "\n#####TURNO DE " << jugadores[j].getNomnbre() << "#####\n";
        for (i = 0; i < tam; i++) {
            cout << "-----SALTO " << i + 1 << "-----"<<endl;
            cout << "Acciones posibles para " <<jugadores[j].getNomnbre() << ":\n";
            cout << "1. " <<jugadores[j].getNomnbre() << " salta hacia la baldosa de la izquierda.\n";
            cout << "2. " <<jugadores[j].getNomnbre() << " salta hacia la baldosa de la derecha.\n";
            cout << "Escriba aqui la opcion: ";
            cin >> opcion;
            if (opcion == 1) {
                if (izquierda[i].getTipo() == 1) {
                    cout << "El jugador(a) " << jugadores[j].getNomnbre() << " sigue en pie." << endl;
                    cout << endl;
                } else {
                    izquierda[i].setEstado(0);
                    cout <<"El jugador(a) " << jugadores[j].getNomnbre() << " se cayo :(\n";
                    cout << endl;
                    jugadores[j].setEstado(0);
                    break;
                }
            } else {
                if (derecha[i].getTipo() == 1) {
                    cout << "El jugador(a) " <<jugadores[j].getNomnbre() << " sigue en pie." << endl;
                    cout << endl;
                } else {
                    derecha[i].setEstado(0);
                    cout << "El jugador(a) " << jugadores[j].getNomnbre() << " se cayo :(\n";
                    cout << endl;
                    jugadores[j].setEstado(0);
                    break;
                }
            }
        }
        if (i==tam) {
            cout << "Felicitaciones a el(la) jugador(a) " << jugadores[j].getNomnbre() << " ha llegado al final del puente.\n";
        }
    }

    int ganadores = 0;
    for (i = 0; i < cant_jugadores; i++) {
        if (izquierda[i].getEstado() == 1) {
            ganadores++;
        }
    }
    cout << "==========RESULTADOS==========\n";
    cout << "La cantidad de ganadores: " << ganadores << "\n";
    cout << "Cantidad de platos a servir en la cena: " << ganadores << "\n";
    if (ganadores !=0) {
        cout << "Cantidad de sillas para el juego final: " << ganadores - 1 << "\n";
    } else {
        cout << "Cantidad de sillas para el juego final: " << ganadores << "\n";
    }

    return 0;
}