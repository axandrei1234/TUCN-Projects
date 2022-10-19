/*Axente Andrei Ex5 Lab01 G2115
 Folosind supraîncărcarea funcţiilor definiţi trei funcţii cu acelaşi nume dar cu tipuri diferite de parametri (int, int *, int &) care returnează radicalul unei valori intregi. Analizaţi cazul transmiterii parametrilor prin valoare şi prin referinţă.*/
#include <iostream>
#include <math.h>
using namespace std;

float radical (int nr) {
    return sqrt(nr);
}

float radical (int* nr) {
    return sqrt (*nr);
}

float radical (int &nr) {
    return sqrt (nr);
}

int main () {
    int nr{};
    cout << "Introduceti o valoare pentru numar: " ;
    cin >> nr;
    cout << radical (&nr) << endl;
}
