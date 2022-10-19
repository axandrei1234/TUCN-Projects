/*Axente Andrei Ex6 Lab08 G2115
 Scrieţi o aplicaţie C/C++ în care să implementați clasa Punct cu atributele private x si y. Implementați o funcție friend care să calculeze aria și perimetrul a doua forme geometrice definite de două puncte, considerând că aceasta are doua puncte ca si parametrii P0(x0,y0) și P1 (x1, y1). Adăugați funcției un parametru întreg figura prin care să indicați cele doua figuri geometrice ce sunt definite de punctele (x0, y0) si (x1, y1). Astfel, pentru un cerc, figura=1, coordonatele (x0, y0) și (x1, y1) vor reprezenta două puncte complementare pe cerc (diametrul). Dacă este triunghi dreptunghic, punctele definesc ipotenuza iar figura va fi =2; Celelalte laturi ale triunghiului se vor determina pornind de la cele doua puncte. Coordonatele punctelor si apoi selecția figurii geometrice se va realiza introducând de la tastatura parametrii.*/
#define pi 3.14
#include <iostream>
#include <cmath>
using namespace std;

class Punct {
private:
    int x;
    int y;
public:
    void setX(int x) {this->x=x;}
    int getX() {return x;};
    
    void setY(int y) {this->y=y;}
    int getY() {return y;}
    friend void calcul (Punct, Punct, int);
    Punct cateta (Punct P01,Punct P02) {
        Punct P03;
        if (P01.getX() < P02.getX()) {
            P03.setX(P01.getX());
            P03.setY(P02.getY());
        }
        if (P01.getX() > P02.getX()) {
            P03.setX(P02.getX());
            P03.setY(P01.getY());
        }
        if (P01.getX() == P02.getX()) {
            P03.setX(0);
            P03.setY(P02.getX()-P02.getY());
        }
        if (P01.getY() == P02.getY()) {
            P03.setX(P02.getX()-P01.getX());
            P03.setY(0);
        }
        return P03;
    }
};

void calcul (Punct P01, Punct P02, Punct P03, int figura) {
    
    float lungimeP;
    lungimeP = sqrt((P02.getX()-P01.getX())*(P02.getX()-P01.getX())+(P02.getY()-P01.getY())*(P02.getY()-P01.getY()));
    
    if (figura == 1) {
        cout << "Aria cercului este: " << pi * lungimeP/2 * lungimeP/2 << endl;
        cout << "Lungimea cercului este: " << 2 * pi * lungimeP/2 << endl;
    }
    else if (figura == 2) {
        P03 = P01.cateta(P01, P02);
       float lungimeC1 = sqrt((P03.getX()-P01.getX())*(P03.getX()-P01.getX())+(P03.getY()-P01.getY())*(P03.getY()-P01.getY()));
       float lungimeC2 = sqrt((P03.getX()-P02.getX())*(P03.getX()-P02.getX())+(P03.getY()-P02.getY())*(P03.getY()-P02.getY()));
        cout << "Aria triunghiului dreptunghic este: " << (lungimeC1 * lungimeC2) / 2 << endl;
        cout << "Perimetrul triunghiului dreptunghic este: " << lungimeC1 + lungimeC2 + lungimeP << endl;
    }
}

int main () {
    Punct P01, P02, P03;
    int numar;
    int figura;
    cout << "Ce valoarea sa aiba x1: "; cin >> numar;
    P01.setX(numar);
    cout << "Ce valoare sa aiba y1: "; cin >> numar;
    P01.setY(numar);
    cout << "Ce valoare sa aiba x2: "; cin >> numar;
    P02.setX(numar);
    cout << "Ce valoare sa aiba y2: "; cin >> numar;
    P02.setY(numar);
    if (P01.getX() == P02.getX() && P01.getY() == P02.getY()) {
        cout << "Nu se pot calcula aria si perimetrul triunghiului dreptunghic sau a cercului" << endl;
        exit(1);
    }
    cout << "Alegeti ce figura doriti sa aveti (1=cerc, 2=triunghi): ";
    cin >> figura;
    while (figura != 1 && figura != 2) {
        cout << "Valorile trebuie sa fie 1 sau 2! Alegeti alta valoare: ";
        cin >> figura;
    }
    calcul(P01, P02, P03, figura);
}
