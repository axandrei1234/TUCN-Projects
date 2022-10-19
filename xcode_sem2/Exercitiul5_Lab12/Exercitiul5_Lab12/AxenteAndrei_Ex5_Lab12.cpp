/*Axente Andrei Ex5 Lab12 G2115
 Supraîncărcaţi operatorii de extracţie şi de inserţie pentru clasa Complex, în care părţile reale
 şi imaginare sunt ambele protected de tip real. Derivaţi public o clasă Punct din clasa Complex, adăugând atributul culoare pentru punctul de coordonate x şi y corespunzător părții reale, respectiv imaginare a numărului complex. Supraîncărcaţi din nou aceiași operatori de intrare-ieșire. Instantiati obiecte de tip Complex si Punct si verificati functionalitatea supraincarcarii operatorilor. Asignati un obiect de tip Punct la unul de tip Complex prin upcasting si afisati atributele lui.*/

#include <iostream>
using namespace std;

class Complex {
protected:
    int real;
    int imaginar;
public:
    friend istream &operator>>(istream &stream, Complex &c);
    friend ostream &operator<<(ostream &stream, const Complex &c);
};

class Punct : public Complex {
protected:
    char culoare [10];
public:
    void setX(int x) {real = x;}
    void setY(int y) {imaginar = y;}
    int getX() {return real;}
    int getY() {return imaginar;}
    
    friend istream &operator>>(istream &stream, Punct &p);
    friend ostream &operator<<(ostream &stream,  Punct &p);
};

int main() {
    Complex c;
    Punct p;
    cin >> c;
    cout << c;
    cin >> p;
    cout << p;
    Complex *c1 = &p;
    cout << *c1;
}


istream &operator>>(istream &stream, Complex &c) {
    cout << "Introduceti o valoare pentru partea reala: ";
    stream >> c.real;
    cout << "Intreocueti o valoare pentru partea imaginara: ";
    stream >> c.imaginar;
    return stream;
}

ostream &operator<<(ostream &stream, const Complex &c) {
    stream << "Valorea reala este: " << c.real << endl;
    stream << "Valoarea imaginara este: " << c.imaginar << endl;
    return stream;
}

istream &operator>>(istream &stream, Punct &p) {
    int numar;
    cout << "Introduceti o valoare pentru x: ";
    stream >> numar;
    p.setX(numar);
    cout << "Introduceti o valoare pentru y: ";
    stream >> numar;
    p.setY(numar);
    cout << "Ce culoare sa aiba punctul: ";
    stream >> p.culoare;
    return stream;
}

ostream &operator<<(ostream &stream, Punct &p) {
    stream << "Punctul x are valoarea: " << p.getX() << endl;
    stream << "Punctul y are valoarea: " << p.getY() << endl;
    stream << "Punctul are culoarea: " << p.culoare << endl;
    return stream;
}
