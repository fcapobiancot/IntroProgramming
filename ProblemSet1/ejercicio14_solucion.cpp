#include <iostream>
using namespace std;

int main() {
    string color1, color2, color3, color_t;
    int pisos1, pisos2, pisos3, pisos_t;
    
    cin >> color1 >> pisos1 >> color2 >> pisos2 >> color3 >> pisos3 >> color_t >> pisos_t;

    bool h1;
    if (color_t == color1 || color_t == "?") {
        if (pisos_t == pisos1 || pisos_t == -1) {
            h1 = true;
        }
    }

    bool h2;
    if (color_t == color2 || color_t == "?") {
        if (pisos_t == pisos2 || pisos_t == -1) {
            h2 = true;
        }
    }

    bool h3;
    if (color_t == color3 || color_t == "?") {
        if (pisos_t == pisos3 || pisos_t == -1) {
            h3 = true;
        }
    }

    if (h1) {
        cout << "1" << endl;
    }

    if (h2) {
        cout << "2" << endl;
    }

    if (h3) {
        cout << "3" << endl;
    }

    return 0;
}