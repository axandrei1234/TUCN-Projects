#include <iostream>
#include <string>
using namespace std;


int main() {
    string litere;
    cout << "Introduceti un sir de caractere: ";
    cin >> litere;
    for (int i{}; i<litere.size(); i++) {
        for (int j{}; j<litere.size()-i; j++) {
            cout << endl;
        }
    }

}
