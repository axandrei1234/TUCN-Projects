/*Axente Andrei Ex6 Lab06 G2115
 Să se scrie o aplicaţie C++ care implementează o clasă numită Triunghi. Clasa cuprinde atributele private pentru laturile a, b, c de tip int, un constructor cu parametrii, metode setter si getter adecvate. Calculați aria și perimetrul prin metode specifice clasei. Scrieți o metodă care să indice dacă triunghiul este dreptunghic sau nu. Definiti o metoda private cu parametrii in clasa care permite verificarea condiției ca laturile să formeze un triunghi. Ea va fi folosita si
 de metodele setter.*/
#include <iostream>
#include <cmath>
using namespace std;

class Triunghi {
private:
    int a,b,c;
public:
    Triunghi(int x=0, int y=0, int z=0) {
        a=x;
        b=y;
        c=z;
    }
    void setA(int x) {a=x;}
    int getA() {return a;}
    
    void setB(int y) {b=y;}
    int getB() {return b;}
    
    void setC(int z) {c=z;}
    int getC() {return c;}
    
    void citire() {
        int latura;
        cout << "Introduceti valoarea pentru prima latura: "; cin >> latura;
        setA(latura);
        cout << "Introduceti valoarea pentru a doua latura: "; cin >> latura;
        setB(latura);
        cout << "Introduceti valorea pentru a treia latura: "; cin >> latura;
        setC(latura);
        cout << endl;
    }
    
    void afisare() {
        cout << "Latura1: " << getA() << endl;
        cout << "Latura2: " << getB() << endl;
        cout << "Latura3: " << getC() << endl;
        cout << endl;
    }
    void verificare() {
        if (sqrt(a*a+b*b)==c || sqrt(a*a+c*c)==b || sqrt(b*b+c*c)==a)
            cout << "Trinunghiul este dreptunghic!" << endl;
        else
            cout << "Triunghiul nu este dreptunghic!" << endl;
    }
    
    int perimetru() {
        if (a+b>c && a+c>b && b+c>a)
            return a+b+c;
        else
            exit (1);
    }
    float arie () {
        float sp = (float)perimetru()/2;
        return (float)sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    }
};

int main() {
    Triunghi *t;
    t = new Triunghi();
    t->citire();
    t->afisare();
    cout << "Perimetrul triunghiului este: " << t->perimetru() << endl;
    cout << "Aria triunghiului este: " << t->arie() << endl;
    t->verificare();
    delete t;
}

