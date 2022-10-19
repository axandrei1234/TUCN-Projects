#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

ostream &manip(ostream &);

class Carte {
protected:
    string titlu;
    string autor;
    int domeniu;
public:
    Carte(string t, string a, int d) : titlu{t}, autor{a}, domeniu{d} {}
    
    void setTitlu (string titlu) {this->titlu = titlu;}
    string getTitlu () {return titlu;}
    
    void setAtutor(string autor) {this->autor = autor;}
    string getAutor() {return autor;}
    
    void setDomeniu(int domeniu) {this->domeniu = domeniu;}
    int getDomeniu() {return domeniu;}
    
    virtual void afis() {
        
        cout << manip << titlu << endl;
        cout << manip <<autor << endl;
        cout << manip << domeniu << endl;
    }
};

class Carte_probleme : public Carte {
private:
    int nr_probleme_propuse;
    int nr_probleme_rezolvate;
public:
    Carte_probleme(string t, string a, int d, int pp, int pr) : Carte(t,a,d), nr_probleme_propuse{pp}, nr_probleme_rezolvate{pr} {}
    
    void setNrPP (int nr_probleme_propuse) {this->nr_probleme_propuse = nr_probleme_propuse;}
    int getNrPP() {return nr_probleme_propuse;}
    
    void setNrPR(int nr_probleme_rezolvate) {this->nr_probleme_rezolvate = nr_probleme_rezolvate;}
    int getNrPR() {return nr_probleme_rezolvate;}
    
    virtual void afis() override {
        cout << titlu << endl;
        cout << autor << endl;
        cout << domeniu << endl;
        cout << nr_probleme_propuse << endl;
        cout << nr_probleme_rezolvate << endl;
    }
};

ostream &manip (ostream &stream) {
    stream.width(20);
    stream.setf(ios::left);
    return stream;
}

int main() {
    string sir;
    int nr;
    Carte c("Amintiri din pizda matii" , "Ion Creanga" , 1345);
    Carte_probleme cp("Culegere Matematica Clasa a12-a" , "Cenan Denis Danut" , 1253 , 100 , 1);
    cout << "Date carte: " << c.getTitlu() << endl << c.getAutor() << endl << c.getDomeniu() << endl;
    cout <<"Date carte probleme:  " << cp.getTitlu() << endl << cp.getAutor() << endl << cp.getDomeniu() << endl << cp.getNrPP() << endl << cp.getNrPR() << endl;
    Carte *p;
    p = &c;
    
    cout << endl << "Afisarile datelor Clasei Carte prin pointer!" << endl;
    cout << p->getTitlu() << endl;
    cout << p->getAutor() << endl;
    cout << p->getDomeniu() << endl;
    
    p = &cp;

    cout << endl << "Afisarile datelor Clasei Carte_probleme prin pointer!" << endl;
    cout << p->getTitlu() << endl;
    cout << p->getAutor() << endl;
    cout << p->getDomeniu() << endl;
    cout << static_cast<Carte_probleme*>(p)->getNrPP() << endl;
    cout << static_cast<Carte_probleme*>(p)->getNrPR() << endl;
    
    cout << "Introduceti nume carte: "; cin >> sir;
    c.setTitlu(sir);
    cout << "Introduceti nume autor: "; cin >> sir;
    c.setTitlu(sir);
    cout <<"Introduceti domeniu: "; cin >> nr;
    c.setDomeniu(nr);
    cout << "Noile valori ale aceluiasi obiect sunt!" << endl;
    cout << c.getTitlu() << endl;
    cout << c.getAutor() << endl;
    cout << c.getDomeniu() << endl;
    ofstream file ("test.txt");
    file << c.getTitlu() << endl;
    file << c.getAutor() << endl;
    file << c.getDomeniu() << endl;
}
