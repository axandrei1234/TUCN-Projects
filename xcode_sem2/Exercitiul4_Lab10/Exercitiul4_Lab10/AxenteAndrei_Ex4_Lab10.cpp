/*Axente Andrei Ex4 Lab10 G2115
 Definiţi o clasă numita Triangle care are 3 atribute protected pentru laturi si o metoda care calculează perimetrul unui triunghi ale cărui laturi sunt citite de la tastatura (folosite de un constructor adecvat) şi apoi o clasă derivata in mod public din Triangle, Triangle_extended, care în plus, calculează şi aria triunghiului. Folosind obiecte din cele doua clase apelati metodele specifice. Verificati inainte de instantiere posibilitatea definirii unui triunghi.*/

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
}
