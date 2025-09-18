#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void showMenu(){
    cout<<"**********MENU**********"<<endl;
    cout<<"1. Consultar saldo"<<endl;
    cout<<"2. Deposito"<<endl;
    cout<<"3. Retiro"<<endl;
    cout<<"4. Salir"<<endl;
}

int main(){
    int option, atmno;
    double balance=4000;
    string banco;
    int transaccionesDepositoRealizadas = 0;
    int transaccionesRetiroRealizadas = 0;
    double totalRetirado = 0;

    vector<string> bancos = {"Banco 1","Banco 2"};

    cout<<"Seleccione su banco: "<<endl;
    for (int i = 0; i < bancos.size(); i++){
        cout<<i+1<<". "<<bancos[i]<<endl;
    }
    cout<<"Ingrese el numero del banco: ";
    cin>>atmno;

    if (atmno <= 0 || atmno > bancos.size()){
        cout<<"Error: Numero de banco invalido."<<endl;
        return 1;
    }

    banco = bancos[atmno-1];

    double saldoDiario[7] = {4000};


    for (int dia = 0; dia < 7; dia++) {
        cout<<"\n** Dia "<<dia+1<<" **"<<endl;
        do{
            showMenu();
            cout<<"Por favor escoja una opcion: ";
            cin>>option;

            system("cls");

            switch (option){
                case 1:
                    cout<<"Su saldo actual en "<<banco<<" es: "<<saldoDiario[dia]<<endl;
                    break;
                case 2:
                    if (transaccionesDepositoRealizadas < 3){
                        double cantidadADepositar;
                        cout<<"Ingrese la cantidad que desea depositar en "<<banco<<": ";
                        cin>>cantidadADepositar;
                        if (cantidadADepositar <= 0){
                            cout<<"Error: La cantidad a depositar debe ser mayor que 0."<<endl;
                            break;
                        }
                        if (cantidadADepositar > 3000){
                            cout<<"Error: La cantidad a depositar excede el límite maximo diario de S/.3000."<<endl;
                            break;
                        }
                        if (cantidadADepositar + totalRetirado >= 3000){
                            cout<<"Error: El deposito excede el limite maximo diario de S/.3000."<<endl;
                            cout<<"Su total retirado y depositado hasta ahora hoy es de S/."<<totalRetirado<<endl;
                            break;
                        }
                        saldoDiario[dia] += cantidadADepositar;
                        transaccionesDepositoRealizadas++;
                        totalRetirado += cantidadADepositar; // Se actualiza el total retirado/depositado
                        cout<<"Deposito realizado con exito en "<<banco<<". Su nuevo saldo es: "<<saldoDiario[dia]<<endl;
                        cout<<"Su total retirado y depositado hasta ahora hoy es de S/."<<totalRetirado<<endl;
                    } else {
                        cout<<"Ha alcanzado el limite máximo de depositos por día."<<endl;
                    }
                    break;
                case 3:
                    if (transaccionesRetiroRealizadas < 3){
                        double cantidadARetirar;
                        cout<<"Ingrese la cantidad que desea retirar de "<<banco<<": ";
                        cin>>cantidadARetirar;
                        if (cantidadARetirar<= 0){
                            cout<<"Error: La cantidad a retirar debe ser mayor que 0."<<endl;
                            break;
                        }
                        if (cantidadARetirar > saldoDiario[dia]){
                            cout<<"Error: La cantidad a retirar excede su saldo disponible en "<<banco<<"."<<endl;
                            break;
                        }
                        if (cantidadARetirar + totalRetirado >= 3000) {
                            cout << "Error: El retiro excede el límite maximo diario de S/.3000." << endl;
                            cout << "Su total retirado hasta ahora hoy es de S/." << endl;
                        }
                        if (cantidadARetirar > 0){
                            transaccionesRetiroRealizadas++;
                            totalRetirado += cantidadARetirar;
                        }
                        saldoDiario[dia] -= cantidadARetirar;
                        cout<<"Retiro realizado con exito en "<<banco<<". Su nuevo saldo es: "<<saldoDiario[dia]<<endl;
                        cout<<"Su total retirado hasta ahora hoy es de S/."<<totalRetirado<<endl;
                    } else {
                        cout<<"Ha alcanzado el limite maximo de retiros por dia."<<endl;
                    }
                    break;
                case 4:
                    cout<<"Saliendo del sistema. Gracias por usar nuestros servicios."<<endl;
                    break;
                default:
                    cout<<"Opcion invalida. Por favor, seleccione una opcion del menu."<<endl;
            }
        } while (option != 4);
    }

    cout<<"\n** Saldo final de cada dia: **"<<endl;
    for (int dia = 0; dia < 7; dia++) {
        cout<<"Dia "<<dia+1<<": S/."<<saldoDiario[dia]<<endl;
    }

    return 0;
}
