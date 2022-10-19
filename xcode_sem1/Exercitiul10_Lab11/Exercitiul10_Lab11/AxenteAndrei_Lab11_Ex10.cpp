/*AxenteAndrei Exercitiul10 Lab11 Grupa2115
 Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru stocarea elementelor unei matrici de dimensiune nxn. Să se scrie o funcţie care calculează suma numerelor pozitive pare de sub diagonala principală şi o funcţie pentru afişarea matricei. Să se afişeze matricea şi suma cerută. Eliberaţi memoria alocată dinamic.*/
#define _CRT_SECURE_NOT_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire_matrice(int**, int);
void afisare_matrice(int**, int);
int suma_diagp(int**, int);

int main() {
    int **matrice;
    int dim{};
    printf ("Introduceti dimensiunea matricei (linii = coloane): ");
    scanf ("%d" , &dim);
    matrice = (int**)malloc(dim * sizeof(int)*10);
    printf ("Introduceti elementele matricei: \n");
    citire_matrice(matrice, dim);
    printf ("Matricea va arata: \n");
    afisare_matrice(matrice, dim);
    printf ("Suma elementelor pozitive pare de sub diagonala principala este: %d\n" , suma_diagp(matrice,dim));
}

void citire_matrice(int **matrice, int dim) {
    for (int i{}; i < dim; i++) {
        matrice[i] = (int*)malloc(dim * sizeof(int));
        printf("\tLinia %d\n" , i+1);
        for (int j{}; j < dim; j++) {
            printf ("x[%d][%d]: " , i+1, j+1);
            scanf("%d" , &matrice[i][j]);
        }
    }
}

void afisare_matrice(int **matrice, int dim) {
    for (int i{}; i < dim; i++) {
        for (int j{}; j < dim; j++)
            printf ("%d " , *(*(matrice+i)+j));
        printf ("\n");
    }
}


int suma_diagp(int **matrice, int dim) {
    int suma{};
    for (int i{}; i < dim; i++) {
        for (int j{}; j < dim; j++) {
            if (i > j && *(*(matrice+i)+j) > 0 && *(*(matrice+i)+j) % 2 == 0)
                suma += *(*(matrice+i)+j);
        }
    }
    free(matrice);
    return suma;
}

