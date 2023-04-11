#include <iostream>
using namespace std;

int main() {
    for (int i = 0 ; i < 10 ; i++) {
        int cake ;
        cin >> cake ;
        if ( cake == 1 ) {
            cout << "Om-nom-nom :P" << endl;
        } else if ( cake == 0 ) {
            cout << "No cake :(" ;
            break ;
        }
    }

    return 0 ;
}






