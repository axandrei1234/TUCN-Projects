/*Axente Andrei Exercitiul2 Lab08 Grupa 2115
 Scrieţi un program pentru determinarea celui mai mic element pozitiv dintr-un tablou unidimensional.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int nmic (int[], int);
int main () {
    int tablou [20];
    int n {};
    printf ("Introduceti numarul de valori din vector: ");
    scanf ("%d" , &n);
    printf ("Introduceti valorile vectorului: ");
    for (int i {}; i < n ; i++)
    scanf ("%d" , &tablou [i]);
    printf ("Cel mai mic numar din vector este: %d\n" , nmic (tablou , n));
    return 0;
}

int nmic (int tablou[], int n) {
   
    int x {};
    for (int i{}; i < n; i++)
        if (tablou[i] > 0 )
            x = tablou [i];
    for (int i {1}; i < n; i++)
        if (x > tablou [i] && tablou [i] >= 0)
            x = tablou [i];
    return x;
}
