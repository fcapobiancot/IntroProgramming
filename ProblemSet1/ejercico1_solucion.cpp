#include <iostream>

using namespace std;

int main() {
    int suma;
    double num1, num2;
    
    cout << "Ingrese dos numeros: ";
    cin >> num1 >>  num2;

    suma = (num1 + num2);

    cout << "La parte entera de la suma es: " << suma << endl;

    return 0;
}
