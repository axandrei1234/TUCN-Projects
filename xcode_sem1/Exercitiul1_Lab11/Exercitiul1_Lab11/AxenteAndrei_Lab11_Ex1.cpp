/*Axente Andrei Exercitiul1 Lab11 Grupa2115
 Să se scrie un program care citeşte n numere reale, pe care le stochează într-un tablou alocat dinamic, afişează suma elementelor negative citite, iar la sfârşit eliberează zona de memorie alocată.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    float *array;
    int dim{};
    float sum{};
    printf ("Introduceti valoarea array-ului: ");
    scanf ("%d" , &dim);
    array = (float*)malloc(dim * sizeof(float));
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: " , i);
        scanf ("%f" , array+i);
    }
    printf ("Suma elementelor negative din array este: ");
    for (int i{}; i < dim; i++)
       if (*(array+i) < 0)
           sum += *(array+i);
    printf ("%.3f\n" , sum);
    if (array)
    free (array);
}
