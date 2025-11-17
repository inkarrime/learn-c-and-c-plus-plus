#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Dios {
	string nombre;
	int hijos;
	vector<string> diosDevorados;
public:
	void devorarHijo(string nombreHijo) {;
		diosDevorados.push_back(nombreHijo);
	}
	int getHijos();
	vector<string> padres;
	Dios(string nombre);
	string getNombre();
	void setNombre(string n);
	void registrarNuevoHijo();
};

int Dios::getHijos() {
	return this->hijos;
}



void Dios::registrarNuevoHijo() {
	this->hijos += 1;
}


Dios::Dios(string nombre) {
	this->nombre = nombre;
	this->hijos = 0;
}

string Dios::getNombre() {
	return this->nombre;
}

void Dios::setNombre(string n) {
	this->nombre = n;
}

//string operator+(diospadres1, diospadres2){
//	diospadre1.getNombre + " + " + diospadre2.getNombre ;
//}

// nombreParaVectorPadres = diosPadrea1 + diosPadre2
//

/*
string operator+(Dios& padre1, Dios& padre2) {
	return padre1.getNombre() + " y " + padre2.getNombre();
}
*/

string operator+(Dios& padre1, Dios& padre2) {
	padre1.registrarNuevoHijo();
	padre2.registrarNuevoHijo();
	return padre1.getNombre() + " y " + padre2.getNombre();
}

int main () {
	/*
	string texto = "Pregunta 2: \n De pronto, de ese Caos, emanó la diosa griega Gea, también llamada Gaia, y conocida en la mitología romana como Terra. ";
	ofstream archivo("mitologia2.txt");

	if (archivo.is_open()) {
		archivo << texto;
	}

	cout<< texto << endl;

	archivo.close();
	*/

	/*
	ifstream entrada("mitologia.txt");
	if (entrada.is_open()) {
		string linea;
		while (getline(entrada, linea)) {
			cout << linea << endl;
		}
		entrada.close();
	} else {
		cout << "No se pudo abrir el archivo `mitologia.txt` para lectura." << endl;
	}
	*/

	/*
	ofstream archivo("mitologia3.txt");
	Dios Eros("Eros");

	archivo<<"Pregunta 3: \n";
	cout<<"Pregunta 3: \n";
	vector<string>posiblesPadresEros={"vacio", "Afrodita y Ares", "Afrodita y Hermes", "Afrodita y Hefesto", "Poros y Penia", "Iris y Céfiro"  };

	archivo<<"Posibles padres de Eros: \n";
	for (int i = 0; i < posiblesPadresEros.size(); i++) {
		archivo<<posiblesPadresEros[i]<<(i == posiblesPadresEros.size()-1 ?" ":", ");
		cout<<posiblesPadresEros[i]<<(i == posiblesPadresEros.size()-1 ?" ":", ");
		Eros.padres.push_back(posiblesPadresEros[i]);
	}

	archivo<<"\nPosibles padres de Gaia: \n";
	cout<<"\nPosibles padres de Gaia: \n";
	Dios Gaia("Gaia");

	vector<string > posiblesPadresGaia = {"vacio"};
	for (auto padres: posiblesPadresGaia) {
		archivo<<padres;
		cout<<padres;
		Gaia.padres.push_back(padres);
	}

	archivo.close();
	*/
	/*
	Dios Gaia("Gaia");
	Dios Hemera("Hemera");

	string padresDeTetis = Gaia + Hemera;
	cout << "Los padres de Tetis son: " << padresDeTetis << endl;*/
	/*
	ofstream archivo("mitologia 4.txt");

	vector<string> nombreHijos = {"Hestia", "Deméter", "Hades", "Poseidón", "Zeus", "Hera"};
	Dios Rhea("Rea");
	Dios Cronos("Cronos");
	cout<<"Pregunta 8A: \n";
	archivo<<"Pregunta 8A: \n";
	for (auto nombreHijo : nombreHijos) {
		string padresDeHijo = Rhea + Cronos;
		archivo<< "Los padres de " << nombreHijo << " son: " << padresDeHijo << endl;
		cout << "Los padres de " << nombreHijo << " son: " << padresDeHijo << endl;
	}
	archivo<<"Número de hijos de " << Rhea.getNombre() << ": " << Rhea.getHijos() << endl;
	archivo<<"Número de hijos de " << Cronos.getNombre() << ": " << Cronos.getHijos() << endl;
	cout << "Número de hijos de " << Rhea.getNombre() << ": " << Rhea.getHijos() << endl;
	cout << "Número de hijos de " << Cronos.getNombre() << ": " << Cronos.getHijos() << endl;

	archivo.close();
	*/

	string narracion = "";
	ofstream archivo("mitologia 5.txt");
	narracion += "Pregunta 8B: \n";

	Dios Cronos("Cronos");

	vector<string> hijosDeCronosPorDevorar = {"Hestia", "Deméter", "Hades", "Poseidón", "Hera"};

	for (auto nombreHijo : hijosDeCronosPorDevorar) {
		narracion += "Cronos devoró a su hijo " + nombreHijo + ".\n";
		Cronos.devorarHijo(nombreHijo);
	}

	cout << narracion << endl;
	archivo << narracion << endl;

	archivo.close();

	return 0;
}