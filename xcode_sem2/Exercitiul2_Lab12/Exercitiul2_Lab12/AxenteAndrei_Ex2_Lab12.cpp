/*Axente Andrei Ex2 Lab12 G2115
 Scrieti o aplicatie C++ in care se citesc de la tastatura date de diferite tipuri, urmand a fi afisate pe ecran  utilizand manipulatorii standard.*/

#include <iostream>
using namespace std;
ostream &intregf (ostream &);
ostream &realf (ostream &);
ostream &sirf (ostream &);

int main() {
    int intreg;
    float real;
    char sir[10];
    cout << "Introduceti un numar intreg: "; cin >> intreg;
    cout << "Introduceti un numar real: "; cin >> real;
    cout << "Introduceti un sir de caractere: "; cin >> sir;
    cout << "Numarul intreg dupa manipulare: " << intregf << intreg << endl;
    cout << "Numarul real dupa manipulare: " << realf << real << endl;
    cout << "Sirul dupa manipulare: " << sirf << sir << endl;
}

ostream &intregf (ostream &stream) {
    stream.unsetf(ios::dec);
    stream.width(5);
    stream.fill('(');
    stream.setf(ios::left|ios::hex);
    return stream;
}

ostream &realf (ostream &stream) {
    stream.width(10);
    stream.fill('&');
    stream.setf(ios::right);
    stream.precision(3);
    return stream;
}

ostream &sirf (ostream &stream) {
    stream.setf(ios::left);
    stream.width(15);
    stream.fill('#');
    return stream;
}
