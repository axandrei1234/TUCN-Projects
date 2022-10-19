/* Axente Andrei Grupa 2115 Lab_05 Exercitiul4
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza ecuatia : ax+b=0 unde a si b sunt valori date de la tastatura si a != 0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int citire ();
float ecuatie (int , int);

int main () {
    int a {};
    int b {};
    float Ecuatie {};
    
    a = citire();
    if ( a == 0) {
        printf ("a trebuie sa fie diferit de 0\n");
        return 0;
    }
    b = citire();
    Ecuatie = ecuatie (a,b);
    
    printf ("Cele 2 valori sunt: %d, %d\n", a ,b);
    printf ("\nValoarea ecuatiei este: %.3f\n", Ecuatie);
    return 0;
}

int citire () {
    int numar {};
    printf ("Introduceti o valoare: ");
    scanf ("%d" , &numar);
    return numar;
}

float ecuatie (int a, int b) {
    float x {};
    x =(float)-b/a;
    return x;
    
}
