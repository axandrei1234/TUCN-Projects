/* Axente Andrei Grupa 2115 Lab_04 Exercitiul6
  Created by Axente Andrei on 29.10.2021.
  Acest program va citi un numar intreg, unul real si un sir de caractere folosind cout si cin
 */
#include <iostream>
using namespace std;
int main(){
    int intreg {};
    float real {};
    char caractere [100];
    cout << "Introduceti un numar intreg: "; cin >> intreg;
    cout << "Numarul intreg este: " << intreg << endl;
    cout << "Introduceti un numar real: "; cin >> real;
    cout << "Numarul real este: " << real << endl;
    cout << "Introduceti un sir de caractere: "; cin >> caractere;
    cout << "Sirul de caractere este: " << caractere << endl;
    return 0;
}
