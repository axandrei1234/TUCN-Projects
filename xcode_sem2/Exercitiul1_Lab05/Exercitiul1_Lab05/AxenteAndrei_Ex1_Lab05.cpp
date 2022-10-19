/*Axente Andrei Ex1 Lab05
 Să se scrie o aplicaţie C/C++ care foloseşte o structură de date cu numele Scerc care conţine raza ca şi o variabilă de tip întreg. Într-un program C/C++, declaraţi două variabile c1, c2 de tip Scerc şi calculaţi aria şi circumferinţa lor pentru valori ale razei introduse de la tastatură. Aceleaşi cerinţe vor fi implementate în aceiasi aplicaţie folosind o clasă numită Cerc cu atributul raza de tip private, clasă ce va conţine pe lângă metodele de calcul ale ariei şi perimetrului un constructor explicit cu parametru, un destructor. Introduceţi in clasă o metodă de tip accesor, getRaza(), care permite accesul la data privată raza si pe care sa o folositi pentru a afisa in main( ) raza obiectelor.
 Extindeţi aplicaţia astfel încât să definiţi mai multe obiecte de tip Cerc la care să accesaţi
 metodele specifice folosind obiectele instanţiate, pointeri la obiecte, referinţe la obiecte.*/

#include <iostream>
using namespace std;
/*struct SCerc {
    int raza{};
};
float ariaC(SCerc c) {
    return 2*3.14f*c.raza;
}

int main() {
    SCerc b;
    b.raza = 10;
    cout <<"Raza = " << b.raza << endl;
    cout <<"Aria cerc = " << ariaC(b) << endl;
}
*/

class Cerc {
    int raza;
public:
    float aria() {
        return 3.14f*raza*raza;
    }
    float circumf() {
        return 2*3.14f*raza;
    }
    void setRaza(int a){
        if (a>0)
            raza = a;
        else
            raza = 1;
    }
    int getRaza();
    ~Cerc() {
        cout << "DESTRUCTOR" << endl;
    }
};
int main() {
    Cerc c;
    c.setRaza(5);
    cout << "Raza= " << c.getRaza() << endl;
    cout << "Aria= " << c.aria() << endl;
    cout << "Circumferinta= " << c.circumf() << endl;
}

int Cerc::getRaza() {
    return raza;
}
