#include <iostream>
using namespace std;
struct Angajat {
    char nume[20];
    char prenume[20];
    int cnp;
    char luna[20];
    char an[20];
};
void wstruct (struct Angajat *a) {
    cout << "Nume: "; cin >> a->nume;
    cout << "Prenume: "; cin >>a->prenume;
    cout << "CNP: "; cin >> a->cnp;
    cout << "Luna angajare: "; cin >> a->luna;
    cout << "An angajare: "; cin >> a->an;
    cout << endl;
}

void rstruct (struct Angajat *a) {
    cout << "Nume: " << a->nume << endl;
    cout << "Prenume: " << a->prenume << endl;
    cout << "CNP: " << a->cnp << endl;
    cout << "Luna angajare: " << a->luna << endl;
    cout << "An angajare: " << a->an << endl;
    cout << endl;
}
