#include <iostream>
using namespace std;

int main() {
    int fibo = 11235813;
    int x;
    cout << "Input Fibonacci\'s collar code: "; cin >> x;
    if (fibo == x) {
        cout << "This is Fibonacci.";
    } else {
        cout << "This isn't Fibonacci.";
    }
    return 0;
}