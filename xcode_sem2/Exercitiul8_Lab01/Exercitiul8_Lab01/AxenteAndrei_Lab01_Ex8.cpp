/*Axente Andrei Ex8 Lab01 G2115
 Să se scrie un program care afişează numele programului, data şi ora compilării şi numărul de linii pe care îl are acest program folosind macrofunctii standard.*/

#include <iostream>
using namespace std;

int main() {
    cout << "Data la care s-a compilat programul este: " << __DATE__ << endl;
    cout << "Ora la care s-a compilat programul este: " << __TIME__ << endl;
    cout << "Numarul de randuri este: " << __LINE__ << endl;
}
