/* Axente Andrei Grupa 2115 Lab_05 Exercitiul5
  Created by Axente Andrei on 29.10.2021.
  Acest program include problemele 1 respectiv 2 intr-un singur .cpp
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

float citire1 ();
float citire2 ();
float serie (float, float);
float serie1 (float, float);
float paralel (float, float);
float paralel1 (float, float);

int main () {
    float R1 {};
    float R2 {};
    float C1 {};
    float C2 {};
    float r_serie {};
    float c_serie {};
    float r_paralel {};
    float c_paralel {};
    
    R1 = citire1();
    R2 = citire1();
    C1 = citire2();
    C2 = citire2();
    r_serie = serie (R1,R2);
    c_serie =  serie1 (C1,C2);
    r_paralel =  paralel (R1,R2);
    c_paralel =  paralel1 (C1,C2);
    
    
    printf ("Valorile introduse pentru cele doua rezistente sunt: %f, %f\n" , R1, R2);
    printf ("\nValorile introduse pentru cele doua capacitoare sunt: %f, %f\n", C1, C2);
    printf ("\nCalculul in serie a celor doua rezistenste este: %-10.3f\n", r_serie);
    printf ("\nCalculul in serie a celor doua capacitoare este: %10.3f\n", c_serie);
    printf ("\nCalculul in paralel a celor doua rezistente este: %-10.3f\n", r_paralel);
    printf ("\nCalculul in paralel a celor doua capacitoare  este: %10.3f\n",c_paralel);
    
    return 0;
}

float citire1 () {
    float numar {};
    printf ("Introduceti un numar: ");
    scanf ("%f" , &numar);
    return numar;
}

float citire2 () {
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

float serie1 (float C1, float C2) {
    float serie {};
    serie = C1 * C2 / (C1 + C2);
    return serie;
}

float paralel (float R1,float R2) {
    float paralel {};
    paralel = R1 * R2 / (R1 + R2);
    return paralel;
}
 
float paralel1 (float C1, float C2) {
    float paralel {};
    paralel = C1 + C2;
    return paralel;
}
