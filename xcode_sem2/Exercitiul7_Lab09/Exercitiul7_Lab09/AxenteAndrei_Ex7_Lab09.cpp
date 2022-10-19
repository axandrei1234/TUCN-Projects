/*Axente Andrei Ex7 Lab09 G2115
 Să se scrie programul care considera o clasa MyClass cu trei atribute de tip int. Clasa considera pe baza mecanismului de supraincarcare metode publice int myFunction(...), care în funcţie de numărul de parametri primiţi, returnează fie valoarea primită (1 parametru), fie produsul variabilelor de intrare (0-toti, 2, 3 parametrii). Instantiati un obiect din clasa in main(), setati atributele cu metode setter adecvate din clasa si afisati valorile la apelurile metodelor.*/

#include <iostream>
using namespace std;

class MyClass {
private:
    int x;
    int y;
    int z;
public:
    void setX(int x) {this->x = x;}
    int getX(){return x;}
    
    void setY(int y) {this->y = y;}
    int getY() {return y;}
    
    void setZ(int z) {this->z = z;}
    int getZ() {return z;}
    
    int myFunction(int x) {
        return x;
    }
    int myFunction() {
        return x*y*z;
    }
    
    int myFunction(int x, int y) {
        return x*y;
    }
    
    int myFunction(int x, int y, int z) {
        return x*y*z;
    }
};

int main() {
    MyClass m1;
    int numar;
    cout << "Introduceti o valoare pentru primul numar: "; cin >> numar;
    m1.setX(numar);
    cout << "Introduceti o valoare pentru al doilea numar: "; cin >> numar;
    m1.setY(numar);
    cout << "Introduceti o valoare pentru al treilea numar: "; cin >> numar;
    m1.setZ(numar);
    cout << m1.myFunction() << endl;
    cout << m1.myFunction(m1.getX()) << endl;
    cout << m1.myFunction(m1.getX(),m1.getY()) << endl;
    cout << m1.myFunction(m1.getX(),m1.getY(),m1.getZ()) << endl;
}
