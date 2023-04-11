/*
Entradas :
 Ninguina ya que el precio del helado, y la cantidad de dinero estan definidos

Salidas :
 Cantidad de dinero : 20
 Precio del helado : 5
 Se compro un helado
 Te quedan 15$ de dinero
 Se compro un helado
 Te quedan 10$ de dinero
 Se compro un helado
 Te quedan 5$ de dinero
 Se compro un helado
 Te quedan 0$ de dinero
 Ya no tienes dinero para comprar helados

**************************
Pseudo codigo:
 Definir las variables :
 helado = 5
 dinero = 20
 Mostrar dinero inicial
 Mostrar precio del helado
 while (dinero >= helado) {
    dinero -= money
    Mostrar Se compro un helado
    Mostar Te quedan (dinero) para comprar helados
 }
  Mostrar No tienes dinero para comprar mas helados

*/

#include <iostream>
using namespace std;

int main() {
    int helado = 5 ;
    int dinero = 20 ;
    cout << "Dinero: "s << dinero << endl ;
    cout << "Precio del helado: "s << helado << endl ;

    while (dinero >= helado) {
        dinero -= helado ;
        cout << "Se compro un helado\n" ;
        cout << "Te quedan " << dinero << " para comprar helados\n" ;
    }

    cout << "Ya no tienes dinero para comprar mas helados" ;

    return 0;
}

