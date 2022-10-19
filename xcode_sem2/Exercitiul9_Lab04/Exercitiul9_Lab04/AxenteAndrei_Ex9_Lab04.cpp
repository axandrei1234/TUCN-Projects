/*Axente Andrei Ex9 Lab4 G2115
 Generati in mod aleatoriu un tablou de maxim 200 valori intregi, valori nu mai mari de 100. Determinati si afisati valoarea minima, mediana si maxima generata, sortand elementele printr-o metoda la alegere. Determinati valoarea medie si comparati aceasta valoare cu cea mediana (afisati diferenta). Verificati daca valoarea medie este in tabloul initial generat.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
    srand((unsigned)time(0));
    vector <int> numere;
    int random, n{},sum{};
    cout << "Cate numere doriti sa fie generate(<200): ";
    cin >> n;
    while (n>200) {
        cout << "Numarul maxim de numere ce pot fi generate este de 200! Introduceti alta valoare: ";
        cin >> n;
    }
    for (int i{}; i<n; i++) {
        random = (rand()%100)+1;
        numere.push_back(random);
        sum += numere[i];
    }
    sort(numere.begin(), numere.end());
    cout << "Maximul din vector este: " << *max_element(numere.begin(), numere.end()) << endl;
    cout << "Valoarea mediana a vectorului este: " << numere.at(numere.size()/2) << endl;
    cout << "Minimul din vector este: " << *min_element(numere.begin(), numere.end()) << endl;
    cout << "Valoarea medie este: " << (float)sum / numere.size() << endl;
    if ((float)sum / numere.size() == numere.at(numere.size()/2))
        cout << "Valoarea mediei si cea mediana sunt egale!" << endl;
      else
          if ((float)sum / numere.size() > numere.at(numere.size()/2))
        cout << "Valoarea mediei este mai mare decat cea mediana!" << endl;
      else
        cout << "Valoarea mediei este mai mica decat cea mediana!" << endl;
    cout << "Diferenta dintre cele 2 valori este: " << (float)sum / numere.size() - numere.at(numere.size()/2) << endl;
    for (int i{}; i<numere.size(); i++) {
        if ((float)sum / numere.size() == numere[i]) {
            cout << "Valoarea medie se afla si in tabloul initial!" << endl;
            exit(1);
        }
    }
    cout << "Valoarea medie nu se afla si in tabloul initial!" << endl;
    }
