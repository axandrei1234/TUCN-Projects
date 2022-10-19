/*Axente Andrei Exercitiul3 Lab11 Grupa2115
 Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru stocarea elementelor a două matrici de "m" linii şi "n" coloane. Să se scrie o funcţie care calculează suma celor două matrici şi o funcţie pentru afişarea unei matrici. Să se afişeze matricile iniţiale şi matricea obţinută.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire_matrice(int**, int, int);
void afisare_matrice(int**, int, int);
void suma_matrice(int**, int**, int**, int, int);
int main() {
    int **matrice1 , linii1{}, coloane1{};
    int **matrice2, linii2{}, coloane2{};
    int **matrice3;
    printf ("Introduceti numarul de linii pentru prima matrice: ");
    scanf ("%d" , &linii1);
    printf ("Introduceti numarul de coloane pentru prima matrice: ");
    scanf ("%d" , &coloane1);
    printf ("Introduceti numarul de linii pentru a doua matrice: ");
    scanf ("%d" , &linii2);
    printf ("Introduceti numarul de coloane pentru a doua matrice: ");
    scanf ("%d" , &coloane2);
    
    while (linii1 != linii2) {
        printf ("Cele 2 matrici trebuie sa aiba acelasi numar de linii! Introduceti valori corecte.\n");
        printf ("linii1: ");
        scanf ("%d" , &linii1);
        printf ("linii2: ");
        scanf ("%d" , &linii2);
    }
    while (coloane1 != coloane2) {
        printf ("Cele 2 matrici trebuie sa aiba acelasi numar de coloane! Introduceti valor corecte.\n");
        printf ("coloane1: ");
        scanf ("%d" , &coloane1);
        printf ("coloane2: ");
        scanf ("%d" , &coloane2);
    }
    matrice1 = (int**)malloc(linii1 * sizeof(int));
    matrice2 = (int**)malloc(linii2 * sizeof(int));
    matrice3 = (int**)malloc(linii1 * sizeof(int));
    printf ("Introduceti elementele primei matrici: \n");
    citire_matrice(matrice1, linii1, coloane1);
    printf ("Introduceti elementele celei de a doua matrice: \n");
    citire_matrice(matrice2, linii2, coloane2);
    printf ("Matricea1: \n");
    afisare_matrice(matrice1, linii1, coloane1);
    printf ("Matricea2: \n");
    afisare_matrice(matrice2, linii2, coloane2);
    suma_matrice(matrice1, matrice2, matrice3, linii1, coloane1);
    printf ("Matrice3: \n");
    afisare_matrice(matrice3, linii1, coloane1);
}

void citire_matrice(int **matrice, int linii, int coloane) {
    for (int i{}; i < linii; i++) {
        *(matrice+i) = (int*)malloc(coloane * sizeof(int));
        printf ("\tLinia %d\n" , i+1);
        for (int j{}; j < coloane; j++) {
            printf ("x[%d][%d]: " , i+1, j+1);
            scanf ("%d" , *(matrice+i)+j);
        }
    }
}

void afisare_matrice(int **matrice, int linii, int coloane) {
    for (int i{}; i < linii; i++) {
        for (int j{}; j < coloane; j++)
            printf ("%d " , *(*(matrice+i)+j));
        printf ("\n");
    }
}

void suma_matrice(int **matrice1, int **matrice2, int **matrice3, int linii, int coloane) {
    for (int i{}; i < linii; i++) {
        *(matrice3 + i) = (int*)malloc(coloane * sizeof(int));
        for (int j{}; j < coloane; j++)
            *(*(matrice3+i)+j) = *(*(matrice1+i)+j) + *(*(matrice2+i)+j);
    }
}
                            
