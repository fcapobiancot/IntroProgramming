#include <iostream>
using namespace std;

int main() {
    string query ;
    getline(cin, query) ;

    double indice ;
    for (int i = 0; i < query.size(); i++) {
        if (query[i] == ' ') {
            cout << indice << endl;
            indice = i + 1;
        } else {
            indice++;
        }
    }

    cout << indice << endl;

    return 0;
}