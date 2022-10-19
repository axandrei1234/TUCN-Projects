/*Axente Andrei Ex6 Lab12 G2115
 Considerati clasa Fractie care are doua atribute intregi private a si b pentru numarator si numitor, doua metode de tip set( ) respectiv get( ) pentru atributele clasei. Declarati o metoda simplifica( ) care simplifica un obiect Fractie returnand o valoare reala. Considerati o variabila privata statica intreaga icount, care va fi initializata cu 0 si incrementata in cadrul constructorilor din clasa. Definiti un constructor explicit fara parametri care initializeaza a cu 0 si b cu 1, si un constructor explicit cu doi parametri care va putea fi apelat daca se verifica posibilitatea definirii unei fracții (b!=0). Definiti un destructor explicit care afiseaza un mesaj. Supraincarcati operatorii de adunare, scadere, inmultire si impartire (+,-,*,/) a fractiilor folosind functii friend fara a simplifica rezultatele obtinute. Instantiati doua obiecte de tip Fractie cu date citite de la tastatura. Afisati atributele initiale ale obiectelor pe linii diferite iar fiecare membru al fractiei va fi afisat pe o latime de 10 digiti, caracter de umplere *, primul numar aliniat la stanga iar al doilea aliniat la dreapta. Printr-o metoda accesor, afisati contorul icount ca si un intreg cu semn, pe 15 pozitii, caracter de umplere $, aliniat la stanga. Efectuati operatiile implementate prin functiile friend, initializand alte 4 obiecte cu rezultatele obtinute. Afisati rezultatele (numarator/numitor) folosind supraincarcarea operatorul de iesire (<<, insertie) si contorul (ca si un intreg cu semn, pe 20 de pozitii, caracter de umplere #, aliniat la dreapta) dupa ultima operatie folosind o metoda accesor adecvata. Simplificati rezultatele obtinute pe care le veti afisa ca numere reale de tip fixed cu o precizie de 4 digiti la partea fractionara.*/

#include <iostream>
using namespace std;
 
int findGCD(int,int);
ostream &stanga(ostream &stream);
ostream &dreapta(ostream &stream);
ostream &simplifica1(ostream &stream);
ostream &count(ostream &stream);
ostream &count1(ostream &stream);
    
class Fractie {
private:
    int a;
    int b;
    static int icount;
public:
    Fractie() {
        a = 0;
        b = 1;
        icount++;
    }
    Fractie(int a, int b) {
        this->a = a;
        if (b != 0)
        this->b = b;
        icount++;
    }
    void setA(int a) {this->a = a;}
    void setB(int b) {this->b = b;}
    int getA() {return a;}
    int getB() {return b;}
    int getIcount(){return icount;}
    float simplifica() {
        int denom;
        denom = findGCD(a, b);
        a /= denom;
        b /= denom;
        cout << "Fractia simplificata este: " << a << "/" << b << endl;
        return (float)a/b;
    }
    ~Fractie() {cout << "Destructor!" << endl;}
    friend Fractie operator+(const Fractie &f1, const Fractie &f2);
    friend Fractie operator-(const Fractie &f1, const Fractie &f2);
    friend Fractie operator*(const Fractie &f1, const Fractie &f2);
    friend Fractie operator/(const Fractie &f1, const Fractie &f2);
    friend istream &operator>>(istream &stream, Fractie &);
};
int Fractie::icount;

