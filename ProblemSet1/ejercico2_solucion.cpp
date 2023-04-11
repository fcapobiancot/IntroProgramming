#include <iostream>

using namespace std;

int main() {
    double division;
    double num1, num2;
    
    cout << "Ingrese dos numeros: ";
    cin >> num1 >>  num2;

    division = (num1 / num2);

    cout << "EL cociente es: " << division << endl;

    return 0;
}