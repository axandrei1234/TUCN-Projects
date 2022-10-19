/*Axente Andrei Ex3 Lab10 G2115
 Să se implementeze o clasă de bază cu două atribute protected de tip întreg care conţine o metoda mutator pentru fiecare atribut al clasei, parametri metodelor fiind preluati in main() de la tastatura şi metode accesor pentru fiecare atribut care returneaza atributul specific. Să se scrie o a doua clasă, derivată din aceasta, care implementează operaţiile matematice elementare: +, -, *, / asupra atributelor din clasa de bază, rezultatele fiind returnate de metode. Să se scrie o a treia clasă, derivată din cea de-a doua, care implementează în plus o metoda pentru extragerea rădăcinii pătrate dintr-un număr ( mul, rezultat al operatiei * din prima clasa derivata) şi de ridicare la putere (atât baza (plus, rezultat al operatiei + din prima clasa derivata) cât şi puterea (minus, rezultat al operatiei - din prima clasa derivata) sunt trimişi ca parametri). Verificati apelul metodelor considerand obiecte la diferite ierarhii.*/

#include <iostream>
#include <cmath>
using namespace std;

class Baza {
protected:
    int a;
    int b;
public:
    Baza(int x = 3, int y = 2) { a = x; b = y;}
    void setA(int a) {this->a = a;}
    int getA() {return a;}
    
    void setB(int b) {this->b = b;}
    int getB() {return b;}
};

class Derivat : public Baza {
protected:
  Baza d;

public:
  Derivat(Baza x = {1, 1}) { setD(x); }

  int getA() { return d.getA(); }
  int getB() { return d.getB(); }

  void setD(Baza x) {
    d.setA(x.getA());
    d.setB(x.getB());
  }
  Baza getD() { return d; }

  void operator=(Derivat x) {
    d.setA(x.getA());
    d.setB(x.getB());
  }
  Baza operator+(Baza x) {
    Baza res;
    res.setA(res.getA() + x.getA());
    res.setB(res.getB() + x.getB());
    return res;
  }
  Baza operator-(Baza x) {
    Baza res;
    res.setA(res.getA() - x.getA());
    res.setB(res.getB() - x.getB());
    return res;
  }
  Baza operator*(Baza x) {
    Baza res;
    res.setA(res.getA() * x.getA());
    res.setB(res.getB() * x.getB());
    return res;
  }
  Baza operator/(Baza x) {
    Baza res;
    res.setA(res.getA() / x.getA());
    res.setB(res.getB() / x.getB());
    return res;
  }
};

class Powers : public Derivat {
protected:
  Derivat d;

public:
  Powers() {}
  Powers(Powers &x) { d = x.getD(); }
  int getA() { return d.getA(); }
  int getB() { return d.getB(); }

  void operator=(Powers x) {
    d.setA(x.getA());
    d.setB(x.getB());
  }
  void setD(Derivat x) { d.setD(x.getD()); }

  Baza sqrt(Baza x) {
    Baza y;
    y.setA(std::sqrt(x.getA()));
    y.setB(std::sqrt(x.getB()));
    return y;
  }

  Baza pow(Baza base, Baza exp) {
    Baza y;
    y.setA(std::pow(base.getA(), exp.getA()));
    y.setB(std::pow(base.getB(), exp.getB()));
    return y;
  }
};

int main () {
    Baza x;
    int numar1, numar2;
    cout << "Introduceti valoarea pentru primul numar: ";
    cin >> numar1;
    x.setA(numar1);
    cout << "Introduceti valoarea pentru al doilea numar: ";
    cin >> numar2;
    x.setB(numar2);
    Baza y;
    cout << "Introduceti valoarea pentru primul numar din al doilea obiect: ";
    cin >> numar1;
    y.setA(numar1);
    cout << "Introduceti valoarea pentru al doilea numar din al doilea obiect: ";
    cin >> numar2;
    y.setB(numar2);
    Derivat d;
    d.setD(x);
    Derivat c;
    c.setD(d+y);
    cout << endl << "x+y: " << c.getA() << ' ' << c.getB();
    c.setD(d-y);
    cout << endl << "x-y: " << c.getA() << ' ' << c.getB();
     c.setD(d * y);
     cout << endl << "x*y: " << c.getA() << ' ' << c.getB();
     c.setD(d / y);
     cout << endl << "x/y: " << c.getA() << ' ' << c.getB();
     Powers p;
     p.setD(d);
     c.setD(p.sqrt(x));
     cout << endl << "radical din x: " << c.getA() << ' ' << c.getB();
     c.setD(p.pow(x, y));
     cout << endl << "x^y: " << c.getA() << ' ' << c.getB();
   }

