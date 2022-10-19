/*Axente Andrei Exercitiul12 Lab07 Grupa 2115
 Scrieti un program care citeste un numar intreg n de la tastatura. Se citesc apoi numere reale, până când suma lor depăşeşte valoarea lui n.
 Să se afişeze suma numerelor citite, cu o precizie de 2 zecimale şi numărul lor (câte s-au introdus).*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main () {
    float tablou [20];
    int dim {};
    float suma {};
    int contor {};
    printf ("Introduceti dimensiunea tabloului: ");
    scanf ("%d", &dim);
    for (int i {}; i < dim; i++){
        printf ("x[%d]: " ,i);
    scanf ("%f" , &tablou[i]);
        suma += tablou [i];
        contor++;
        if (suma > dim)
            break;
        }
    printf ("suma numerelor este: %.2f\n", suma);
    printf ("au fost folosite %d numere.\n" , contor);
    }

