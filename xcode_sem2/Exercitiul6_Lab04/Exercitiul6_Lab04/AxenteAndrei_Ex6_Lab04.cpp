/*Axente Andrei Ex6 Lab05 G2115
 Cititi de la tastatura m elemente de tip intreg intr-un tablou unidimensional si o valoare intreaga n<m. Impartiti tabloul citit in doua sub-tablori astfel:
 a) primul subtablou va contine primele n elemente din tabloul initial
 b) al doilea subtablou va contine restul elementelor din tablul initial.
 Sa se realizeze urmatoarele operatii:
 1. sa se ordoneze crescator cele doua subtablouri
 2. sa se sorteze tabloul initial, prin interclasarea celor doua subtablori ordonate. (merge-sort)*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v0, v3;
    int k{},l{};
    int m{}, n{};
    int nrnou{};
    cout << "Ce dimensiune doriti sa aibe vectorul: "; cin >> m;
    for (int i{}; i<m; i++) {
        cout << "x[" << i << "]: ";
        cin >> nrnou;
        v0.push_back(nrnou);
    }
    cout << "Introduceti o valoare pentru n: ";
    cin >> n;
    vector <int> v1(v0.begin(),v0.begin()+ n);
    vector <int> v2(v0.begin()+n, v0.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    //merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());
    while ( k < v1.size() &&  l < v2.size()) {
        if (v1[k] < v2[l]) {
            v3.push_back(v1[k]);
            k++;
        }
        else {
            v3.push_back(v2[l]);
            l++;
        }
    }
    while (k<v1.size()) {
        v3.push_back(v1[k]);
        k++;
    }
    while (l<v2.size()) {
        v3.push_back(v2[l]);
        l++;
    }
    for (int i:v3)
        cout << i << " ";
}
