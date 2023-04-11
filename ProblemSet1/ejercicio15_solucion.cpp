#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;

    if (isupper(a)) {
        cout << "Character is uppercased";
    } else if (islower(a)) {
        cout << "Character is lowercased";
    } else if (isdigit(a)) {
        cout << "Not a character";
    }

    return 0;
}