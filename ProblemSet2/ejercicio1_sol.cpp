# include <iostream>
using namespace std;

int main () {
    string h1, h2, h3, ht ;
    cout << "Enter the house 1: " ; cin >> h1 ;
    cout << "Enter the house 2: " ; cin >> h2 ;
    cout << "Enter the house 3: " ; cin >> h3 ;
    cout << "Enter the house fluffy was last seen: " ; cin >> ht ;

    if ( ht == h1 ) {
        cout << "Enter the house 1" ;
    } else if ( ht == h2 ) {
        cout << "Enter the house 2" ;
    } else if ( ht == h3) {
        cout << "Enter the house 3" ;
    } else {
        cout << "Seek somewhere else" ;
    }

    return 0;
}
