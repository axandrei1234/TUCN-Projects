/*Axente Andrei Ex1 Lab06 G2115
 Să se scrie o aplicaţie C++ care implementează o clasă numită PilotF1. Clasa definește variabilele private nume (șir de caractere), echipa (șir de caractere), varsta (int), record (int),
 nr_pole_position (int). Ca membri publici, clasa conține metode accesor/getter și mutator/setter distincte pentru fiecare din atributele clasei.
 In funcția main( ), să se creeze 3 instanțe distincte ale clasei PilotF1 și să se folosească metodele mutator/setter pentru a inițializa datele din fiecare obiect cu informația corespunzătoare citită de la tastatură. Folosind metodele accesor/getter, să se afișeze toate datele pilotului cu cel mai bun record.*/

#include <iostream>
#include <string>
using namespace std;

class PilotF1 {
private:
    string nume;
    string echipa;
    int varsta;
    int record;
public:
    void setNume(string a) {nume = a;}
    string getNume() {return nume;}
    
    void setEchipa(string b) {echipa = b;}
    string getEchipa() {return echipa;}
    
    void setVarsta(int c) {varsta = c;}
    int getVarsta() {return varsta;}
    
    void setRecord(int d) {record = d;}
    int getRecord() {return record;}
    
    void afisareDate() {
        cout << "Nume: " << getNume() << endl;
        cout << "Echipa: " << getEchipa() << endl;
        cout << "Varsta: " << getVarsta() << endl;
        cout << "Record: " << getRecord() << endl;
        cout << endl;
    }
};

int main() {
    PilotF1 *p1,*p2,*p3;
    p1 = new PilotF1();
    p2 = new PilotF1();
    p3 = new PilotF1();
    string sir;
    int numar;
    
    cout << "NumeP1: "; cin >> sir;
    p1->setNume(sir);
    cout << "Echipa: "; cin >> sir;
    p1->setEchipa(sir);
    cout << "Varsta: "; cin >> numar;
    p1->setVarsta(numar);
    cout << "Record: "; cin >> numar;
    p1->setRecord(numar);
    
    cout << endl;
    
    cout << "NumeP2: "; cin >> sir;
    p2->setNume(sir);
    cout << "Echipa: "; cin >> sir;
    p2->setEchipa(sir);
    cout << "Varsta: "; cin >> numar;
    p2->setVarsta(numar);
    cout << "Record: "; cin >> numar;
    p2->setRecord(numar);
    
    cout << endl;
    
    cout << "NumeP3: "; cin >> sir;
    p3->setNume(sir);
    cout << "Echipa: "; cin >> sir;
    p3->setEchipa(sir);
    cout << "Varsta: "; cin >> numar;
    p1->setVarsta(numar);
    cout << "Record: "; cin >> numar;
    p3->setRecord(numar);
    
    cout << endl;
    
    cout << "Pilotul cu cel mai bun record este: " << endl;
    if (p1->getRecord() < p2->getRecord() && p1->getRecord() < p3->getRecord())
        p1->afisareDate();
    else
        if (p2->getRecord() < p1->getRecord() && p2->getRecord() < p3->getRecord())
            p2->afisareDate();
    else
        p3->afisareDate();
    delete p1;
    delete p2;
    delete p3;
}
