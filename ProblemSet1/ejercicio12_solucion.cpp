#include <iostream>

using namespace std;

int main() {
    double N, A, B, X, Y;
    cout << "Ingrese el costo inicial del producto: "; cin >> N;
    cout << "Ingrese el valor de A: "; cin >> A;
    cout << "Ingrese el valor de B: "; cin >> B;
    cout << "Ingrese el valor de X: "; cin >> X;
    cout << "Ingrese el valor de Y: "; cin >> Y;

    double costo;
    if (N>B) {
        double descuento = N * (Y / 100);
        costo = N - descuento;
    }else if (N>A) {
        double descuento = N * (X / 100);
        costo = N - descuento;
    }else { costo = N; }
    
    cout << "El costo es de "s + to_string(costo);
    
    return 0;
}