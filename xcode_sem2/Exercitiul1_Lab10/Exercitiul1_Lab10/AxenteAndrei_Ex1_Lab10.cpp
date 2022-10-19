/*Axente Andrei Ex1 Lab10 G2115
 Implementaţi programul prezentat în exemplul 3 şi examinaţi eventualele erori date la compilare daca exista prin eliminarea comentariilor. Modificaţi programul astfel încât să se poată accesa din funcţia main( ), prin intermediul obiectului obiect_derivat, şi metodele aduna( ) şi scade( ) din clasa de baza pastrand mostenirea de tip private.*/

#include <iostream>
using namespace std;

class Baza {
protected:
    int a;
    int b;
public:
   Baza() {a=1; b=1;}
    
    void setA(int a) {this->a = a;}
    int getA() {return a;}
    
    void setB(int b) {this->b = b;}
    int getB() {return b;}
    
    int aduna() {return a+b;}
    int scade() {return a-b;}
};

class Derivata : private Baza {
public:
    int inmulteste() {return a*b;}
    int bazaAdunare() {return aduna();}
    int bazaScadere() {return scade();}
};

int main() {
    Baza obiect_baza;
    cout << endl << "Afis din baza (val initiale): " << obiect_baza.getA() << " " << obiect_baza.getB() << endl;
    cout << endl << "Suma este (cu val intiale din baza): " << obiect_baza.aduna();
    cout << endl << "Scaderea este (cu val initiale din baza): " << obiect_baza.scade();
    obiect_baza.setA(2);
    obiect_baza.setB(3);
    cout << endl << "Afis din baza (modificat): " << obiect_baza.getA() << " " << obiect_baza.getB() << endl;
    cout << endl << "Suma: " << obiect_baza.aduna();
    cout << endl << "Scaderea: " << obiect_baza.scade();
    Derivata obiect_derivat;
    cout << endl << "Produsul este (din derivat cu val. init.): " << obiect_derivat.inmulteste() << endl;
    cout << endl << "Suma este (din derivat cu val init, baza): " << obiect_derivat.bazaAdunare() << endl;
    cout << endl << "Scaderea este (din derivat cu val init, baza): " << obiect_derivat.bazaScadere() << endl;
}
