#include <iostream>
using namespace std;

int main() {
    int half1, half2 ;
    cin >> half1 >> half2 ;

    if (half1 > half2 ) {
        int dif = half1 - half2 ;
        cout << "Cortar " << dif << " de la primer parte." ;
    } else if (half2 > half1 ) {
        int dif = half2 - half1 ;
        cout << "Cortar " << dif << " de la segunda parte " ;
    } else {
        cout << "La naranja se divide en dos partes iguales." ;
    }

    return 0;
}