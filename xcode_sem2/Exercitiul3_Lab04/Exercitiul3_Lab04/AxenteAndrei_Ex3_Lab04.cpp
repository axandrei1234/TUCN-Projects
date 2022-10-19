/*Axente Andrei Ex5 Lab04 G2115
 Folosiţi funcţiile de bibliotecă pentru sortări (qsort( )) pentru a aranja un tablou unidimensional de înregistrări cu nume, prenume, cod numeric personal, data angajării după două câmpuri la alegere (un exemplu ar fi: crescător după nume şi descrescător după data angajării).*/

#include <iostream>
#include <string.h>
using namespace std;
struct Angajat {
    char nume[20];
    char prenume[20];
    int cnp;
    char luna[20];
    char an[20];
};

void wstruct (struct Angajat *a);
void rstruct (struct Angajat *a);
int cnume(const void *a, const void *b);

int main () {
    struct Angajat *a;
    int n{};
    cout << "Numar angajati: ";
    cin >> n;
    a = new Angajat[n];
    cout << "Introduceti datele angajatilor: " << endl;
    for (int i{}; i<n; i++) {
        cout << "Angajat[" << i+1 << "]: " << endl;
        wstruct (a+i);
    }
    cout << "Afisare date angajati: " << endl;
    for (int i{}; i<n; i++) {
        cout << "Angajat[" << i+1 << "]: " << endl;
        rstruct (a+i);
    }
    qsort(a, n, sizeof(Angajat), cnume);
    cout << "Angajatii ordonati sunt: " << endl;
    for (int i{}; i<n; i++) {
        cout << "Angajat[" << i+1 << "]: " << endl;
        rstruct(a+i);
    }
}

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

int cnume(const void *a, const void *b) {
    int fl_nume, fl_pre;
    Angajat *p = (Angajat*)a;
    Angajat *r = (Angajat*)b;
    if ((fl_nume = strcmp(p->nume, r->nume)) == 0)
        if ((fl_pre = strcmp(p->prenume, r->prenume)) == 0)//ascendent_nume, prenume si an
      return fl_pre;//diferenta prenume
      return fl_nume;//diferenta nume
}
