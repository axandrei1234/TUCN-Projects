/*Axente Andrei Ex3 Lab12 G2115
 Considerati achizitia de date cu valori reale de la un dispozitiv electronic (10 date). Afisati folosind un mesaj adecvat datele primite considerand un format minimal (partea intreaga). Determinati media acestor valori, iar daca depaseste un prag stabilit anterior (definit sau citit), afisati aceste date in format detaliat considerand ca avem date de tip real, cu o precizie de 8 digiti la partea fractionara.*/

#include <iostream>
using namespace std;

ostream &intreg (ostream &);

int main() {
    float date[10], avg{};
    int prag;
    cout << "Introduceti 10 numere reale: " << endl;
    for (int i{}; i<10; i++) {
        cout << "x[" << i << "]: ";
        cin >> date[i];
        avg += date[i];
    }
    cout << endl << "Afisarea celor 10 numere reale(numai partea intreaga): " << endl;
    for (int i{}; i<10; i++)
        cout << "x[" << i << "]: " << (int)date[i] << endl;
    cout << endl << "Media numerelor reale este: " << avg/10 << endl;
    cout << "Introduceti valoarea pragului: "; cin >> prag;
    if (avg/10 >= prag) {
        cout << "Cele 10 numere cu o preciezie de 8 sunt: " << endl;
        for (int i{}; i<10; i++) {
            cout.precision(8);
            cout << "x[" << i << "]: " << date[i] << endl;
        }
    }
    else {
        cout << "Media nu depaseste pragul!" << endl;
        exit (1);
    }
}



