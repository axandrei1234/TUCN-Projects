/*Axente Andrei Ex3 Lab13 G2115
 Scrieţi o aplicaţie C++ care citeşte un fişier utilizând metoda read( ). Verificaţi starea sistemului după fiecare operaţie de citire. Numele fişierului se va citi din linia de comandă. Afişaţi pe ecran conţinutul fişierului.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string numefisier;
    string sir;
    
    cout << "Introduceti numele fisierului: "; cin >> numefisier;
    ifstream filein(numefisier);
    filein.read(&sir[0],100);
    cout << sir;
}
