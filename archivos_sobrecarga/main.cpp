#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include "Dios.h"
using namespace std;

void imprimir(ofstream& archivo, const string& texto);

int main() {
    // PREGUNTA 1: EL CAOS
    string txt_p1 = "Pregunta 1: el caos\nSegun la mitologia griega, en el comienzo de los tiempos solo habia un vacio infinito (llamado Caos).El Caos es aquello que existe antes que los dioses.Es el estado pristino del cosmos.\n\n";
    ofstream archivoCaos("../outputs/1_caos.txt");

    if (archivoCaos.is_open()) {
        imprimir(archivoCaos, txt_p1);
    }
    archivoCaos.close();

    // PREGUNTA 2: GEA
    Dios gea("Gea", "Gaia", "", "Terra");
    string txt_p2 = "Pregunta 2: " + gea.getNombre() + "\nDe pronto, de ese Caos, emano la diosa griega " + gea.getNombre() + ", tambien llamada " + gea.getNombreAlterno() +", y conocida en la mitologia romana como" + gea.getNombreRomano() + ".\n\n";
    ofstream archivoGea("../outputs/2_gea.txt");

    if (archivoGea.is_open()) {
        imprimir(archivoGea, txt_p2);
    }
    archivoGea.close();

    // PREGUNTA 3: EROS
    Dios eros("Eros", "", "", "Cupido");
    gea.addPadres("vacio");
    eros.addPadres("vacio");
    eros.addPadres("Afrodita y Ares");
    eros.addPadres("Afrodita y Hermes");
    eros.addPadres("Afrodita y Hefesto");
    eros.addPadres("Poros y Penia");
    eros.addPadres("Iris y Cefiro");

    vector<string> padres = eros.getPadres();

    string txt_p3 = "Pregunta 3: " + eros.getNombre() + "\nDe ese Caos, surgio tambien " + eros.getNombre() + ", el dios del deseo, quien representa la voluntad de hacer cosas. En la mitologia romana, el equivalente a " + eros.getNombre() + " es " + eros.getNombreRomano() + ".\n\n" + gea.getNombre() + " y " + eros.getNombre() + " serian los dioses primordiales. Sin embargo, existe una version alternativa en la que " + eros.getNombre() + " es, en realidad, hijo de ";
    for (int i = 0; i < padres.size(); i++) {
        if (i == 1) {
            txt_p3 += padres[i] + ". Tambien existen otras versiones alternativas en las que " + eros.getNombre() + " es hijo de ";
        } else if (i == 2) {
            txt_p3 += padres[i] + ", hijo de ";
        } else if (i == 3) {
            txt_p3 += padres[i] + ", hijo de ";
        } else if (i == 4) {
            txt_p3 += padres[i] + " o hijo de ";
        } else if (i == 5) {
            txt_p3 += padres[i] + ".\n\nY Gea el dato de sus padres es " + eros.getPadres()[0] + " aun.\n\n";
        }
    }
    ofstream archivoEros("../outputs/3_eros.txt");

    if (archivoEros.is_open()) {
        imprimir(archivoEros, txt_p3);
    }
    archivoEros.close();

    // PREGUNTA 4: URANO
    Dios urano("Urano", "", "", "");
    urano.addPadres("Gea");

    string txt_p4 = "Pregunta 4: " + urano.getNombre() + "\nDe " + urano.getPadres()[0] + ", nacio " + urano.getNombre() + ". " + urano.getNombre() + " rodeo a " + urano.getPadres()[0] + " y este se transformo en el Cielo.\n\n";
    ofstream archivoUrano("../outputs/4_urano.txt");

    if (archivoUrano.is_open()) {
        imprimir(archivoUrano, txt_p4);
    }
    archivoUrano.close();

    // PREGUNTA 5: OTROS DIOSES PRIMORDIALES
    Dios nix("Nix", "Nyx","Nicte","");
    Dios erebo("Erebo", "","","");
    Dios hemera("Hemera", "","","");
    Dios eter("Eter", "","","");

    string txt_p5 = "Pregunta 5: Otros dioses primordiales\nDel Caos tambien nacieron otros dioses primordiales como" + nix.getNombre()+ " (tambien llamada " + nix.getNombreAlterno() + " o " + nix.getNombreOtroAlterno() + "), la diosa primordial de la noche, " + erebo.getNombre() + ", dios primordial de la oscuridad y las sombras, " + hemera.getNombre() + ", la diosa primordial del dia, " + eter.getNombre() + " (el aire), dios del cielo superior, es decir, la region que esta por encima del cielo.\n";

    Dios tifon("Tifon", "", "", "");
    tifon.addPadres("Gea");
    Dios pontos("Pontos", "", "", "");
    pontos.addPadres("Gea");
    Dios ourea("Ourea", "", "", "");
    ourea.addPadres("Gea");

    txt_p5 += "Asi como " + urano.getNombre() + " (el cielo) nacio de " + urano.getPadres()[0] + ", existen otras deidades que tambien nacieron de " + gea.getNombre() + ", tales como " + tifon.getNombre() + " (las tormentas), " + pontos.getNombre() + " (el mar) y " + ourea.getNombre() + " (las montanas).\n\n";
    ofstream archivoOtrosPrimordiales("../outputs/5_otros_dioses_primodiales.txt");

    if (archivoOtrosPrimordiales.is_open()) {
        imprimir(archivoOtrosPrimordiales, txt_p5);
    }
    archivoOtrosPrimordiales.close();

    // PREGUNTA 6: SOBRECARGA DE OPERADORES
    string txt_p6 = "Pregunta 6: Segunda Generacion\nDe los dioses primordiales " + nix.getNombre() + ", " + erebo.getNombre() + ", " + gea.getNombre() + ", " + urano.getNombre() + ", " + eter.getNombre() + " y " + hemera.getNombre() + ", nacieron otros dioses. ";

    vector<string> nombresHijos = {"Oceano", "Hiperion", "Ceo", "Crio", "Japeto", "Cronos", "Tetis", "Teia", "Febe", "Temis", "Mnemosine", "Rea"};

    string padresHijo1 = gea + urano;
    txt_p6 += padresHijo1 + " tuvieron muchos hijos: ";

    for (int i = 0; i < nombresHijos.size(); i++) {
        Dios hijo(nombresHijos[i]);
        hijo.addPadres(padresHijo1);
        txt_p6 += nombresHijos[i];

        if (i < nombresHijos.size() - 2) {
            txt_p6 += ", ";
        } else if (i == nombresHijos.size() - 2) {
            txt_p6 += " y ";
        }
    }
    txt_p6 += ".\n\n";
    ofstream archivosSobrecargaOperadores("../outputs/6_segunda_generacion.txt");

    if (archivosSobrecargaOperadores.is_open()) {
        imprimir(archivosSobrecargaOperadores, txt_p6);
    }
    archivosSobrecargaOperadores.close();

    // PREGUNTA 7: MODIFICAR OPERADORES PREVIAMENTE YA SOBRECARGADO

    // PREGUNTA 8: CREAR HIJOS DE CRONOS Y REA
    Dios cronos("Cronos");
    Dios rea("Rea");

    vector<string> hijosCronosRea = {"Hestia", "Hades", "Poseidon", "Hera", "Zeus", "Demeter"};
    string padresHijo2 = cronos + rea;
    string txt_p8 = "Pregunta 8: Tercera Generacion\n" + padresHijo2 + " tuvieron muchos hijos. Estos hijos conforman la tercera generacion de dioses. Estos dioses son: ";
    
    for (int i = 0; i < hijosCronosRea.size(); i++) {
        Dios hijo(hijosCronosRea[i]);
        string padresHijo2 = cronos + rea;
        hijo.addPadres(padresHijo2);
        txt_p8 += hijosCronosRea[i];
        if (i < hijosCronosRea.size() - 2) {
            txt_p8 += ", ";
        } else if (i == hijosCronosRea.size() - 2) {
            txt_p8 += " y ";
        }
    }

    txt_p8 += ". Que es un total de " + to_string(cronos.getNumeroHijos() - 1) +" dioses. Por lo que " + padresHijo2 +" tuvieron " + to_string(rea.getNumeroHijos() - 1) + " hijos.\n\n";
    ofstream archivoTerceraGeneracion("../outputs/8_tercera_generacion.txt");

    if (archivoTerceraGeneracion.is_open()) {
        imprimir(archivoTerceraGeneracion, txt_p8);
    }
    archivoTerceraGeneracion.close();

    // PREGUNTA 9: COMER DIOSES
    Dios hestia("Hestia");
    Dios hades("Hades");
    Dios poseidon("Poseidon");
    Dios hera("Hera");
    Dios zeus("Zeus");
    Dios demeter("Demeter");

    string txt_p9 = "Pregunta 9: Cronos come a sus hijos\n" + gea.getNombre() + " le advirtio a " + cronos.getNombre() + " que uno de sus hijos le quitaria su trono. Entonces, " + cronos.getNombre() + " se comio a todos sus hijos, sin embargo, no pudo comerse a " + zeus.getNombre() +" (se comio una piedra pensando que esa piedra era " + zeus.getNombre() + "). Por lo que Cronos se comio a ";

    cronos.devorar(hestia);
    cronos.devorar(hades);
    cronos.devorar(poseidon);
    cronos.devorar(hera);
    cronos.devorar(demeter);

    for (int i = 0; i < cronos.getDiosDevorados().size(); i++) {
        txt_p9 += cronos.getDiosDevorados()[i];
        if (i < cronos.getDiosDevorados().size() - 2) {
            txt_p9 += ", ";
        } else if (i == cronos.getDiosDevorados().size() - 2) {
            txt_p9 += " y ";
        }
    }
    txt_p9 += ".\n\n";
    ofstream archivoHijosComidos("../outputs/9_comer_dioses.txt");

    if (archivoHijosComidos.is_open()) {
        imprimir(archivoHijosComidos, txt_p9);
    }
    archivoHijosComidos.close();

    // PREGUNTA 10: SOBRECARGA DE FUNCIONES
    string txt_p10 = "Pregunta 10: Cronos es enganado\nComo " + cronos.getNombre() + " se estaba comiendo a todos los hijos que tenia con " + rea.getNombre() +", cuando ella dio a luz a su sexto hijo, " + zeus.getNombre() + ", decidio esconderlo de " + cronos.getNombre() + " y le dio a " + cronos.getNombre() + " una ";
    cronos.devorar("piedra");
    txt_p10 += cronos.getDiosDevorados()[cronos.getDiosDevorados().size()-1] + " envuelta en mantas para que se lo coma.\n\n";
    ofstream archivoCronosEnganado("../outputs/10_cronos_es_enganado.txt");

    if (archivoCronosEnganado.is_open()) {
        imprimir(archivoCronosEnganado, txt_p10);
    }
    archivoCronosEnganado.close();

    // PREGUNTA 11: MODIFICAR UN OPERADOR
    zeus.setMorada("Creta");
    string txt_p11 = "Pregunta 11: " + zeus.getNombre() + " sobrevive y crece\n" + zeus.getNombre() + " sobrevivio y crecio: Segun Hesiodo (Teogonia) y otras fuentes antiguas, " + rea.getNombre() + " escondio a " + zeus.getNombre() + " en la isla de " + zeus.getMorada() + ", en una cueva del monte ";
    zeus.setMorada("Ida");
    txt_p11 += zeus.getMorada() + " o del monte ";
    zeus.setMorada("Ida");
    txt_p11 += zeus.getMorada() + ", para evitar que su padre " + cronos.getNombre() + " lo devorara, tal como habia con sus otros hijos.\n Alli, " + zeus.getNombre() + " fue criado en secreto por ninfas, y protegido por los Curete, guerreros que golpeaban sus escudos para que " + cronos.getNombre()+ " no escuchara el llanto del nino.\n";
    zeus.setMorada("Creta");
    txt_p11 += "Cuando " + zeus.getNombre() + " alcanza la adultez, sale de " + zeus.getMorada() + " decidio a obliga a " + cronos.getNombre() + " a devolver a sus hermanos, quienes habian sido tragados al nacer. En esta etapa de adultez, " + zeus.getNombre() + " establece su morada en el ";
    zeus.setMorada("Monte Olimpo");
    txt_p11 += zeus.getMorada() + ", donde reinara como soberano de los dioses.\n\n";
    ofstream archivoZeusCrece("../outputs/11_zeus_crece.txt");

    if (archivoZeusCrece.is_open()) {
        imprimir(archivoZeusCrece, txt_p11);
    }
    archivoZeusCrece.close();

    // PREGUNTA 12: NACEN OTROS DIOSES
    string txt_p12 = "Pregunta 12: Nacen otros dioses\n";

    ifstream archivoListaDioses("../inputs/lista_otros_dioses.txt");
    vector<Dios> diosesLeidos;

    if (archivoListaDioses.is_open()) {
        string linea;
        int contador = 0;
        while (getline(archivoListaDioses, linea)) {
            contador++;

            vector<string> datos;
            string dato = "";

            for (char c : linea) {
                if (c == ',') {
                    datos.push_back(dato);
                    dato = "";
                } else {
                    dato += c;
                }
            }
            datos.push_back(dato);

            // Asegurarse de que hay al menos 5 campos
            while (datos.size() < 5) {
                datos.push_back("");
            }

            // Crear dios
            Dios nuevoDios(datos[0], datos[1], datos[2], datos[3]);

            // Agregar padres (columna 4)
            if (!datos[4].empty()) {
                nuevoDios.addPadres(datos[4]);
            }

            // Si hay columna 5, es la descripción
            if (datos.size() > 5 && !datos[5].empty()) {
                nuevoDios.addPadres(datos[5]);
            }

            diosesLeidos.push_back(nuevoDios);
        }
        archivoListaDioses.close();
    } else {
        txt_p12 += "Error: No se pudo abrir el archivo de dioses.\n";
    }

    // Agrupar por padres
    vector<string> gruposPadres;
    for (const Dios& dios : diosesLeidos) {
        if (!dios.getPadres().empty()) {
            string padres = dios.getPadres()[0];
            bool existe = false;
            for (const string& grupo : gruposPadres) {
                if (grupo == padres) {
                    existe = true;
                    break;
                }
            }
            if (!existe) {
                gruposPadres.push_back(padres);
            }
        }
    }

    for (const string& padres : gruposPadres) {
        txt_p12 += "- Hijos de " + padres + ":\n";

        for (const Dios& dios : diosesLeidos) {
            if (!dios.getPadres().empty() && dios.getPadres()[0] == padres) {
                txt_p12 += "   - " + dios.getNombre();

                if (!dios.getNombreAlterno().empty()) {
                    txt_p12 += " tambien llamad";
                    if (dios.getNombre() == "Asia") {
                        txt_p12 += "a ";
                    } else {
                        txt_p12 += "o ";
                    }
                    txt_p12 += dios.getNombreAlterno();
                }

                if (dios.getPadres().size() > 1 && !dios.getPadres()[1].empty()) {
                    txt_p12 += ", " + dios.getPadres()[1];
                }

                txt_p12 += "\n";
            }
        }
    }
    txt_p12 += "\n";
    ofstream archivoNuevosDioses("../outputs/12_otros_dioses.txt");

    if (archivoNuevosDioses.is_open()) {
        imprimir(archivoNuevosDioses, txt_p12);
    }

    archivoNuevosDioses.close();

    // PREGUNTA 13: SOBRECARGAR NUEVAMENTE OPERADORES

    // PREGUNTA 14: LOS HIJOS DE ZEUS

    // PREGUNTA 15: CONTADOR DE HIJOS

    // PREGUNTA 16: VOMITAR HIJOS

    // PREGUNTA 17

    return 0;
}

void imprimir(ofstream& archivo, const string& texto) {
    archivo << texto;
    cout << texto;
}