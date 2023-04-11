#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Number of documents: "; cin >> x;
    string answer = to_string(x) + " found documents. "s;
    cout << answer;

    return 0;
}