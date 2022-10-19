/*Axente Andrei Ex5 Lab05 G2115
 Să se definească o clasă care implementează metodele:
 - int plus(int x, int y), care returnează suma valorilor primite la apelul metodei;
 - int minus(int x, int y), care returnează diferenta valorilor primite la apelul metodei;
 - int inmultit(int x, int y), care returnează produsul valorilor primite la apelul metodei;
 - float impartit(int x, int y), care returnează catul valorilor primite la apelul metodei;
 şi apoi să se scrie aplicaţia care utilizează această clasă. Considerati si cazul in care in cadrul clasei aveti atributele de tip int x si y, caz in care metodele nu vor mai avea parametrii. Observaţie: În cazul împărţirii, trebuie verificată validitatea operaţiei (împărţitor diferit de zero). În cazul în care operaţia este imposibilă, trebuie afişat un mesaj de eroare.*/

#include <iostream>
using namespace std;

class Calcul {
public:
    int plus(int x, int y) {
        return x+y;
    }
    int minus(int x, int y) {
        return x-y;
    }
    int inmultit (int x, int y) {
        return x*y;
    }
    float impartit (int x, int y) {
        if (y == 0)
            exit(1);
        else
            return (float)x/y;
        
    }
};

class Calcul1 {
private:
    int x;
    int y;
public:
    void setX(int a) {x=a;}
    
    void setY(int b) {y=b;}
    
    int plus1() {
        return x+y;
    }
    int minus1() {
        return x-y;
    }
    int inmultire1() {
        return x*y;
    }
    float impartire1() {
        if (y==0) {
            cout << "Nu se poate calcula!" << endl;
            return 1;
        }
        else
            return (float)x/y;
    }
};

int main() {
    Calcul c1;
    Calcul1 c2;
    int x,y;
    cout << "Introduceti o valoare pentru primul numar: ";
    cin >>x;
    cout<< "Introduceti o valoare pentru al doilea numar: ";
    cin >>y;
    c2.setX(x);
    c2.setY(y);
    cout << "Adunare: " << c1.plus(x,y) << endl;
    cout << "Adunare1: " <<c2.plus1() << endl;
    
    cout << "Scadere: " << c1.minus(x,y) << endl;
    cout << "Scadere1: " << c2.minus1() << endl;
    
    cout << "Inmultire: " << c1.inmultit(x,y) << endl;
    cout << "Inmultire1: " << c2.inmultire1() << endl;
    
    cout << "Impartire: " << c1.impartit(x,y) << endl;
    cout << "Impartire1: " << c2.impartire1() << endl;
}
