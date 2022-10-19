/*Axente Andrei Ex4 Lab11 G2115
 Declarati o clasa Animal, care va contine o metoda pur virtuala, respira( ) si doua metode virtuale manaca( ) si doarme( ). Derivati in mod public o clasa Caine si alta Peste, care vor defini metoda pur virtuala, iar clasa Caine va redefini metoda mananca( ), iar Peste metoda doarme( ). Instantiati obiecte din cele doua clase si apelati metodele specifice. Definiti apoi un tablou de tip Animal, care va contine obiecte din clasele derivate, daca e posibil. Daca nu, gasiti o solutie adecvata.*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void respira() = 0;
    virtual void mananca() {cout << "";}
    virtual void doarme() {cout << "";}
};

class Caine : public Animal {
public:
    void respira() override {cout << "Metoda virtuala override de la clasa Animal (respira caine)" << endl;}
    void mananca() override {cout << "Metoda virtuala override de la clasa Animal (mananca caine)" << endl;}
};

class Peste : public Animal {
public:
    void respira() override {cout << "Metoda virtuala override de la clasa Animal (respira peste)" << endl;}
    void doarme() override {cout << "Metoda virtuala override de la clasa Animal (doarme peste)" << endl;}
};

int main() {
    Caine c;
    Peste p;
    Animal *a[] = {&c, &p};
    a[0]->respira();
    a[0]->mananca();
    a[1]->respira();
    a[1]->doarme();
}
