/*Axente Andrei Exercitiul1.3 Lab10 Grupa 2115
 Bubble sort array folosind pointeri*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire (int*);
void swap (int*, int*);
void bubbleSort (int*);
void printArray(int*);
int main () {
    int tab[10];
    citire (tab);
    bubbleSort (tab);
    printArray(tab);
}

void citire (int *tab) {
    for (int i{}; i<10; i++){
        printf ("x[%d]: " , i);
        scanf ("%d" , tab+i);
    }
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int *tab)
{
    for (int i{}; i < 10 - 1; i++)
        for (int j{}; j < 10 - i - 1; j++)
            if (*(tab+j) > *(tab+j+1))
                swap(&tab[j], &tab[j + 1]);
}
void printArray(int *tab)
{
    printf("\nTablou sortat este :");
    for (int i{}; i < 10; i++)
        printf("  %d ", *(tab+i));
    printf ("\n");
}
