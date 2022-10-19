/*Axente Andrei Ex5 Lab10 G2115
 Adaugaţi în clasa derivată din programul anterior o metodă care calculează înalţimea triunghiului. Apelati metoda folosind un obiect adecvat.*/

#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
protected:
    int lat1;
    int lat2;
    int lat3;
    int perim() {return lat1+lat2+lat3;}
public:
    Triangle(int lat1 = 1, int lat2 = 2, int lat3 = 3) {
        this->lat1 = lat1;
        this->lat2 = lat2;
        this->lat3 = lat3;
    }
    int getPerim() {return perim();}
    void setLat1(int lat1) {this->lat1 = lat1;}
    void setLat2(int lat2) {this->lat2 = lat2;}
    void setLat3(int lat3) {this->lat3 = lat3;}
};

class Triangle_Extended : public Triangle {
public:
    float sp() {return (float)perim()/2;}
    float aria() {return sqrt(sp()*(sp()-lat1)*(sp()-lat2)*(sp()-lat3));}
    double radical = 0.5 * sqrt((lat1 + lat2 + lat3)*(lat2 + lat3 - lat1) * (lat1 - lat2 + lat3)*(lat1 + lat2 - lat3));
    double inaltime() {return radical / lat1;}
};

int main() {
    Triangle t1;
    int nr1,nr2,nr3;
    cout << "Introduceti valorile pe care le au laturile triunghiului: ";
    cin >> nr1 >> nr2 >> nr3;
    if (nr1 + nr2 < nr3 && nr1 + nr3 < nr2 && nr2 + nr3 < nr1) {
        cout << "Valorile introduse nu formeaza un triunghi!" << endl;
        return 1;
    }
    t1.setLat1(nr1);
    t1.setLat2(nr2);
    t1.setLat3(nr3);
    cout << "Perimetrul triunghiului este: " << t1.getPerim() << endl;
    Triangle_Extended t2;
    cout << "Aria triunghiului este: " << t2.aria();
    cout << "Inaltimea triunghiului este: " << t2.inaltime();
}

