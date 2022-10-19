/*Axente Andrei Ex2 Lab01 G2115
 Definiţi o funcţie inline min( ) care determină şi afişează minimul dintre 2 si alta dintre 3 numere întregi introduse de la tastatură. Considerati supraincarcarea functiilor.
 */

#include <iostream>
using namespace std;

inline int min(int nr1, int nr2);
inline int min(int nr1, int nr2, int nr3);

int main() {
    int nr1{}, nr2{}, nr3{};
    cout << "Introduceti o valoare pentru primul numar: ";
    cin >> nr1;
    cout << "Introduceti o valoare pentru al doilea numar: ";
    cin >> nr2;
    cout << endl << "Minimul primelor 2 numere este: " << min(nr1,nr2) << endl;
    cout << "Introduceti o valoare pentru al treilea numar: ";
    cin >> nr3;
    cout << endl << "Minimul celor 3 numere este: " << min(nr1,nr2,nr3) << endl;
}

inline int min(int nr1, int nr2) {
    if (nr1<nr2)
        return nr1;
    else
        return nr2;
}

inline int min(int nr1, int nr2, int nr3) {
    if (nr1<nr2 && nr1<nr3)
        return nr1;
    else
        if (nr2<nr3)
            return nr2;
    else
        return nr3;
}
