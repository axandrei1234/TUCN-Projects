/*Axente Andrei Ex4 Lab01 G2115
 Consideraţi o funcţie cu 3 parametrii toţi impliciţi (int, float, double) care returnează produsul acestor valori. Apelaţi funcţia considerând mai multe variante de apel concrete (fără parametri, 1 parametru, 2 parametri, 3 parametri).*/

#include <iostream>
using namespace std;

double produs (int nr1=10, float nr2=1.3, double nr3=3.425){
    return nr1*nr2*nr3;
}

int main () {
    int nr1{};
    float nr2{};
    double nr3{};
    cout << "Introduceti o valoare pentru primul numar: ";
    cin >> nr1;
    cout << "Introduceti o valoare pentru al doilea numar: ";
    cin >> nr2;
    cout << "Introduceti o valoare pentru al treilea numar: ";
    cin >> nr3;
    cout << "Produsul fara niciun parametru este: " << produs() << endl;
    cout << "Produsul cu 1 parametru este : " << produs (nr1) << endl;
    cout << "Produsul cu 2 parametri este: " << produs (nr1, nr2) << endl;
    cout << "Produsul cu 3 parametri este: " << produs (nr1, nr2, nr3) << endl;
}
