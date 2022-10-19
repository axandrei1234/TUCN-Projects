/*Axente Andrei Exercitiul2 Lab07 Grupa 2115
 Scrieti un program care verifică dacă un număr citit de la tastatură este pătrat perfect.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {
    int a {};
    float b {};
    printf ("Introduceti o valoare pentru a: ");
    scanf ("%d", &a);
    b = sqrt(a);
    if ( b == (int)b )
        printf ("%d este patrat perfect\n", a);
        
    else
        printf ("%d nu este patrat perfect\n", a);
    return 0;
}
