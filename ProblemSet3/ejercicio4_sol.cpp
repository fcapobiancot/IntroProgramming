/*
Entrada :
1
Salida :
Lunes
Entrada :
2
Salida :
Martes

(↓).... hasta
Entrada :
7
Salida :
Domingo

**************************
Pseudo codigo:
Definir dia como un entero
Ingresar el valor de dia
"Usar switch para selecionar un caso dependiendo del argumento(dia) "
Seleccionar dia
Caso 1:
Escribir "Lunes"
Salir
Caso 2:
Escribir "Martes"
Salir
Caso 3:
Escribir "Miercoles"
Salir
Caso 4:
Escribir "Jueves"
Salir
Caso 5:
Escribir "Viernes"
Salir
Caso 6:
Escribir "Sabado"
Salir
Caso 7:
Escribir "Domingo"
Salir

*/

#include <iostream>
using namespace std;

int main() {
    int dia ;
    cin >> dia ;
    switch (dia) {
        case 1:
            cout << "Lunes";
            break;
        case 2:
            cout << "Martes";
            break;
        case 3:
            cout << "Miercoles";
            break;
        case 4:
            cout << "Jueves";
            break;
        case 5:
            cout << "Viernes";
            break;
        case 6:
            cout << "Sabado";
            break;
        case 7:
            cout << "Domingo";
            break;
    }
    return 0;
}