/*Axente Andrei Ex5 Lab08 G2115
 Rezolvaţi problema 4 în cazul în care variabila statică este de tip private. Definiţi o metodă accesor care returnează valoarea contorului. Analizati cazul in care metoda accesor e statica sau nestatica si modul in care e apelata.*/

#include <iostream>
using namespace std;

class ClasaMea {
private:
    int x;
    static int var_static;
public:
    static int getVar() {return var_static;}
    ClasaMea(int x) {
        this->x = x;
        var_static++;
    }
    int getX() {return x;}
};

int ClasaMea::var_static;

int main() {
    ClasaMea c1(1),c2(3),c3(5);
    cout <<"Numarul de obiecte: " << ClasaMea::getVar() << endl;
}

