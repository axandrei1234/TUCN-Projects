/*Axente Andrei Ex3 Lab08 G2115
 Definţi o clasă numită Repository care are două variabile private de tip întreg. Clasa mai conţine un constructor explicit vid si unul cu 2 parametri şi o metodă accesor care afişează valorile variabilelor din clasă. Scrieţi o clasă numită Mathemathics, friend cu prima clasă, care implementează operaţiile aritmetice elementare (+, -, *, /) asupra variabilelor din prima clasa. Fiecare metoda primeşte ca parametru un obiect al clasei Repository.*/

#include <iostream>
using namespace std;

class Repository {
private:
    int numar1;
    int numar2;
public:
    Repository() = default;
    Repository(int numar1, int numar2) {
        this->numar1 = numar1;
        this->numar2 = numar2;
    }
    int getNumar1() {return numar1;}
    int getNumar2() {return numar2;}
    friend class Mathematics;
    
};

class Mathematics {
private:
    int numar3;
public:
    int getNumar3() {return numar3;}
    
    void adunare (Repository r) {
        numar3 = r.numar1 + r.numar2;
        cout << "Adunare: " << getNumar3() << endl;
    }
    void scadere (Repository r) {
        numar3 = 0;
        numar3 = r.numar1 - r.numar2;
        cout << "Scadere: " << getNumar3() << endl;
    }
    void  inmultire (Repository r) {
        numar3 = 0;
        numar3 = r.numar1 * r.numar2;
        cout << "Inmultire: " << getNumar3() << endl;
    }
    void Impartire (Repository r) {
        numar3 = 0;
        numar3 = r.numar1 / r.numar2;
        cout << "Impartire: " << getNumar3() << endl;
    }
};

int main() {
    Repository r, r1(10,5);
    Mathematics m;
    m.adunare(r);
    m.scadere(r);
    m.inmultire(r);
    m.Impartire(r);
    m.adunare(r1);
    m.scadere(r1);
    m.inmultire(r1);
    m.Impartire(r1);
}
