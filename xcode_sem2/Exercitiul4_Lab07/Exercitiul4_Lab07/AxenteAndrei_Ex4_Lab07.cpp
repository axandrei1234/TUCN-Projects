/*Axente Andrei Ex4 LAb07
 Să se scrie o aplicaţie în care se modelează clasa Student cu nume, prenume, numar note si notele din sesiunea din iarnă declarat printr-un pointer de tip int. Să se afişeze numele studenţilor din grupă care au restanțe și apoi numele primilor 3 studenți din grupă în ordinea mediilor, care se va afisa si ea.*/

#include <iostream>
#include <vector>
#include <string>
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
    
    void citireDate() {
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
    
    void afisareDate(int i) {
        int k{};
        if (note.at(i) >= 5) {
        cout << "Nume: " << getNume() << endl;
        cout << "Prenume: " << getPrenume() << endl;
            for (int j{}; j < 7; j++) {
                cout << "Nota[" << j+1 << "]: " <<  note.at(j) << endl;
            }
        cout << endl << "Medie: " << medieStudent() << endl;
        cout << "Grupa: " << getGrupa() << endl;
        cout << endl;
        k++;
        }
        if (k == 3)
            exit (1);
        
    }
    void studentRestanta(int i) {
        if (note.at(i) < 5)
            cout << getNume() << " " << getPrenume() << endl;
        cout << endl;
    }
};
 
bool cmp(Student a, Student b) {
    return (a.medieStudent() > b.medieStudent());
}

int main() {
    vector <Student> s;
    int n{};
    cout << "Cate obiecte doriti sa aibe clasa(>3): "; cin >> n;
    while (n < 3) {
        cout << "Clasa trebuie sa aiba mai mult de 3 obiecte! Introduceti alta valoare: ";
        cin >> n;
    }
    s.resize(n);
    for (int i{}; i < n; i++)
    s.at(i).citireDate();
    sort(s.begin(), s.end(), cmp);
    cout << "Studenti restanti pe iarna" << endl;
    for (int i{}; i<n; i++)
    s.at(i).studentRestanta(i);
    cout << "Top 3 studenti ordonati dupa medie (descrescator) sunt: " << endl;
    for (int i{}; i < n; i++)
    s.at(i).afisareDate(i);
}

