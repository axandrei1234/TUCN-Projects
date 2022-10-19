/*Axente Andrei Ex1 Lab08 G2115
 Scrieţi o aplicaţie C/C++ în care clasa Calculator are un atribut privat memorie_RAM (int) şi o funcție prietenă tehnician_service( ) care permite modificarea valorii acestui atribut. Functia friend va fi membra intr-o alta clasa, Placa_de_baza care are o componentă denumire_procesor (sir de caractere). Scrieţi codul necesar care permite funcției prietene tehnician_service( ) să modifice (schimbe) valoarea variabilei denumire_procesor si memorie_RAM.*/

#include <iostream>
#include <string>
using namespace std;

class Calculator;
class Placa_de_baza;



class Placa_de_baza {
private:
    string denumire_procesor;
public:
    Placa_de_baza() {
        denumire_procesor = "Xeon E5";
    }
    void setProcesor (string denumire_procesor) {this->denumire_procesor = denumire_procesor;}
    string getProcesor() {return denumire_procesor;}
    friend Calculator tehnician_service(Calculator, Placa_de_baza, int, string);
};

class Calculator {
private:
    int memorie_RAM;
    Placa_de_baza a;
    
public:
    Calculator(){
    memorie_RAM = 16;
}
    void setMemorie(int memorie_RAM) {this->memorie_RAM = memorie_RAM;}
    int getMemorie() {return memorie_RAM;}
    void setProcesor(string denumire) {a.setProcesor(denumire);}
    string getProcesor(){return a.getProcesor();}
    friend Calculator tehnician_service(Calculator,Placa_de_baza, int, string);
};


Calculator tehnician_service (Calculator c1, Placa_de_baza p, int numar, string denumire) {
    c1.memorie_RAM = numar;
    c1.setProcesor(denumire);
    return c1;
}

int main() {
    Calculator c;
    Placa_de_baza p;
    int numar;
    string denumire;
    cout << "Valoarea initiala a RAM-ului: " << c.getMemorie() << endl;
    cout << "Valoarea initiala a CPU-ului: " << c.getProcesor() << endl;
    cout << endl << "Introduceti noua valoare pentru RAM: "; cin >> numar;
    cout << "Introduceti noua valoare pentru CPU: "; cin >> denumire;
    c = tehnician_service(c, p, numar, denumire);
    cout << endl << "Noua valoare pentru RAM: " << c.getMemorie() << endl;
    cout << "Noua valoare pentru CPU: " << c.getProcesor() << endl;
}
