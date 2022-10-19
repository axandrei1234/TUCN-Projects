/*Axente Andrei Exercitiul16 Lab07 Grupa 2115
 Scrieti o aplicatie C/C++ în care se introduc de la tastatură numere întregi, până ce utilizatorul
 apasă tasta <Esc>. Să se determine şi să se afişeze media numerelor impare pozitive.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <curses.h>
using namespace std;

int main () {
    int numar{};
    int tasta {};
    int suma {};
    int media {};
    int i{};
    do {
        printf ("Introduceti valoarea unui numar: ");
        scanf ("%d" , &numar);
        tasta = cin.get() ;
        if (numar % 2 == 1 && numar >=0){
            suma += numar;
            i++;
            
        }
        media = suma / i;
    }
    while ( tasta != 27 ) {
    printf ("media numerelor impare este: %d\n" , media);
}
}
