/*Axente Andrei Exercitiul3 Lab08 Grupa 2115
 Scrieţi o aplicatie C/C++ care citeşte de la tastatură un tablou de 10 valori intregi. Definiţi o funcţie care primeste tabloul ca parametru şi apoi îl afişeaza ordonat crescător.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
void swap(int*, int*);
void bubbleSort(int[], int);
void printArray(int[], int);
int main (){
    int tablou [10];
    int n{10};
    printf ("Introduceti valorile din vector: ");
    for (int i {}; i<10; i++)
        scanf ("%d" , &tablou [i]);
    bubbleSort(tablou, n);
    printArray(tablou, n);
    return 0;
}


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    printf("\nTablou sortat este :");
    for (i = 0; i < size; i++)
        printf("  %d ", arr[i]);
}
