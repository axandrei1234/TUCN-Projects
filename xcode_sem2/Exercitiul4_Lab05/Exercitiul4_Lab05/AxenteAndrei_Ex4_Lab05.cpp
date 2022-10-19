/*Axente Andrei Ex4 Lab05 G2115
 Să se scrie programul care implementează clasa Numar cu un atribut de tip int val şi care, în
 cadrul funcţiei main(), declară un obiect de tipul clasei şi apoi un pointer la acesta, prin intermediul cărora se va afişa pe ecran rezultatul adunării a două numere de tip Numar cu valorile preluate de la tastatură in cadrul unor obiecte Numar. Implementati metoda int suma_nr(Numar) care realizeaza suma în cadrul clasei şi o returneaza ca un int, metoda care insumeaza cele doua obiecte (curent si parametru). Implementati metoda in cadrul clasei si alta metoda cu acelas scop, dar nume diferit, in afara clasei.*/

#include <iostream>
using namespace std;

class Numar {
private:
    int val;
public:
    int getInt() {return val;}
    
    void setInt(int numar) {val = numar;}
    
    int suma_nr (Numar *n2) {
        return val+n2->val;
    }
    int suma_nr1 (Numar *n2);
};

int main() {
    Numar n1, *n2;
    n2 = new Numar ();
    n1.setInt(10);
    n2->setInt(15);
    cout << "Primul obiect are valoarea: " << n1.getInt() << endl;
    cout << "Al 2-lea obiect are valoarea: " << n2->getInt() << endl;
    cout << "Suma dintre cele 2 obiecte este(facuta in clasa): " << n1.suma_nr(n2) << endl;
    cout << "Suma dintre cele 2 obiecte este(facuta inafara clasei): " <<n1.suma_nr1(n2) << endl;
}

int Numar::suma_nr1(Numar *n2) {
    return val+n2->val;
}

