#include <iostream>
using namespace std;
int main() {
    int dec1, dec2;
    
    cout << "Digita dos numeros no negativos: "; cin >> dec1 >> dec2;
    if (dec1 < 0 || dec2 < 0) {
        cout << "Error: los números deben ser no negativos." << endl;
        return 0;
    }
    int add = dec1 + dec2;
    string convert_to_interger = to_string(add);
    int size = convert_to_interger.size();
    int product = size * add;
    
    cout << "La suma de dos enteros es "s << add << ".\nEl numero de digitos de la suma es " << size << ".\nEl producto de la suma por el numero de digitos es " << product << ".";
    
    return 0;
}