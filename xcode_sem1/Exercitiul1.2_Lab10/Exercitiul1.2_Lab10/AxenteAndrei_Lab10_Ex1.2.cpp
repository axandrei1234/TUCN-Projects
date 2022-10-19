/*Axente Andrei Exercitiul1.2 Lab10 Grupa 2115
Se citeste un array unidimensional si se cauta cel mai mic numar (utilizand pointeri) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire (int*, int);
int nmic (int*, int);
int main () {
    int *tab;
    int dim{};
    printf ("Introduceti dimensiunea tabloului: ");
    scanf ("%d", &dim);
    tab = (int*)malloc(dim * sizeof(int));
    citire (tab, dim);
    printf ("Cel mai mic numar din array este: %d\n" , nmic (tab, dim));
    
}

void citire (int *tab, int dim) {
    for (int i{}; i<dim; i++){
        printf ("x[%d]: ", i);
        scanf ("%d" , tab+i);
    }
}

int nmic (int *tab, int dim) {
    int x{};
    for (int i{}; i<dim; i++)
        if ( *(tab+i) > 0 )
            x = *(tab + i);
    for (int i{1}; i<dim; i++)
        if ( x > *(tab+i) && *(tab+i) >= 0)
            x = *(tab+i);
    return x;
}
