/*Axente Andrei Ex2 Lab13 G2115
 Scrieţi un program care utilizează metoda write( ) pentru a scrie într-un fişier şiruri de caractere. Afişaţi apoi conţinutul fişierului folosind metoda get( ). Numele fişierului se va citi de la tastatură.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sir,sir2;
    string numefisier;
    
    cout << "Introduceti numele fisierului: "; cin >> numefisier;
    cout << "Introduceti un sir de caractere: "; cin >> sir;
    {
    ofstream fileout(numefisier);
    fileout.write(sir.data(), sir.size());
    }
    ifstream filein(numefisier);
    sir2.resize(sir.size());
    filein.get(&sir2[0],sir.size()+1);
    cout << sir2 << endl;
}


