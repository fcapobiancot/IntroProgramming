#include <iostream>
using namespace std;
int main() {
    int bill;
    int sum = 0;
    do {
        cin >> bill;
        // Esta construccion del if y continue nos permite ignorar casos innecesarios
        if (bill <= 0) {
            sum -= bill; // hace que el valor negativo se vuelva 0, [-bill-(-bill)] = 0
        }
        cout << "Income: " << bill << endl;
        sum += bill;
        // la señal del final del programa será una cuenta de cero
    } while (bill != 0);
    cout << "Total income: " << sum << endl;
}
