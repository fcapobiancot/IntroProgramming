#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Number of documents: "; cin >> x;
    string answer;
        if (x == 0) {
        answer = "No documents found.";
    } else if (x == 1) {
        answer = to_string(x) + " document found.";
    }else answer = to_string(x) + " documents found.";
    cout << answer;

    return 0;
}