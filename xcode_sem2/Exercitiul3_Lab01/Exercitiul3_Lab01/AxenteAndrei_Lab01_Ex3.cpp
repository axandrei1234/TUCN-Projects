/*Axente Andrei Ex3 Lab01 G2115
 Considerati o structura de date Student, care contine un camp de tip sir de caractere (maxim 30) pentru nume_prenume si un alt camp nota de tip int. Definiti un obiect de tip Student la care datele vor fi citite de la tastatura. Validati folosind asertiuni ca nume_prenume sa aiba cel putin 5 caractere iar nota sa fie >=5 si <=10. Afisati campurile obiectului in caz de introducere corecta.*/

#include <iostream>
#include <string>
using namespace std;
struct Student {
    char nume_prenume [30];
    int nota;
};

int main() {
    Student student;
    cout << "Nume-Prenume student: ";
    cin.getline(student.nume_prenume,30);
    assert (strlen(student.nume_prenume) >= 5);
    cout << "Nota studentului: ";
    cin >> student.nota;
    assert (student.nota >=5 && student.nota <=10);
}