int main() {
    Fractie f1, f2;
    cin >> f1;
    cout << "Numaratorul de la primul obiect este: " << stanga << f1.getA() << endl;
    cout << "Numitorul de la primul obiect este: " << dreapta << f1.getB() << endl;
    cin >> f2;
    cout << "Numaratorul de la al doilea obiect este: " << stanga << f2.getA() << endl;
    cout << "Numitorul de la al doilea obiect este: " << dreapta << f2.getB() << endl;
    cout << "iCount dupa primele afisari: " << count << f1.getIcount() + f2.getIcount() << endl;
    f1.simplifica();
    f2.simplifica();
    cout << "Prima fractie: " << f1.getA() << "/" << f1.getB() << endl;
    cout << "A doua fractie: " << f2.getA() << "/" << f1.getB() << endl;
    Fractie adunare = f1 + f2;
    cout << "Fractia adunata este: " << adunare.getA() << "/" << adunare.getB() << endl;
    Fractie scadere = f1 - f2;
    cout << "Fractia scazuta este: " << scadere.getA() << "/" << scadere.getB() << endl;
    Fractie inmultire = f1 * f2;
    cout << "Fractia inmultita este: " << inmultire.getA() << "/" << inmultire.getB() << endl;
    Fractie impartire = f1 / f2;
    cout << "Fractie impartire este: " << impartire.getA() << "/" << impartire.getB() << endl;
    cout << "iCount dupa overload: " << count1 << f1.getIcount() + f2.getIcount() << endl;
    cout << simplifica1 << "(adunarea) " << adunare.simplifica() << endl;
    cout << simplifica1 << "(scaderea) " << scadere.simplifica() << endl;
    cout << simplifica1 << "(inmultirea) " << inmultire.simplifica() << endl;
    cout << simplifica1 << "(impartirea) " << impartire.simplifica() << endl;
}

Fractie operator+(const Fractie &f1, const Fractie &f2) {
    Fractie f3;
    int lcm = (f1.b*f2.b)/findGCD(f1.b,f2.b);
    f3.a = (f1.a*lcm/f1.b) + (f2.a*lcm/f2.b);
    f3.b = f2.b;
    return f3;
}
Fractie operator-(const Fractie &f1, const Fractie &f2) {
    Fractie f3;
    int lcm = (f1.b*f2.b)/findGCD(f1.b,f2.b);
    f3.a = (f1.a*lcm/f1.b) - (f2.a*lcm/f2.b);
    f3.b = f2.b;
    return f3;
}
Fractie operator*(const Fractie &f1, const Fractie &f2) {
    Fractie f3;
    f3.a = f1.a * f2.a;
    f3.b = f1.b * f2.b;
    return f3;
}

Fractie operator/(const Fractie &f1, const Fractie &f2) {
    Fractie f3;
    f3.a = f1.a * f2.b;
    f3.b = f1.b * f2.a;
    return f3;
}

istream &operator>>(istream &stream, Fractie &f1) {
    int numar;
    cout <<"Introduceti o valoare pentru numarator: "; stream >> numar;
    f1.setA(numar);
    cout << "Introduceti o valoare pentru numitor: "; stream >> numar;
    f1.setB(numar);
    return stream;
}

int findGCD(int a, int b) {
   if (b == 0)
      return a;
      return findGCD(b, a % b);
}

//latime de 10 digiti, caracter de umplere *, primul numar aliniat la stanga iar al doilea aliniat la dreapta
ostream &stanga(ostream &stream) {
    stream.width(10);
    stream.fill('*');
    stream.unsetf(ios::right);
    stream.setf(ios::left);
    return stream;
}

ostream &dreapta(ostream &stream) {
    stream.width(10);
    stream.fill('*');
    stream.setf(ios::right);
    return stream;
}
//afisati contorul icount ca si un intreg cu semn, pe 15 pozitii, caracter de umplere $, aliniat la stanga
ostream &count (ostream &stream) {
    stream.width(15);
    stream.fill('$');
    stream.setf(ios::left);
    return stream;
}

//afisati ca numere reale de tip fixed cu o precizie de 4 digiti la partea fractionara
ostream &simplifica1 (ostream &stream) {
    stream.precision(4);
    return stream;
}
//afisati ca si un intreg cu semn, pe 20 de pozitii, caracter de umplere #, aliniat la dreapta
ostream &count1 (ostream &stream) {
    stream.width(20);
    stream.fill('#');
    stream.setf(ios::right);
    return stream;
}

