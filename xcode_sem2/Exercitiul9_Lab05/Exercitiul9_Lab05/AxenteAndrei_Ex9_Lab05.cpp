/*Axente Andrei Ex9 Lab05
 Declarati o clasa Fractie care are doua atribute intregi de tip private a si b pentru numarator si numitor. Definiti doua metode de tip set() respectiv get() pentru fiecare din atributele clasei. Instantiati doua obiecte de tip Fractie si afisati atributele initiale si cele obtinute dupa folosirea metodelor set(). Definiti o metoda simplifica() apelata cu un obiect pentru care au fost apelate metodele de tip set(), care determina divizorii numitorului si numaratorului, ii afiseaza si realizeaza simplificarea fractiei, afisand in metoda si rezultatul obtinut (noua fractie numarator/numitor).*/

#include <iostream>
#include <numeric>
using namespace std;

class Fractie {
private:
    int a,b;
public:
    void setA(int x) {a=x;}
    int getA() {return a;}
    
    void setB(int y) {b=y;}
    int getB() {return b;}
        
    void simplifica() {
        cout << "A se imparte la: ";
        for (int i{}; i<=a; i++) {
            if (a % i == 0)
                cout << i << " ";
        }
        cout << endl;
        cout << "B se imparte la: ";
        for (int i{}; i<=b; i++) {
            if (b % i == 0)
                cout << i << " ";
        }
        cout << endl;
        if (b!=0)
            cout << "Factia dintre a si b are ca rezultat: " << (float)a/b << endl;
        else
            cout << "Fractia nu se poate imparti deoarece are numitorul 0!" <<endl;
        int d;
        d = gcd(a,b);
        cout << "Fractia simplificata este: " << a/d << "/" << b/d << endl;
    }
};

int main() {
    Fractie fr1, fr2;
    int nr;
    cout << "x1: ";
    cin >> nr;
    fr1.setA(nr);
    
    cout << "y1: ";
    cin >> nr;
    fr1.setB(nr);
    
    cout << "x2: ";
    cin >> nr;
    fr2.setA(nr);
    
    cout << "y2: ";
    cin >> nr;
    fr2.setB(nr);
    
    fr1.simplifica();
    cout << endl;
    fr2.simplifica();
}

