/*Axente Andrei Ex12 Lab09 G2115
 Folosind aceeasi clasa Fractie, definiti supraincarcarea operatorilor compusi de asignare si adunare, scadere, inmultire si impartire(+=, -=, *=, /=) cu metode membre. Supraincarcati operatorii de incrementare si decrementare post/prefixati care aduna/scade valoarea 1 la un obiect de tip Fractie cu functii membre (metode). Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Realizați o copie a lor in alte doua obiecte. Efectuați operațiile compuse implementate prin metodele clasei folosind copiile obiectelor, asignând rezultatele obtinute la alte 4 obiecte. Afișați cele 4 rezultate, iar apoi afișați rezultatele după incrementare/decrementare post/prefixat la cele 4 obiecte obținute.*/

#include <iostream>
#include <vector>
using namespace std;

class Fractie {
    
    
    
    
    
    
    
    
    
private:
    int a;//numarator
    int b;//numitor
    int GCD (int a, int b) {
            if (!b)
                return a;
        return GCD(b,a%b);
            }
        
    
    
    
    
    
    
    
    
public:
    Fractie() {
        
        
        a = 0;
        
        
        
        b = 1;
    }
    
    
    Fractie(int a, int b)
    
    
    {
        this->a = a;
        
        
        this->b = b;
        
        
    }
    void setA(int a) {this->a=a;}
    int getA() {return a;}
    
    void setB(int b) {this->b=b;}
    int getB() {return b;}

    
    
    
    
    
    
    
    
    Fractie simplifica() {
        Fractie f2;
        int cmmdc = GCD(a,b);
        if (cmmdc == 1) {
            cout << "Fractia este ireductibila!" << endl;
            exit (1);
        }
        
        
        
        
        
        
        
        
        else
        {
            a = a / cmmdc;
            
            
            
            
            b = b / cmmdc;
            f2.setA(a);
            
            
            
            f2.setB(b);
            return f2;
        }
    }
    Fractie aduna_fractie(Fractie f2) {
        Fractie f3;
        f2.b = f2.b * b;
        f2.a = f2.a * b;
        a += f2.a;
        f3.setA(a);
        f3.setB(f2.b);
        return f3;
    
    }
    void citire() {
        int numarator;
        int numitor;
        cout << "Introduceti o valoare pentru numarator: "; cin >> numarator;
        setA(numarator);
        cout << "Introduceti o valoare pentru numitor: "; cin >> numitor;
        setB(numitor);
    }
};

int main() {
    Fractie f1,f2,f3;
    f1.citire();
    f2 = f1.simplifica();
    f3 = f1.aduna_fractie(f2);
    cout << "Fractia simplificata este: " << f2.getA() << "/" << f2.getB() << endl;
    cout << "Cele 2 fractii adunate au valoarea: " << f3.getA() << "/" << f3.getB() << endl;
}

