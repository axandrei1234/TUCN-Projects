/*Axente Andrei Ex8 Lab07 G2115
 Consideram clasa Fractie care are doua atribute intregi private a si b pentru numarator si numitor, doua metode de tip set( ) respectiv get( ) pentru atributele clasei publice si o metoda simplifica( ) publica care simplifica obiectul curent Fractie de apel, returnând un alt obiect simplificat. Metoda simplifica( ) va apela o metoda private cmmdc( ) pentru simplificarea fracției. Definiți un constructor explicit fara parametri care initializeaza a cu 0 si b cu 1, si un constructor explicit cu doi parametri care va fi apelat dupa ce s-a verificat posibilitatea definirii unei fractii (b!=0). Definiți o metoda aduna_fractie( ) care are ca si parametru un obiect de tip Fractie si returneaza suma obiectului curent de apel cu cel dat ca si parametru, ca si un alt obiect de tip Fractie. Analog definiti metode pentru scadere, inmultire si impartire. Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Afisati atributele initiale si cele obtinute dupa apelul metodei simplifica( ). Efectuati operatiile implementate prin metodele clasei si afisati rezultatele.*/

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
