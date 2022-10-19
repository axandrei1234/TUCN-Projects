/*Axente Andrei Ex6 Lab05 G2115
 Să se creeze o clasă care să modeleze numerele complexe. Scrieţi un program care utilizează această clasă si defineste doua obiecte afisand caracteristicile obiectelor si rezultatele operatiilor definite (Folositi exemplul 3 cu rezultat in obiectul curent).*/

#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex(double x = 0.0, double y = 0.0) {
        re = x;
        im = y;
    }
    void setRe (double a) {re = a;}
    double getRe() {return re;}
    
    void setIm (double b) {im = b;}
    double getIm() {return im;}
    
    double modul() {
        return sqrt (re*re+im*im);
    }
    
    Complex ad_nr (Complex b) {
        Complex x;
        x.re = re+b.re;
        x.im = im+b.im;
        return x;
    }
    
    Complex sc_nr (Complex b) {
        Complex x;
        x.re = re-b.re;
        x.im = im-b.im;
        return x;
    }
};

int main () {
    Complex a,b,c;
    double numar;
    cout << "Introduceti un numar pentru partea reala1: ";
    cin >> numar;
    a.setRe(numar);
    
    cout << "Introduceti un numar pentru partea reala2: ";
    cin >> numar;
    b.setRe(numar);
    
    cout << "Introcuceti un numar pentru partea imaginara1: ";
    cin >> numar;
    a.setIm(numar);
    
    cout << "Introcuceti un numar pentru partea imaginara2: ";
    cin >> numar;
    b.setIm(numar);
    
    c = a.ad_nr(b);
    
    cout << "Suma partilor reale ale celor 2 nr complexe este: " << c.getRe() << endl;
    cout << "Suma partilor imaginare ale celor 2 nr complexe este: " << c.getIm() << endl;
    
    c = a.sc_nr(b);
    
    cout << "Diferenta partilor reale ale celor 2 nr complexe este: " << c.getRe() << endl;
    cout << "Diferenta partilor imaginare ale celor 2 nr complexe este: " << c.getIm() << endl;
}
