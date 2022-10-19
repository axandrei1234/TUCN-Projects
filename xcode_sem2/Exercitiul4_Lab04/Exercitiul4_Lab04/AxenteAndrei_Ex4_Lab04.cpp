/*Axente Andrei Ex4 Lab04 G2115
 Scrieţi o aplicaţie C/C++ in care plecând de la două tablouri (unidimensionale) de numere naturale să se obţină un al treilea tablou care să conţină toate elementele tablourilor sursă fără a se repeta, aranjate în ordine crescătoare.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v0, v1, v2;
    int nrnou0{}, nrnou1{}, n{}, m{};
    cout << "Ce dimensiune doriti sa aibe primul vector: "; cin >> n;
    for (int i{}; i<n; i++) {
        cout << "x[" << i << "]: ";
        cin >> nrnou0;
        while (nrnou0 < 0) {
            cout << "Numarul trebuie sa fie natural! Introduceti alta valoare: ";
            cin >> nrnou0;
        }
        v0.push_back(nrnou0);
    }
    cout << endl << "Ce dimensiune doriti sa aibe al doilea vector: "; cin >> m;
    for (int i{}; i<m; i++) {
        cout << "x[" << i << "]: ";
        cin >> nrnou1;
        while (nrnou1 < 0) {
            cout << "Numarul trebuie sa fie natural! Introduceti alta valoare: ";
            cin >> nrnou1;
        }
        v1.push_back(nrnou1);
    }
    v2.reserve(v0.size()+v1.size());
    v2.insert(v2.end(), v0.begin(), v0.end());
    v2.insert(v2.end(), v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    cout << endl << "vectorii suprapusi si sortati sunt: ";
    for (int i:v2)
        cout << i << " ";
}
