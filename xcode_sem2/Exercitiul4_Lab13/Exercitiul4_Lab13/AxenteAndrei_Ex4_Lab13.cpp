/*Axente Andrei Ex4 Lab13 G2115
 Scrieți o aplicație C++ în care deschideți un fișier în mod binar pentru citire. Afișați un mesaj corespunzator dacă fișierul nu a fost creat în prealabil și cereți reintroducerea numelui fișierului. Presupunând că în fișierul deschis există înregistrări de tip agendă (nume, localitate, număr de telefon), utilizați supraîncărcarea operatorilor de inserție și extracție pentru afisarea pe ecran a conținutului fișierului.*/

#include <iostream>
#include <fstream>

using namespace std;
 

int main() {
    string numefisier;
    string nume;
    string localitate;
    long int numarDeTelefon;
    
    cout << "Introduceti numele fisierului: "; cin >> numefisier;
    ifstream filein(numefisier, ios::binary);
    
    while (filein.bad()) {
        cout << "Fisierul nu exista! Introduceti alt nume: "; cin >> numefisier;
    }
    cout << "Nume: "; filein >> nume;
    cout << "Localitate: "; filein >> localitate;
    cout << "Numar de telefon: "; filein >> numarDeTelefon;
}
