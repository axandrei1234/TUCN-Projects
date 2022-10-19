/*Axente Andrei Ex3 Lab02 G2115
 Calculul celui mai mare divizor comun a două numere folosind o funcţie recursivă.*/

#include <iostream>
using namespace std;

int cmmdc (int, int);

int main () {
    int nr1{}, nr2{};
    cout << "Introduceti o valoare pentru primul numar: ";
    cin >> nr1;
    cout << "Introduceti o valoare pentru al doilea numar: ";
    cin >> nr2;
    cout << "Cel mai mare divizor comun dintre " << nr1 <<" si " << nr2 << " este: " << cmmdc(nr1,nr2) << endl;
}

int cmmdc (int nr1, int nr2) {
    if (nr1==0||nr2==0)
        return 0;
    if (nr1==nr2)
        return nr1;
    if (nr1>nr2)
        return cmmdc(nr1-nr2,nr2);
    else
        return cmmdc(nr1, nr2-nr1);
}
