/*Axente Andrei Ex7 Lab07 G2115
 Să se scrie un program care implementează clasa Aritmetica cu două atribute a și b de tip numeric (int, float sau double) si metode setter si getter adecvate. Implementați metoda suma() în interiorul clasei și metoda diferenta() ce apartine de asemenea clasei, dar e definita în afara clasei, metode care vor fi apelate prin intermediul unui obiect al clasei Aritmetica. În funcția principală main() instanțiați trei obiecte de tip Aritmetica. Modificati atributele a si b la fiecare obiect in parte folsind metodele de tip setter. Aplicați asupra lor operațiile de adunare și scădere pe care le-ați implementat prin metodele suma() și diferenta(). Metodele returneaza
    valorile numerice corespunzatoare operatiei folosind cele doua atribute ale clasei valori ce le veti afisa in main(). La fiecare grup de operatii adunare/scadere afisati valorile atributelor obiectului folosind metodele de tip getter.*/

#include <iostream>
using namespace std;

class Aritmetica {
private:
    int nr1,nr2;
public:
    Aritmetica (int x=0, int y=0) {
        nr1 = x;
        nr2 = y;
    }
    void setNr1(int a) {nr1=a;}
    int getNr1() {return nr1;}
    
    void setNr2(int b) {nr2=b;}
    int getNr2() {return nr2;}
    
    Aritmetica suma (Aritmetica b,Aritmetica d) {
        Aritmetica c;
        c.nr1 = nr1 + b.nr1 + d.nr1;
        c.nr2 = nr2 + b.nr2 + d.nr2;
        return c;
    }
    
    Aritmetica scadere (Aritmetica b, Aritmetica d);
        

    
};

int main() {
    Aritmetica a,b,c;
    int nr{};
    cout << "Introduceti valoarea pt nr1 a primului obiect: ";
    cin >> nr;
    a.setNr1(nr);
    cout << "Introduceti valoarea pt nr2 a primului obiect: ";
    cin >> nr;
    a.setNr2(nr);
    
    cout << "Introduceti valoarea pt nr1 a celui de al doilea obiect: ";
    cin >> nr;
    b.setNr1(nr);
    cout << "Introduceti valoarea pt nr2 a celui de al doilea obiect: ";
    cin >> nr;
    b.setNr2(nr);
    
    cout << "Introduceti valoarea pt nr1 a celui de al treilea obiect: ";
    cin >> nr;
    c.setNr1(nr);
    cout << "Introduceti valoarea pt nr2 a celui de al treilea obiect: ";
    cin >> nr;
    c.setNr2(nr);
    
    c = a.suma(b,c);
    cout << "Adunare1: " << c.getNr1() << endl;
    cout << "Adunare2: " << c.getNr2() << endl;
    
    c = a.scadere(b,c);
    
    cout << "Scadere1: " << c.getNr1() << endl;
    cout << "Scadere2: " << c.getNr2() << endl;
    

    
    
}

Aritmetica Aritmetica::scadere(Aritmetica b, Aritmetica d) {
    Aritmetica c;
    c.nr1 = nr1 - b.nr1 - d.nr1;
    c.nr2 = nr2 - b.nr2 - d.nr2;
    return c;
}
