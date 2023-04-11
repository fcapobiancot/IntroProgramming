/*
Entrada :
10 (Numero decimal)
Salida :
1010 (Numero binario)

**************************
Pseudo codigo:
Definir decimal como un entero
Definir decimal desde el usuario
Definir binario como un string vacio
hacer {
    Mostrar "Ingrese un número mayor que 0: "
    Ingresar decimal desde el usuario
} mientras que (decimal <= 0)

mientras (decimal no sea igual a 0)
    binario = Transformar a un string la operacion (decimal % 2)
    actualizar el valor de decimal dividido por 2
Invertir el orden de los caracteres en binario
Mostrar binario
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    int decimal ;
    cin >> decimal ;
    string binario = "" ;

    do {
        cout << "Input a number greater than 0: " ;
        cin >> decimal ;
    } while (decimal <= 0) ;
    {
        while (decimal != 0) {
            binario += to_string(decimal % 2);
            decimal /= 2;
        }
    }

    reverse( binario.begin(), binario.end() ) ;
    cout << binario ;

    return 0 ;
}