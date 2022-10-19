/*Axente Andrei ex2 Lab05 G2115
 Să se definească o clasă numită myString (într-un fişier numit strClass.h) care să fie compusă
 din metodele specifice care efectuează următoarele operaţii pe şiruri de caractere:
 - determină lungimea şirului primit la intrare.
 - determină ultima poziţie de apariţie a unui anumit caracter din şirul de intrare.
 - returnează şirul primit la intrare, scris cu caractere majuscule.
 - returnează şirul primit la intrare, scris cu caractere minuscule.
 - returnează numărul de apariţii ale unui anumit caracter din şirul primit.*/

#include "strClass.h"

int main() {
    myString *p = new myString();
    p->set_sir("aNaNas");
    cout << "Sirul este: " << p->get_sir() << endl;
    cout << "Dimensiunea sirului este: " << p->dim_sir() << endl;
    cout << "Ultima pozitie pe care se afla caracter este: " << p->ult_poz() << endl;
    cout << "Sirul in majuscule este: " << p->upper() << endl;
    cout << "Sirul in minuscule este: " << p->lower() << endl;
    cout << "litera 'a' se repeta in sir de: " << p->count() << " ori!" << endl;
    delete p;
}
