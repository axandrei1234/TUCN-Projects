/*Axente Andrei Ex3 Lab11 G2115
 Să se scrie un program C++ în care se defineşte o clasă Militar cu o metodă publică virtuală sunt_militar() care indică apartenenţa la armată. Derivaţi clasa Militar pentru a crea clasa Soldat şi clasa Ofiter. Derivaţi mai departe clasa Ofiter pentru a obtine clasele SubLocotenent, Locotenent, Capitan, Maior, Colonel, General. Redefiniti metoda sunt_militar( ) pentru a indica gradul militar pentru fiecare clasa specifica. Instantiati fiecare clasa Soldat, Locotenent,...,General, si apelati metoda sunt_militar( ).*/

#include <iostream>
using namespace std;

class Militar {
public:
    virtual void sunt_militar(){cout << "Forta miltiari m6" << endl;}
};

class Soldat : public Militar {
public:
    void sunt_militar() override {cout << "Forta soldateii lenesi!" << endl;}
};

class Ofiter : public Militar {
public:
    void sunt_militar() override {cout << "Ofiter smecher" << endl;}
};

class SubLocotenent : public Ofiter {
public:
    void sunt_militar() override {cout << "SubLocotenent cool" << endl;}
};

class Locotenent : public Ofiter {
public:
    void sunt_militar() override {cout << "Locotenent majong" << endl;}
};

class Capitan : public Ofiter {
public:
    void sunt_militar() override {cout << "Capitanul cu basca" << endl;}
};

class Maior : public Ofiter {
public:
    void sunt_militar() override {cout << "Maior senior" << endl;}
};

class Colonel : public Ofiter {
public:
    void sunt_militar() override {cout << "Colonel soldatel" << endl;}
};

class General : public Ofiter {
public:
    void sunt_militar() override {cout << "General nebunel" << endl;}
};

int main() {
    Militar m;
    m.sunt_militar();
    Soldat s;
    s.sunt_militar();
    Ofiter o;
    o.sunt_militar();
    SubLocotenent sl;
    sl.sunt_militar();
    Locotenent l;
    l.sunt_militar();
    Capitan c;
    c.sunt_militar();
    Maior mi;
    mi.sunt_militar();
    Colonel cl;
    cl.sunt_militar();
    General g;
    g.sunt_militar();
}
