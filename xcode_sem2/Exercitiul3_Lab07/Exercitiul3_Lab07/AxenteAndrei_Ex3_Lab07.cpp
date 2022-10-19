/*Axente Andrei Ex3 Lab07 G2115
 Modelați clasa Student care să conțină atributele private nume, prenume, note (tablou 7 valori int), grupa. Alocați dinamic memorie pentru n studenți. Calculați media cu o metoda din clasa și sortați studenții după medie, afisând datele fiecărui student (nume, prenume, grupa, medie). Implementati si destructorul clasei care să afișeze un mesaj.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
    string nume;
    string prenume;
    vector <int> note;
    int grupa;
public:
    void setNume(string a) {nume=a;}
    string getNume() {return nume;}
    
    void setPrenume(string a) {prenume=a;}
    string getPrenume() {return prenume;}
    
    void setGrupa(int a) {grupa=a;}
    int getGrupa() {return grupa;}
    
    void citireDate(int n) {
        string a;
        int numere;
        vector <int> v;
            cout << "Nume: "; cin >> a;
            setNume(a);
            cout << "Prenume: "; cin >> a;
            setPrenume(a);
            for (int j{}; j < 7; j++) {
                cout << "Nota[" << j+1 << "]: "; cin >> numere;
                while (numere <= 0 || numere > 10) {
                    cout << "Nota trebuie sa fie mai mare decat 1. Introduceti alta valoare: ";
                    cin >> numere;
                }
                note.push_back(numere);
            }
            cout << "Grupa: "; cin >> numere;
            setGrupa(numere);
        cout << endl;
    }
    float medieStudent() {
        int suma{};
        for (int i{}; i < 7; i++)
            suma += note.at(i);
        return (float)suma/7;
    }
    
    void afisareDate(int n) {
        cout << "Nume: " << getNume() << endl;
        cout << "Prenume: " << getPrenume() << endl;
            for (int j{}; j < 7; j++) {
                cout << "Nota[" << j+1 << "]: " <<  note.at(j) << endl;
            }
        cout << endl << "Medie: " << medieStudent() << endl;
        cout << "Grupa: " << getGrupa() << endl;
        cout << endl;
    }
};

bool cmp(Student a, Student b) {
    return (a.medieStudent() > b.medieStudent());
}

int main() {
    vector <Student> s;
    int n{};
    cout << "Cate obiecte doriti sa aibe clasa: "; cin >> n;
    s.resize(n);
    for (int i{}; i < n; i++)
    s.at(i).citireDate(n);
    sort(s.begin(), s.end(), cmp);
    cout << "Studentii ordonati dupa medie (descrescator) sunt: " << endl;
    for (int i{}; i < n; i++)
    s.at(i).afisareDate(n);
}

