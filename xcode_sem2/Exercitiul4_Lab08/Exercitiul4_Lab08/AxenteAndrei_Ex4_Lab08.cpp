/*Axente Andrei Ex4 Lab08 G2115
 Scrieţi o aplicaţie C/C++ care defineşte într-o clasă variabila publică contor var_static de tip static întreg. Aceasta se va incrementa în cadrul constructorului. După o serie de instanţieri, să se afişeze numarul de obiecte create (conţinutul variabilei var_static).*/

#include <iostream>
using namespace std;

class ClasaMea {
private:
    int x;
public:
    static int var_static;
    ClasaMea(int x) {
        this->x = x;
        var_static++;
    }
    int getX() {return x;}
};

int ClasaMea::var_static;

int main() {
    ClasaMea c1(1),c2(3),c3(5);
    cout <<"Numarul de obiecte: " << ClasaMea::var_static << endl;
}
