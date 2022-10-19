/*Axente Andrei Examen PCL sem 2 G2115
 
 Sa se defineasca o clasa Calatorie, cu atributele protected destinatie (sir de caractere) si atributul static an (int). Clasa va contine un constructor cu un parametru, constructor explicit vid, (alternativ – un constructor cu parametru implicit), metode getter pentru atribute si metoda pur virtuala calculPret() – fara parametri, avand tipul returnat double. Atributul static va fi initializat cu valoarea 2022 .
 Clasa Concediu mosteneste public clasa Calatorie si adauga atributele private pret_cazare (double) si pret_calatorie (double). Clasa va contine un constructor cu parametri, unul explicit vid. Clasa mai contine:
 - metoda calculPret()- implementeaza metoda cu acelasi nume mostenita din clasa de baza - calculeaza si returneaza pretul concediului respectiv.
 - metoda statica verificaBuget() – primeste ca parametru un tablou de obiecte de tip Concediu si un buget si verifica daca bugetul este suficient pentru toate calatoriile si afiseaza un mesaj corespunzator. In cazul in care bugetul este insuficient, se va modifica valoarea atributului static prin incrementare.
 Supraincarcati in aceasta clasa operatorul “<<”, a. i. sa permita scrierea unui obiect Concediu intr-un flux de iesire, impreuna si cu pretul total al acelui concediu.
 Scrieti o functie globala care ordoneaza un tablou de obiecte de tip Concediu crescator dupa pret si cele cu acelasi pret sa fie sortate crescator dupa nume (alfabetic).
 In main():
 - Creati un tablou de 5 obiecte de tip Concediu. Initializati aceste obiecte prin
 initializare directa (nu citire de la tastatura).
 - Declarati un pointer de tipul clasei Calatorie, cu care accesati fiecare obiect
 din tabloul creat si afisati prin intermediul pointerului destinatia si pretul total al fiecarui concediu – informatiile fiecarui concediu vor fi afisate pe rand nou. Preturile se vor afisa cu 2 zecimale.
 - Cititi de la tastatura valoarea bugetului si verificati daca acopera pretul pentru toate concediile. Afisati mesaje corespunzatoare si apoi valoarea atributului “an”.
 - Ordonati tabloul de obiecte de tip Concediu si scrieti apoi obiectele din tablou in fisierul “concedii.txt”, fiecare obiect pe linie noua.
*/

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
