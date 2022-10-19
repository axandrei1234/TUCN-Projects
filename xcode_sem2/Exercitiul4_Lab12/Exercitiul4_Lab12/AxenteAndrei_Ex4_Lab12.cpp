/*Axente Andrei Ex4 Lab12 G2115
 Definiti o clasa numita MiscareAccelerata care contine atributele private dc (distanta curenta, vc (viteza curenta) si a (acceleratia). atributele dc, vc si a sunt initializate in constructor iar valoarea lor este cea data de d0 si v0, si a0 ca si parametri. In clasa sunt supraincarcati operatorii de extractie si de inserție pentru a se putea initializa si afisa caracteristicile unei instante. Implementati metoda determinaMiscarea care re-calculeaza variabilele dc si vc, pe baza unui numar de secunde primit ca parametru si avand in vedere legea miscarii rectilinii uniform accelerate cu acceleratie a0.
 Instantiati clasa si apoi folositi membrii definiti.*/

#include <iostream>
using namespace std;

class MiscareAccelerata {
private:
    float dc, vc, a;
public:
    MiscareAccelerata() {
        dc = 0;
        vc = 0;
        a = 0;
    }
    MiscareAccelerata(float dc, float vc, float a) {
        this->dc = dc;
        this->vc = vc;
        this->a = a;
    }
    friend istream &operator>>(istream &stream, MiscareAccelerata &m1); //💀
    friend ostream &operator<<(ostream &stream,  const MiscareAccelerata &m1);//🫡
    
    void miscare(int s) {
        dc += vc*s + a/2 * s*s;
        vc += a*s;
    }
};

int main() {
    MiscareAccelerata m1;
    int s{};
    cout << "Introduceti numarul de secunde: "; cin >> s;
    cin >> m1;
    m1.miscare(s);
    cout << "Dupa: " << s << " secunde, valorile sunt: ";
    cout << m1;
}

istream &operator>>(istream &stream, MiscareAccelerata &m1) {
    cout << "Introduceti distanta: ";
    stream >> m1.dc;
    cout << "Introduceti viteza: ";
    stream >> m1.vc;
    cout << "Introduceti acceleratia: ";
    stream >> m1.a;
    return stream;
}

ostream &operator<< (ostream &stream,  const MiscareAccelerata &m1) {
    stream << "Distanta: " << m1.dc << " iar viteza: " << m1.vc << " si acceleratia: " << m1.a << endl;
    return stream;
}
