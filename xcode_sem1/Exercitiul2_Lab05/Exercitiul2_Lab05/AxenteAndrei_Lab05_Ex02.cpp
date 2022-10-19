/* Axente Andrei Grupa 2115 Lab_05 Exercitiul2
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza capacitateea echivalenta gruparii serie, respectiv gruparii paralel
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

float citire ();
float serie (float, float);
float paralel (float, float);

int main () {
    
    float C1 {};
    float C2 {};
    float c_serie {};
    float c_paralel {};
    
    C1 = citire();
    C2 = citire();
    c_serie = serie (C1,C2);
    c_paralel = paralel (C1,C2);
    
    printf ("Valorile introduse pentru cele doua capacitoare sunt: %f, %f\n" , C1, C2);
    printf ("\nCalculul in serie este: %10.3f\n" , c_serie);
    printf ("\nCalculul in paralel este: %10.3f\n" , c_paralel);
    return 0;
}

float citire () {
    float numar {};
    printf ("Introduceti un numar: ");
    scanf ("%f", &numar);
    return numar;
}

float serie (float C1, float C2) {
    float serie {};
    serie = C1 * C2 / (C1 + C2);
    return serie;
}

float paralel (float C1, float C2) {
    float paralel {};
    paralel = C1 + C2;
    return paralel;
}
