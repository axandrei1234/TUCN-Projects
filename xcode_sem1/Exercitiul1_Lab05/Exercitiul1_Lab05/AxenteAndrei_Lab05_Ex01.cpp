/* Axente Andrei Grupa 2115 Lab_05 Exercitiul1
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza rezistenta echivalenta gruparii serie, respectiv gruparii paralel
 */

#include <stdio.h>
using namespace std;
float citire();
float serie(float, float);
float paralel(float,float);
int main () {
    float R1 {};
    float R2 {};
    float c_serie {};
    float c_paralel {};
    
    R1 = citire();
    R2 = citire();
    c_serie = serie(R1,R2);
    c_paralel = paralel(R1,R2);
    printf ("Valorile introduse pentru cele doua rezistente sunt: %f, %f\n" , R1, R2);
    printf ("\nCalculul in serie este: %-10.3f\n" , c_serie);
    printf ("\nCalculul in paralel este: %-10.3f\n" , c_paralel);
    return 0;
}

float citire () {
    float numar {};
    printf ("Introduceti un numar: ");
    scanf ("%f" , &numar);
    return numar;
}

float serie (float R1, float R2) {
    float serie {};
    serie = R1 + R2;
    return serie;
}

float paralel (float R1, float R2) {
    float paralel {};
    paralel = (R1 * R2) / (R1 + R2);
    return paralel;
}
