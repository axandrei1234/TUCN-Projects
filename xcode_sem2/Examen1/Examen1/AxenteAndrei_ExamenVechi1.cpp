#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#define parametru 20
using namespace std;



class Oras {
protected:
    string nume;
    int nr_locuitori;
public:
    Oras(string n, int loc) : nume{n}, nr_locuitori{loc} {}
     
    void setNume(string nume) {this->nume = nume;}
    string getNume() {return nume;}
    
    void setNrLocuitori(int nr_locuitori) {this->nr_locuitori = nr_locuitori;}
    int getNrLocuitori() {return nr_locuitori;}
    
    virtual int diferenta(int nr) { return abs(nr_locuitori - nr);}
    ~Oras() {}
};

class Metropola : public Oras {
private:
    int suprafata;
public:
    Metropola(int sup, string nume, int nr_locuitori) : Oras(nume, nr_locuitori), suprafata{sup} {}
    void setSuprafata(int suprafata) {this->suprafata = suprafata;}
    int getSuprafata() {return suprafata;}
    int diferenta (int nr) override {return abs(suprafata - nr);}
    float densitate() {return (float)nr_locuitori / suprafata;}
};

ostream &operator<<(ostream &stream, Metropola m) {
    stream << "Nume metropola: " << m.getNume()<< endl;
    stream << "Numar locuitori: " << m.getNrLocuitori() << endl;
    stream << "Suprafata: " << m.getSuprafata() << endl;
    return stream;
}

int main() {
    Oras o("Tandarei", 2000);
    Metropola m1(10, "Braila", 1000);
    Metropola m2(20, "Galati", 2000);
    Metropola m3(30, "Taranesti", 3000);
    Oras *p = &o;
    cout << "Nume oras: " << p->getNume() << endl;
    cout << "Numar locuitori: " << p->getNrLocuitori() << endl;
    cout << "Diferenta nrloc: " << p->diferenta(parametru) << endl;
    p=(Metropola*)&m1;
    static_cast<Metropola*>(p)->densitate();
    cout << "Nume metropola: " << p->getNume() << endl;
    cout << "Numar locuitori: " << p->getNrLocuitori() << endl;
    cout << "Diferenta metropola m1: " << p->diferenta(parametru) << endl;
    p=(Metropola*)&m2;
    cout << "Diferenta metropola m2:" << p->diferenta(parametru) << endl;
    p=(Metropola*)&m3;
    cout << "Diferenta metropola m3: " << p->diferenta(parametru) << endl;
    cout << "Densitate m1: " << m1.densitate() << endl;
    cout << "Densitate m2: " << m2.densitate() << endl;
    cout << "Densitate m3: " << m3.densitate() << endl;
    ofstream file ("test.txt");
    vector <Metropola> met = {m1, m2, m3};
    Metropola mMax = m1;
    for (int i{}; i < 3; i++) {
        if (mMax.densitate() < met.at(i).densitate())
            mMax = met.at(i);
    }
    file << mMax << endl;
}
