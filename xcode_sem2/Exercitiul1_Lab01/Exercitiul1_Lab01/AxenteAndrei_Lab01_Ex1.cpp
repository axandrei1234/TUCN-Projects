/* Axente Andrei Ex1 Lab1 G2115
 Definiţi funcţii macro MAXi (i=2,3)care determină şi afişează maximul dintre 2 si alta, dintre 3 numere introduse de la tastatură. Folositi variante diferite (operator conditional, instructiuni if, etc.)
 */
#include <iostream>
using namespace std;
#define MAX2(a,b) {\
if (a<b)\
a=b;\
}
#define MAX3(a,b,c) {\
a=(a)>(b)&&(a)>(c)?(a):(b)>(c)?(b):(c);\
}

int main() {
    int nr1{}, nr2{}, nr3{};
    cout << "Introduceti o valoare pentru primul numar: ";
    cin >> nr1;
    cout << "Introduceti o valoare pentru al doilea numar: ";
    cin >> nr2;
    MAX2(nr1,nr2);
    cout << endl << "Maximul dintre cele 2 numere este: " << nr1 << endl << endl;
    cout << "Introduceti o valoare pentru al treilea numar: ";
    cin >> nr3;
    MAX3(nr1,nr2,nr3);
    cout << endl << "Maximul dintre cele 3 numere este: " << nr1 << endl;
}

