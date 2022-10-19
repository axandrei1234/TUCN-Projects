/* Axente Andrei Grupa 2115 Lab_04 Exercitiul5
  Created by Axente Andrei on 29.10.2021.
  Acest program va face media ponderata a 3 numere intregi
 */
#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
using namespace std;
 
int citire ();
float medie_ponderata (int, int, int);

int main () {
    int numar1 {};
    int numar2 {};
    int numar3 {};
    float medie_p {};

    
    numar1 = citire();
    numar2 = citire();
    numar3 = citire();
    medie_p = medie_ponderata(numar1, numar2, numar3);
    
    printf ("Ati introdus numerele %d, %d, %d\n" , numar1, numar2, numar3);
    printf ("\nMedia ponderata este %f\n", medie_p);
    return 0;

}

int citire () {
    int numar {};
    printf ("Introduceti un numar intreg: ");
    scanf ("%d", &numar);
    return numar;
}

float medie_ponderata (int numar1, int numar2, int numar3) {
    float medie_ponderata {};
    medie_ponderata = numar1 * 0.4 + numar2 * 0.4 + numar3 * 0.2 ;
    return medie_ponderata;
}

