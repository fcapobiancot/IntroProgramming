#include <iostream>

using namespace std;

int main() 
{
    string book_1, book_2, book_3;
    
    cout << "Titulos de libros: " << endl;
    getline(cin, book_1);
    getline(cin, book_2);
    getline(cin, book_3);

    
    cout << book_3 << endl << book_2 << endl << book_1 << endl;
    
}