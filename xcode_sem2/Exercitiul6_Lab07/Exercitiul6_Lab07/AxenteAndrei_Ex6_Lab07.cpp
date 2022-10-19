/*Axente Andrei Ex6 Lab07 G2115
 Definiți o clasă Complex modelată prin atributele de tip double real, imag și un pointer de tip char către numele fiecărui număr complex. În cadrul clasei definiți un constructor explicit cu
 doi parametri care au implicit valoarea 1.0 și care alocă spațiu pentru nume un șir de maxim 15 caractere, de exemplu "c1". De asemenea, definiți un constructor de copiere pentru clasa Complex. Clasa va mai conține metode mutator/setter și accesor/getter pentru fiecare membru al clasei, metode care permit operațiile de bază cu numere complexe și un destructor explicit. Definiți cel mult 10 numere complexe într-un tablou. Calculați suma numerelor complexe din tablou, valoare ce va fi folosită pentru a inițializa un nou număr complex, cu numele "Suma_c". Realizați aceleași acțiuni făcând diferența și produsul numerelor complexe.*/

#include <iostream>
#include <vector>
using namespace std;

class Complex {
private:
    int real;
    int imaginar;
public:
    void setReal(int real) {this->real = real;)
    int getReal() {return real;}
    
    void setImaginar(int imaginar) {this->imaginar = imaginar;}
    int getImaginar() {return imaginar;}
}
