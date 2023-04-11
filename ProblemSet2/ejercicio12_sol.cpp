#include <iostream>
using namespace std;

int main() {
    int n;
    double factorial = 1;

    cin >> n;

    if (n < 0)
        cout << "Error! Trata con un numero no negativo" ;
    if (n > 100) {
        cout << "El resultado se demorara en ser calculado, intentalo de nuevo." ;
    }
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << factorial;
    }

    return 0;
}
