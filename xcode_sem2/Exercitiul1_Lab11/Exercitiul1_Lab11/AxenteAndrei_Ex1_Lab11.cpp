/*Axente Andrei Ex1 Lab11 G2115
 În cazul exemplului 3 (care exemplifică moştenirea simplă, cu clasa de bază Pozitie şi derivată Punct) se cer următoarele:
 a. urmariţi şi verificaţi ordinea de apel pentru constructori/destructori
 b. extindeţi funcţia main( ) pentru a utiliza toate metodele din clasa de baza şi din clasa
 derivată
 c. introduceţi o nouă clasă Cerc (date şi metode), derivată din clasa Pozitie
 d. scrieţi un program ce utilizează aceste clase.*/
#include <iostream>
using namespace std;
class Position {
protected:
  int x, y;

public:
  Position(int = 0, int = 0);
  Position(const Position &);
  ~Position();
  virtual void display();
  virtual void movement(int, int);
};

Position::Position(int abs, int ord) {
  x = abs;
  y = ord;
  cout << "Constructor CB \"Position\", ";
  display();
}

Position::Position(const Position &p) {
  x = p.x;
  y = p.y;
  cout << "Copy constructor CB \"Pozitie\", ";
  display();
}

Position::~Position() {
  cout << "Destructor CB \"Position\", ";
  display();
}

void Position::display() {
  cout << " CB display: coords: x = " << x << ", y = " << y << "\n";
}

void Position::movement(int dx, int dy) {
  cout << "CB: movement" << endl;
  x += dx;
  y += dy;
}

class Point : public Position {
  int visible;
  char color;

public:
  Point(int = 0, int = 0, char = 'A');
  Point(const Point &);
  ~Point();
  void show() { visible = 1; }
  void hide() { visible = 0; }
  void colorize(char c) { color = c; }
  void movement(int, int);
  void display();
};

Point::Point(int abs, int ord, char c) : Position(abs, ord) {
  visible = 0;
  color = c;
  cout << "Constructor CD \"Punct\", ";
  display();
}
Point::Point(const Point &p) : Position(p.x, p.y) {

  visible = p.visible;
  color = p.color;
  cout << "Copy constructor CD \"Point\", ";
  display();
}

Point::~Point() {
  cout << "Destructor CD \"Point\", ";
  display();
}

void Point::movement(int dx, int dy) {
  if (visible) {
    cout << " CD: Display movement CD\n";
    x += dx;
    y += dy;
    display();
  } else {
    x += dx;
    y += dy;
    cout << "Movement through CD displayed from CB\n";
    Position::display();
  }
}
// redefinire metoda de afisare in clasa derivata
void Point::display() {
  cout << "Position: x = " << x << ", y = " << y;
  cout << ", color: " << color;
  cout << ", " << (visible ? "" : "in") << "visible\n";
}

class Circle : public Position {
  int radius;
  int visible;
  int color;

public:
  Circle(int = 0, int = 0, char = 'A');
  Circle(const Circle &);
  ~Circle();
  void show() { visible = 1; }
  void hide() { visible = 0; }
  void colorize(char c) { color = c; }
  void movement(int, int);
  void display();
};

void Circle::display() {
  cout << "Position: x = " << x << ", y = " << y << ", color: " << color
       << ", radius: " << radius << ", " << (visible ? "" : "in")
       << "visible\n";
}

void Circle::movement(int dx, int dy) {
  if (visible) {
    cout << " Derived class: Display derived class movement\n";
    x += dx;
    y += dy;
    display();
  } else {
    x += dx;
    y += dy;
    cout << "Movement through derived class displayed from base class\n";
    Position::display();
  }
}

int main() {
  Position pp0(7, 7);

  cout << "Base class methods:\n";
  pp0.display();
  pp0.movement(6, 9);
  pp0.display();

  cout << "Derived class methods:\n";
  Point p0(1, 1, 'V');
  p0.display();

  Point p1(p0);
  p1.show();
  p1.movement(10, 10);

  cout << "Upcasting - objects:\n";
  pp0 = p0;
  pp0.display();

  cout << "Upcasting - pointers:\n";
  Position *p;
  p = new Point(100, 100, 'Z');
  cout
      << "Derived class display: derived object if virtual, else base object\n";
  p->display();
  p = &pp0;
  cout << "Base class display: base object always\n";
  p->display();
  p = &p1;
  cout
      << "Derived class display: derived object if virtual, else base object\n";
  p->display();

  Point *pp;
  pp = &p1;
  cout << "Derived class display: derived object always\n";
  pp->display();

  cout << "Derived class movement by 10, 10\n";
  pp->movement(10, 10);
  cout << "Derived class display: derived object with hide()\n";
  pp->hide();
  pp->display();

  cout << "Derived class movement with 10, 10 and hide()\n";
  pp->movement(10, 10);
  cout << "Base class display: derived object displayed with base class "
          "method always\n";
  pp->Position::display();

  cout << "\nDowncasting:\n ";
  Point *pdown;
  pdown = (Point *)&pp0;
  cout << "Base class display: base bject using a derived pointer, else "
          "derived class\n";
  pdown->display();

  pdown = (Point *)p;
  cout << "Display from Derived, Point" << endl;
  pdown->display();
  return 0;
}
