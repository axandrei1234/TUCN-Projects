/*Axente Andrei Ex1 Lab08 G2115
 Construiţi o aplicaţie în care clasa OraCurenta are ca atribute private ora, minutele şi secundele şi metode publice de tip set/get pentru atributele clasei. Adaugaţi o functie friend clasei prin care să se poată copia conţinutul unui obiect OraCurenta dat ca si parametru, într-un alt obiect instanţă a aceleiaşi clase care va fi returnat de functie, ora fiind insa modificata la Greenwich Mean Time. Utilizati timpul curent al calculatorului.*/

#include <iostream>
#include <ctime>
using namespace std;

class OraCurenta {
private:
    int ora;
    int minute;
    int secunde;
public:
    void setOra(int ora) {this->ora = ora;}
    int getOra() {return ora;}
    
    void setMinute(int minute) {this->minute = minute;}
    int getMinute() {return minute;}
    
    void setSecunde(int secunde) {this->secunde = secunde;}
    int getSecunde() {return secunde;}
    
    void oracur() {
        time_t curr_time;
        curr_time = time(NULL);
        tm *tm_local = localtime(&curr_time);
        setOra(tm_local->tm_hour);
        setMinute(tm_local->tm_min);
        setSecunde(tm_local->tm_sec);
        cout << "Ora curenta este " << getOra() << ":" << getMinute() << ":" << getSecunde() << endl;
    }
    
    friend OraCurenta GMT (OraCurenta);
    
};

OraCurenta GMT (OraCurenta o1) {
    OraCurenta o2;
    if (o1.getOra()==0)
        o2.setOra(o1.getOra()-3+24);
    if (o1.getOra()==1)
        o2.setOra(o1.getOra()-3+23);
    if (o1.getOra()==2)
        o2.setOra(o1.getOra()-3+22);
    o2.setOra(o1.getOra()-3);
    o2.setMinute(o1.getMinute());
    o2.setSecunde(o1.getSecunde());
    return o2;
}

int main() {
    OraCurenta o1, o2;
    o1.oracur();
    o2 = GMT(o1);
    cout << "Ora dupa GMT este " << o2.getOra() << ":" << o2.getMinute() << ":" << o2.getSecunde() << endl;
    cout << endl;
}
