/*Axente Andrei Ex8 Lab09 G2115
 Să se scrie programul care utilizează o clasă numită Calculator şi care are în componenţa sa metodele publice supraincarcate:
 - int calcul(int x) care returnează pătratul valorii primite;
 - int calcul(int x, int y) care returnează produsul celor două valori primite;
 - double calcul(int x, int y, int z) care returnează rezultatul înlocuirii în formula f(x,y,z) = (x-y)(x+z)/2. a
 valorilor primite;*/

#include <iostream>
using namespace std;

class Calculator {
private:
    int x;
    int y;
    int z;
public:
    Calculator (int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    int getX() {return x;}
    int getY() {return y;}
    int getZ() {return z;}
    
    int calcul(int x) {
        return x*x;
    }
    
    int calcul (int x, int y) {
        return x*y;
    }
    
    int calcul (int x, int y, int z) {
        return (float)(x-y)*(x+z)/2;
    }
};

int main() {
    Calculator c1(10,2,5);
    cout << c1.calcul(c1.getX()) << endl;
    cout << c1.calcul(c1.getX(), c1.getY()) << endl;
    cout << c1.calcul(c1.getX(), c1.getY(), c1.getZ()) << endl;
}
