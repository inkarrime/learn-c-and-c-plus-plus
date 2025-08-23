/*
Operadores aritmeticos:
+ Suma
- Resta
* Multiplicacion
/ Division
% Modulo

Operadores relacionales:
== Igual a
!= Diferente de
> Mayor que
< Menor que
>= Mayor o igual que
<= Menor o igual que

Operadores logicos:
&& AND
|| OR
! NOT
*/

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    cout << a + b << endl;              // Suma: 15
    cout << (a > b) << endl;            // a es mayor que b?: 1 (true)
    cout << (a > 5 && b < 10) << endl;  // Ambas condiciones verdaderas: 1 (true)
}