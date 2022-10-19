/*Axente Andrei Exercitiul10 Lab10 Grupa 2115
 Scrieţi un program C/C++ în care se citesc de la tastatură elementele de tip întreg ale unui tablou unidimensional a, utilizând o funcţie. Scrieţi o funcţie care completează un alt tablou unidimensional b, fiecare element al acestuia fiind obţinut prin scăderea mediei aritmetice a elementelor din a din elementul corespunzător din a. Scrieţi o funcţie care permite afişarea unui tablou unidimensional şi afişaţi tablourile unidimensionale a şi b. (utilizând pointeri, fără variabile globale).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void citire_array(int*, int);
void media_array(int*,float*, int);
int main () {
    int *arr1;
    float *arr2;
    int dim{};
    printf ("Introduceti dimensiunea array-ului: ");
    scanf ("%d" , &dim);
    arr1 = (int*)malloc(dim * sizeof(int));
    arr2 = (float*)malloc(dim * sizeof(float));
    printf ("Introduceti elementele din array: \n");
    citire_array(arr1,dim);
    printf ("A doua matrice va avea elementele: \n");
    media_array(arr1,arr2,dim);
    printf ("\n");
    
}

void citire_array(int *array, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: " , i);
        scanf ("%d" , array+i);
    }
}

void media_array(int *arr1, float *arr2, int dim) {
    int sum{};
    float medie{};
    for (int i{}; i < dim; i++)
        sum += arr1[i];
    medie = (float)sum / dim;
    for (int i{}; i < dim; i++) {
        arr2[i] = arr1[i] - medie;
    printf ("%.3f " , *(arr2+i));
    }
}

