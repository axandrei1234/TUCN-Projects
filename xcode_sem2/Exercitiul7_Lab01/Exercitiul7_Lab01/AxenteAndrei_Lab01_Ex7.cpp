/*Axente Andrei Ex7 Lab01 G2115
 Scrieţi un program care face o codare simplă prin adaugarea la codul ASCII al caracterului, o valoare n=3, folosind macro funcții. Exemplu: ‘a’ devine în urma codării ‘d’.*/
#include <iostream>
using namespace std;


int main() {
  char caracter;
  int n = 3 ;
  cout <<"Introduceti un caracter: ";
  cin >> caracter;
  cout << "Valoarea ASCII a lui " << caracter << " marita este egala cu: " << (int)caracter+n << endl;
}
