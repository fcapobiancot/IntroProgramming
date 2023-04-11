#include <iostream>
using namespace std;

int main() {
    string query;
    getline(cin, query);

    int word = 0;
    for (int i = 0; i < query.size(); i++) {
        if (query[i] == ' ') {
            cout << "[" << query.substr(word, i - word) << "] " << endl;
            word = i + 1;
        }
    }
    cout << "[" << query.substr(word, query.size() - word) << "]" << endl;


    return 0;
}

