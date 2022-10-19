/*Axente Andrei Ex10 Lab09 G2115
 Definţi o clasă numită Number care are o variabilă private de tip double. Clasa mai conţine un constructor explicit vid și unul cu un parametru şi o metodă accesor care afişează valoarea variabilei din clasă. Scrieţi o clasă numită Mathemathics, care supraîncarcă operatorii specifici operațiilor aritmetice elementare (+, -, *, /). Clasa are ca atribut un obiect instanțiat din prima clasa. Operațiile artimetice se efectuează asupra datelor obținute din obiectul de tip Number.*/

#include <iostream>
using namespace std;

class Number {
private:
    double numar;
public:
    Number(){}
    Number(double numar) {this->numar = numar;}
    double getNumar(){return numar;}
    friend class Mathematics;
};

class Mathematics {
private:
    double res;
public:
    double getRes() {return res;}
    Mathematics operator+(const Number& n1) {
        Mathematics rezultat;
        rezultat.res += n1.numar;
        return rezultat;
    }
    Mathematics operator-(const Number& n1) {
        Mathematics rezultat;
        rezultat.res -= n1.numar;
        return rezultat;
    }
    Mathematics operator*(const Number& n1) {
        Mathematics rezultat;
        rezultat.res *= n1.numar;
        return rezultat;
    }
    Mathematics operator/(const Number& n1) {
        Mathematics rezultat;
        rezultat.res /= n1.numar;
        return rezultat;
    }
};

int main() {
    Number n1(10.23);
    Mathematics m1;
    m1 = m1 + n1;
    cout << m1.getRes() << endl;
    m1 = m1 - n1;
    cout << m1.getRes() << endl;
    m1 = m1 * n1;
    cout << m1.getRes() << endl;
    m1 = m1 / n1;
    cout << m1.getRes() << endl;
}
