/*Axente Andrei Ex4 Lab06 G2115
 Să se scrie o clasă care are ca variabilă privată un câmp de tip data, definit într-o structură externă clasei (zi – int, luna – int, an - int). Clasa conține metode mutator/setter și accesor/getter (publice) pentru informația privată, ca si structura de tip data, pentru fiecare camp din structura. In clasă se mai află doua metode publice care:
 - testează validitatea datei stocate;
 - scrie într-un fișier toate datele din anul curent care preced (cronologic) data stocată în
 clasă considerand doar atributul an ca fiind variabil;*/

#include <iostream>
#include <fstream>
using namespace std;

struct calendar {
    int zi;
    int luna;
    int an;
};

class Verificare {
private:
    calendar c;
public:
    void setZi (int a) {c.zi=a;}
    int getZi () {return c.zi;}
    
    void setLuna (int a) {c.luna=a;}
    int getLuna() {return c.luna;}
    
    void setAn (int a) {c.an=a;}
    int getAn() {return c.an;}
    
    void testare() {
        if (c.an >= 1000 && c.an <= 3000) {
            if ((c.luna == 1 || c.luna == 3 || c.luna == 5 || c.luna == 7 || c.luna == 8 || c.luna == 10 || c.luna == 12) && c.zi > 0 && c.zi <= 31)
                cout << "Data este valida" << endl;
            else
                if ((c.luna == 4 || c.luna == 6 || c.luna == 11)  && c.zi > 0 && c.zi <=30)
                    cout << "Data este valida" << endl;
            else
                if (c.luna == 2) {
                    if ((c.an % 400 == 0 || (c.an % 100 != 0 && c.an % 4 == 0)) && c.zi > 0 && c.zi <= 29)
                        cout << "Data este valida" << endl;
                    else
                        if (c.zi > 0 && c.zi <= 28)
                            cout << "Data este valida" << endl;
                    else
                        cout << "Data nu este valida" << endl;
                }
            else
                cout << "Data nu este valida" << endl;
        }
        else
            cout << "Data nu este valida" << endl;
    }
};

int main() {
    Verificare v;
    int numar;
    cout << "zi: "; cin >> numar;
    v.setZi(numar);
    cout << "luna: "; cin >> numar;
    v.setLuna(numar);
    cout << "an: "; cin >> numar;
    v.setAn(numar);
    v.testare();
}
