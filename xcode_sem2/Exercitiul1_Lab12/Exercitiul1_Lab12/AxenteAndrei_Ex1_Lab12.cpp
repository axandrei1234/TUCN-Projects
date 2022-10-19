/*Axente Andrei Ex1 Lab12 G2115
 Scrieţi un program C++ în care afişaţi diferite valori în zecimal, octal şi hexazecimal. Afişaţi valorile aliniate la dreapta, respectiv la stânga într-un câmp de afişare cu dimensiunea 15. Utilizaţi manipulatorul setfill( ) pentru stabilirea caracterului de umplere şi metodele width( ) şi precision( ) pentru stabilirea dimensiunii câmpului de afişare şi a preciziei.*/

#include <iostream>
using namespace std;
const int dim = 15;
ostream &stanga(ostream &);
ostream &dreapta(ostream &);

int main() {
    cout << "decimal: " << 10 << ' ' << 15 << endl;
    cout.unsetf(ios::dec);
    cout.setf(ios_base::hex);
    cout << "hexadecimal: " << 10 << ' ' << 15 << endl;
    cout.unsetf(ios_base::hex);
    cout.setf(ios_base::oct);
    cout << "octal: " << 10 << ' ' << 15 << endl;
    cout << "Aliniere stanga: " << stanga << 10 << endl;
    cout << "Aliniere dreapta: " << dreapta << 15 << endl;
}

ostream &stanga (ostream &stream) {
    stream.width(dim);
    stream.fill('/');
    stream.setf(ios::dec|ios::left);
    stream.precision(5);
    return stream;
}

ostream &dreapta (ostream &stream) {
    stream.width(dim);
    stream.fill('*');
    stream.setf(ios::dec|ios::right);
    stream.precision(5);
    return stream;
}
