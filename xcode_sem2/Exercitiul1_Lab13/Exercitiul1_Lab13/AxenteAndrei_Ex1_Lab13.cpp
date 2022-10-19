/*Axente Andrei Ex1 Lab13 G2115
 Să se scrie un program care foloseşte metoda seekg( ) pentru poziţionare la mijlocul fişierului si apoi afişează conţinutul fişierului începând cu această poziţie. Numele fişierului se citeste din linia de comandă.*/

#include <iostream>
#include <fstream>
using namespace std;
const int dim =11;
int main( ) {
char sir[dim]=" ";
    ifstream in ;
    in.open("test.txt");
    if (!in) {
cout<< "Nu poate deschide fisierul de intrare\n" ;
exit(1); }
    while (in) { //while (1) {
    in.read(sir,dim-1) ;//citire la multiplu de 10 caractere- ce e in plus?
    if (in.eof( ))break;
        cout<<sir ;
    }
    in.close( ) ; return 0;
}
