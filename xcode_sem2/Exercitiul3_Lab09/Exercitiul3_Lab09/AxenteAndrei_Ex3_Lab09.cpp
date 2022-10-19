#include <iostream>
using namespace std;
const int maxx = 31;//nr. caractere const
int dim = 5;//nr. obiecte implicit
class Persoana {
char nume[maxx];
double greutate;
int varsta; public:
Persoana() {
strcpy(nume, "Necunoscut");
greutate = 0.0;
varsta = 0; }
    Persoana(char* nume, double greutate, int varsta) { strcpy(this->nume, nume);
    this->greutate = greutate; this->varsta = varsta;
    }
    char* getNume() {
    return nume;
    }
    double getGreutate() {
    return greutate;
    }
    int getVarsta() {
    return varsta;
    }
    void display() {
    cout << "\nNume: " << nume;
    cout << "\nGreutate: " << greutate; cout << "\nVarsta: " << varsta;
    } };
//Analize si Persoana sunt in relatie de asociere
class Analize {
Persoana* p;
int n; public:
Analize() {
p = new (nothrow) Persoana[dim];
n = dim; }
Analize(int nr) {
p = new (nothrow) Persoana[nr];
n = nr; }
void introdu() { int j;
char nume[maxx]; double greutate;
int varsta;
for (j = 0; j < n; j++) {
    cout << "\nDatele pentru persoana: " << j + 1; cout << "\nNume: "; cin >> nume;
    cout << "\nGreutate: ";
    cin >> greutate;
    cout << "\nVarsta: ";
    cin >> varsta;
    p[j] = Persoana(nume, greutate, varsta);
    
}
}
    

void operator[ ](char* nume) { int j;
for (j = 0; j < n; j++)
if (strcmp(nume, p[j].getNume()) == 0) p[j].display();
}
void operator[ ](double greutate) { int j;
for (j = 0; j < n; j++)
if (greutate == p[j].getGreutate()) p[j].display();
}
    void operator[ ](int varsta) { int j;
    for (j = 0; j < n; j++)
    if (varsta == p[j].getVarsta()) p[j].display();
    }
};
    






int main() { int n;
char c;
char nume[maxx];
double greutate;
int varsta;
cout << "\nCate persoane? ";
cin >> n;
Analize a(n);
a.introdu();
cout << "Cautare dupa (v = varsta, g = greutate, n = nume, e=exit)? "; cin >> c;
switch (toupper(c)) {
case 'V': { cout << "\nVarsta: "; cin >> varsta; a[varsta]; break; }
case 'G': { cout << "\nGreutate: "; cin >> greutate; a[greutate]; break; } case 'N': { cout << "\nNume: "; cin >> nume; a[nume]; break; }
case 'E': return 0;
}
}

 
