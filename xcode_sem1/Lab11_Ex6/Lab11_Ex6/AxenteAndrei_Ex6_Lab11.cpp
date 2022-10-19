/*AxenteAndrei Exercitiul6 Lab11 Grupa2115
 Folosiţi alocarea dinamică pentru o matrice m x n cu valori întregi (m, n <7). Initializaţi elementele matricii. Dacă matricea este pătratică, folosiţi metoda lui Sarrus pentru a obţine valoarea determinantului. Afişaţi rezultatul şi eliberaţi memoria.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sarrus (int **);

int main() {
    int m{}, n{};
    int **matrice;
    printf ("Cate linii doriti sa aiba matricea(<7): ");
    scanf ("%d" , &m);
    while (m>7) {
        printf ("Numarul liniilor trebuie sa fie mai mic de 7! Introduceti alta valoare: ");
        scanf ("%d" , &m);
    }
    printf ("Cate coloane doriti sa aiba matricea(<7): ");
    scanf ("%d" , &n);
    while (n>7) {
        printf ("Numarul coloanelor trebuie sa fie mai mic de 7! Introduceti alta valoare: ");
        scanf ("%d" , &n);
    }
    matrice = (int**)malloc(m * sizeof(int*));
    for (int i{}; i < m; i++) {
        *(matrice+i) = (int*)malloc(m * sizeof(int));
        printf ("\tLinia %d\n", i+1);
        for (int j{}; j < m; j++) {
            printf ("x[%d][%d]: ", i+1, j+1);
            scanf ("%d" , *(matrice+i)+j);
        }
    }
    if (m == n && m == 3)
            printf ("Valoarea determinantului este: %d\n" , sarrus(matrice));
    else
        printf ("Matricea nu este de 3x3!\n");
    free (matrice);
    }



int sarrus (int **matrice) {
    int rezultat{};
    rezultat += *(*(matrice+0)+0) * *(*(matrice+1)+1) * *(*(matrice+2)+2);
    rezultat += *(*(matrice+1)+0) * *(*(matrice+2)+1) * *(*(matrice+0)+2);
    rezultat += *(*(matrice+2)+0) * *(*(matrice+0)+1) * *(*(matrice+1)+2);
    rezultat -= *(*(matrice+0)+2) * *(*(matrice+1)+1) * *(*(matrice+2)+0);
    rezultat -= *(*(matrice+1)+2) * *(*(matrice+2)+1) * *(*(matrice+0)+0);
    rezultat -= *(*(matrice+2)+2) * *(*(matrice+0)+1) * *(*(matrice+1)+0);
    return rezultat;
}
