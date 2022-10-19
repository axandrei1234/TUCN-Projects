/*AxenteAndrei Exercitiul14 Lab13 Grupa2115
Scrieti intr-un fisier binar câteva numere intregi, citite de la tastatura. Citiţi apoi numerele de pe poziţii impare si afişati pentru fiecare, dacă este valoare pară sau impară.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void  citire_d (int*, int);
int main() {
    FILE *f;
    int dim{};
    int *arr;
    int j{};
    printf ("Cate numere reale va contine array-ul: ");
    scanf ("%d", &dim);
    arr = (int*)malloc(dim * sizeof(int));
    citire_d(arr, dim);
    f = fopen ("test.txt" , "w");
    for (int i{}; i < dim; i++)
        fwrite(arr+i, sizeof(int), 1, f);
    f = freopen("test.txt", "r", f);
    while(fscanf (f, "%d", arr+j) != -1) {
        fscanf (f, "%d", arr+j);
        if (*(arr+j) % 2 == 0)
        printf ("Numarul %d este par!\n", *(arr+j));
        else
            printf ("Numarul %d este impar!\n", *(arr+j));
        
            fseek(f, sizeof(int)*2, SEEK_CUR);
        j++;
    }
}

void citire_d (int *arr, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: " , i);
        scanf ("%d" , arr+i);
    }
}

