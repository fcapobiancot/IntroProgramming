/*
1. Inicio
2. Declarar las variables de edad y años como enteros
3. Leer la edad y años
4. Si edad < 18, leer la edad y anos de nuevo, si no continuar
5. Si edad > 18, si es verdadera, continuar
6. Declarar las variables como int de Position2 = 3 y Position3 = 5
7. Si años < posición 2
8. Imprimir "Coordinador de proyecto"
9. Si años < posición 3
10. Imprimir "Director de proyecto"
11. Si años >= posición 3
12. Imprimir "Director de proyecto Senior"
13. Fin

# Entradas
 2 Numeros
    Edad > 18
    Anos de experiencia >=0

# Salidas
 Pocision de Trabajo
    Coordinador de proyecto ( si, anos de experiencia < 3 )
    Director de proyecto ( si, anos de experiencia < 5 )
    Director de proyecto Senior ( si, anos de000 experiencia >= 5 )
 */

# include <iostream>
using namespace std;

int main () {
    int age, years ;
    cin >> age >> years ;

    if (age < 18) {
        do {
            cout << "You must be atleast 18 years old" << endl;
            cin >> age >> years ;
        } while (age > 18) ;
    }

    int Position2 = 3 ; // years
    int Position3 = 5 ; // years

     if (years < Position2) {
         cout << "Coordinador de proyecto" ;
     } else if (years < Position3) {
         cout << "Director de proyecto" ;
     } else if (years >= Position3) {
         cout << "Director de proyecto Senior" ;
     }

    return 0;
}
