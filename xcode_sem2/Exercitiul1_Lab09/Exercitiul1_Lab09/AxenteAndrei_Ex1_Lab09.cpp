/*Axente Andrei Ex1 Lab09 G2115
 Să se implementeze clasa Complex care supraîncarcă operatorii aritmetici cu scopul de a efectua adunări, scăderi, inmulţiri şi împărţiri de numere complexe (folosind metode membre (+, -) și funcții friend (*, /)). Observaţie: numerele complexe vor fi definite ca având o parte reală şi una imaginară, ambii coeficienţi fiind reprezentați prin numere reale.*/

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginar;
public:
    Complex (double real, double imaginar) {
        this->real = real;
        this->imaginar = imaginar;
    }
    void setReal(double real) {this->real = real;}
    double getReal() {return real;}
    
    void setImaginar(double imaginar) {this->imaginar = imaginar;}
    double getImaginar() {return imaginar;}
    
    Complex operator+(const Complex& c1) const {
        Complex rezultat(0,0);
        rezultat.real = real + c1.real;
        rezultat.imaginar = imaginar + c1.imaginar;
        return rezultat;
    }
    
    Complex operator-(const Complex& c1) const {
        Complex rezultat(0,0);
        rezultat.real = real - c1.real;
        rezultat.imaginar = imaginar - c1.imaginar;
        return rezultat;
    }
    
    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator/(const Complex& c1, const Complex& c2);
};

Complex operator*(const Complex& c1, const Complex& c2) {
    Complex rezultat(0,0);
    rezultat.real = c1.real * c2.real;
    rezultat.imaginar = c1.imaginar * c2.imaginar;
    return rezultat;
}

Complex operator/(const Complex& c1, const Complex& c2) {
    Complex rezultat(0,0);
    rezultat.real = c1.real / c2.real;
    rezultat.imaginar = c1.imaginar / c2.imaginar;
    return rezultat;
}

int main() {
    Complex c1 (3.2, 10.1);
    Complex c2 (4, 2.45);
    Complex rezultat(0,0);
    
    rezultat = c1+c2;
    cout << "Partea reala dupa adunare este: " << rezultat.getReal() << endl;
    cout << "Partea imaginara dupa adunare este: " << rezultat.getImaginar() << endl;
    
    rezultat = c1-c2;
    
    cout << endl << "Partea reala dupa scadere este: " << rezultat.getReal() << endl;
    cout << "Partea imaginara dupa scadere este: " << rezultat.getImaginar() << endl;
    
    rezultat = c1*c2;
    
    cout << endl << "Partea reala dupa inmultire este: " << rezultat.getReal() << endl;
    cout << "Partea imaginara dupa inmultire este: " << rezultat.getImaginar() << endl;
    
    rezultat = c1/c2;
    
    cout << endl << "Partea reala dupa impartire este: " << rezultat.getReal() << endl;
    cout << "Partea imaginara dupa impartire este: " << rezultat.getImaginar() << endl;
}
