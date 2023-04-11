/*
Entrada :
Numero entero (212)
Salida :
Es palindromo

Entrada :
Numero entero (256)
Salida :
No es palindromo

**************************
Pseudo codigo:
Definir las variables
int number
int reversedNumber = 0
Input number
Create a variable which will contain the data of the number variable
int temp = number
while temp != 0 {
    reversedNumber = reversedNumber * 10 + temp % 10
    temp /= 10
}
 if ( reversedNumber == number ) {
 print "Es Palindromo"
 } else { print "No es palindromo }
*/

#include <iostream>
using namespace std;

int main () {
    int number ;
    int reversedNumber = 0 ;
    cin >> number ;

    int temp = number ;
    while(temp != 0) {
        reversedNumber = reversedNumber * 10 + temp % 10 ;
        temp /= 10 ;
    }

    if (reversedNumber == number) {
        cout << "Es palindromo" ;
    } else {
        cout << "No es palindromo" ;
    }

    return 0 ;
}