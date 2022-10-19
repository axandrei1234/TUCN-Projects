#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

ostream &manip(ostream&);
 
class Calatorie {
protected:
    string destinatie;
    static int an;
    
public:
    Calatorie(string d) : destinatie{d}{}
    Calatorie() {destinatie = nullptr; an++;}
   
    
    
    void setDestinatie(string destinatie="necunoscut") {this->destinatie = destinatie;}
    string getDestinatie() {return destinatie;}
    
    static int getAn() {return an;}
    
    virtual double calculPret()=0;
    ~Calatorie() {}
};

int Calatorie:: an=2022;

class Concediu : public Calatorie {
private:
    double pret_cazare;
    double pret_calatorie;
public:
    Concediu(string d, double pcaz, double pcal) : Calatorie(d), pret_cazare{pcaz}, pret_calatorie{pcal} {}
    Concediu() {destinatie=nullptr; pret_cazare=0; pret_calatorie=0; an++;}
    
        double calculPret() override {
        return pret_cazare + pret_calatorie;
    }
    static void VerificaBuget(vector <Concediu> calcul, double buget) {
        double calcultotal=0;
        for (int i{}; i<5; i++)
            calcultotal+=calcul.at(i).calculPret();
        if (calcultotal > buget) {
            cout << "Bugetul este suficient pentru toate calatoriile!" << endl;
        }
        else {
           an++;
            cout << "an: " << an << endl;
        }
    }
    
    
    friend ostream &operator<<(ostream&stream, Calatorie &c);
    
    ~Concediu() {}
};


int main() {
    
    double buget;
    
    
    Concediu c1("Galati", 100, 200.3);
    Concediu c2("Iasi", 132.34, 351.2);
    Concediu c3("Vaslui", 124.2, 100.2);
    Concediu c4("Cluj", 30.2, 201.20);
    Concediu c5("Bucuresti", 301, 31.3);
    
    vector <Concediu> con = {c1, c2, c3, c4, c5};
    Calatorie *p;
    p = (Concediu*) &c1;
    cout << c1;
    p = (Concediu*) &c2;
    cout << c2;
    p = (Concediu*) &c3;
    cout << c3;
    p = (Concediu*) &c4;
    cout << c4;
    p = (Concediu*) &c5;
    cout << c5;
    
    cout << "Introduceti bugetul alocat: "; cin >> buget;
    c1.VerificaBuget(con, buget);
    
    ofstream file ("concedii.txt");
    for (int i{}; i<5; i++)
        file << con.at(i) << endl;
}


ostream &operator<<(ostream &stream, Calatorie &c) {
    stream << "Destinatie: " << manip << c.getDestinatie() << endl;
    stream << "an: " << manip <<c.getAn() << endl;
    stream << "Pret total " << manip << c.calculPret() << endl;
    return stream;
}

ostream &manip(ostream &stream) {
    stream.width(20);
    stream.setf(ios::left);
    return stream;
}


