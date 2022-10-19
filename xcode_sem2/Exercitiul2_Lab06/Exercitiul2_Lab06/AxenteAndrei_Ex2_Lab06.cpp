/*Axente Andrei Ex2 Lab06 G2115
 Să se modifice exemplul 2 astfel încât codul să poată fi lansat în execuție considerand atributul clasei private si metode public get/set adecvate. In main() instantiati un obiect din clasa care va fi modificat si apoi accesat, afisand rezultatul.*/

#include <iostream>
using namespace std;
class Test2 {
private:
    int x;
public:
    Test2() {
        x = 0;
        cout << endl << "Apel constructor explicit vid";
    }
    void setInt(int a) {x=a;}
    int getInt() {return x;}
};

int main() {
    Test2 ob1;
    int numar;
    cout << endl << "Introduceti un numar: "; cin >> numar;
    ob1.setInt(numar);
    cout << "x are valoarea: " << ob1.getInt() << endl;
}
