/*AxenteAndrei Ex1 Lab07 G2115
 Modificaţi exemplul 3 astfel încât să permită obtinerea unui nou punct, avand coordonatele obtinute prin adunarea coordonatelor a două astfel de puncte. Numele noului punct va fi rezultat prin concatenarea numelor celor două puncte. Adaugati si testati o metoda care calculeaza distanta de la un punct la origine. Modificați clasa astfel încât sa eliminați metoda afis() folosind in schimb metode accesor adecvate. Eliminați de asemenea atributul lungime_sir modificând adecvat metodele clasei. Adaugati si un move constructor. Testati utilizand si functii specifice sirurilor de caractere din VC++1y/2z (strcpy_s( ) si strcat_s( )).*/


#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// CPointText.h
class CPointText {
  int x;
  int y;
  string name;

public:
  // void constructor
  CPointText();
  // parametric constructor
  CPointText(int ix, int iy, const string name = "Point");
  // copy constructor
  CPointText(const CPointText &pt);
  // destructor
  ~CPointText();
  void afis() {
    cout << "\nx= " << x;
    cout << "\ny= " << y;
    cout << "\nname = " << name;
  }

  CPointText add(CPointText x);
  string getName();
  void setName(string x);
  int getX() { return x; }
  int getY() { return y; }

  int distance();
};

int main() {
  int x, y;

  cout << "Enter the coordinates of a point (x & y): ";
  cin >> x >> y;
  CPointText ob1(x, y);

  cout << "Enter the coordinates of another point (x & y): ";
  cin >> x >> y;
  CPointText ob2(x, y);

  ob1 = ob1.add(ob2);

  cout << "The distance from origin to point x is: " << ob1.distance() << '\n';
}

CPointText::CPointText() {
  cout << "explicit void constructor\n";
  x = y = 0;
}
CPointText::CPointText(int ix, int iy, const string name) {
  cout << "explicit parametric constructor\n";
  x = ix;
  y = iy;
}
CPointText::CPointText(const CPointText &pct) {
  cout << "explicit copy constructor\n";
  x = pct.x;
  y = pct.y;
}
CPointText::~CPointText() { cout << "destructor\n"; }

CPointText CPointText::add(CPointText x) {
  CPointText p;

  p.setName((name + x.getName()));
  p.x = this->x + x.getX();
  p.y = this->y + x.getY();

  return p;
}

string CPointText::getName() { return name; }
void CPointText::setName(string x) { name = x; }

int CPointText::distance() { return sqrt(x * x + y * y); }
