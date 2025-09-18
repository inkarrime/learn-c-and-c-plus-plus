# E1・Ángulo entre las manecillas de un reloj
Implemente un programa en C++ que, dado un tiempo expresado en formato de 24 horas
(hh:mm), calcule y muestre el ángulo más pequeño (en grados) formado entre la manecilla de las 
horas y la manecilla de los minutos en un reloj analógico de 12 horas.

Para el ingrese de la hora y minutos puede utilizar el siguiente código:

```
int horas, minutos;
char separador;
cout << "Formato hh:mm";
cin >> horas >> separador >> minutos;
```
Ejemplos:
```
Input: 5:30
Output: 15°
```
```
Input: 9:50
Output: 5°
```
```
Input: 21:00
Output: 90°
```
```
Input: 12:00
Output: 0°
```
