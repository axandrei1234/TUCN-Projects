/*Axente Andrei Ex5 Lab11 G2115
 Definiti o clasa abstracta care contine 3 declaratii de metode pur virtuale pentru concatenarea, intreteserea a doua siruri de caractere si inversarea unui sir de caractere primit ca parametru. O subclasa implementeaza corpurile metodelor declarate in clasa de baza. Instantiati clasa derivata si afisati rezultatele aplicarii operatiilor implementate in clasa asupra unor siruri de caractere citite de la tastatura. Examinati eroarea data de incercarea de a instantia clasa de baza.*/

#include <iostream>
#include <string.h>
using namespace std;

class SirTest {
public:
  virtual char *concatenare(char *, char *) = 0;
  virtual char *intretesare(char *, char *) = 0;
  virtual char *inversare(char *, char *) = 0;
};

class Derivat : public SirTest {
public:
  virtual char *concatenare(char *sir1, char *sir2) {
    char *sir3 = new char[1000];

    strcpy(sir3, sir1);
    strcat(sir3, sir2);

    return sir3;
  }

    virtual char *intretesare (char *sir1, char *sir2) {
        char *sir3;
        sir3 = new char [1000];
        for (int i{}; i<min(strlen(sir1),strlen(sir2)); i+=2) {
            int k{};
            sir3[i] = sir1[k];
            sir3[i+1] = sir2[k];
            k++;
        }
        return sir3;
    }
    
    virtual char *inversare (char *sir1 , char *sir2)   {
        char *sir3;
        sir3 = new char [100];
        for (int i{}; i < sizeof(sir1)/2; i++)
            swap(sir1[i], sir1[sizeof(sir1) - i - 1]);
        for (int i{}; i < sizeof(sir2)/2; i++)
            swap (sir2[i], sir2[sizeof(sir2) - i - 1]);
        strcpy(sir3, sir1);
        strcpy(sir3, sir2);
        return sir3;
    }
};

int main() {
    char sir1 [10];
    char sir2 [10];
    cout << "Introduceti primul sir: "; cin >> sir1;
    cout << "Introduceti al doilea sir: "; cin >> sir2;
    
    Derivat d;
    cout << "Concatenare: " << d.concatenare(sir1, sir2) << endl;
    cout << "Intertesare: " << d.intretesare(sir1, sir2) << endl;
    cout << "Inversare: " << d.inversare(sir1, sir2) << endl;
    
 }
