# include <iostream>
using namespace std ;

int main () {
    int x, y, z ;
    cin >> x >> y >> z ;

    if ( x + y == z) {
        cout << " " ;
    } else {
        cout << "Error. The sum of "s << x << " and " << y << " is " << x + y ;
    }

    return 0 ;
}
