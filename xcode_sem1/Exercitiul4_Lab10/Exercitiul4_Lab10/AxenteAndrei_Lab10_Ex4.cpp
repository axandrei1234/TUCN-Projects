/*Axente Andrei Exercitiul4 Lab10 Grupa2115
 Citiţi de la tastatură elementele a 2 matrici de valori întregi. Scrieţi o funcţie care primeşte ca parametri pointerii la cele 2 matrici şi returnează un pointer la matricea sumă. Rezultatul însumării matricelor va fi afişat în funcţia main. Afişaţi elementele de pe diagoanala secundară a matricii sumă, folosind acelaşi pointer.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire_matrice (int**, int);
void afisare_matrice (int**, int);
void suma_matrice (int **, int**, int**, int);
void diagonala_matrice (int **, int);
int main() {
    int **matrice1 , **matrice2;
    int **matrice3;

    int dim1{};
    int dim2{};
    printf ("ACEASTA APLICATIE VA ADUNA 2 MATRICI (L1 = L2 && C1 = C2\n");
    printf ("Introduceti dimensiunea primei matrici(L=C): ");
    scanf ("%d" , &dim1);
    printf ("Introduceti dimensiunea matricei 2(L=C): ");
    scanf ("%d" , &dim2);
    while (dim1 != dim2) {
        printf ("Cele 2 dimensiuni trebuie sa fie egale!Introduceti alte valori.\n");
        printf ("dim1: ");
        scanf ("%d" , &dim1);
        printf ("dim2: ");
        scanf ("%d" , &dim2);
    }
    matrice1 = (int **)malloc(dim1 * sizeof(int));
    matrice2 = (int **)malloc(dim2 * sizeof(int));
    matrice3 = (int **)malloc (dim1 * sizeof(int));
    printf ("Introduceti elementele primei matrici: \n");
    citire_matrice (matrice1, dim1);
    printf ("Introduceti elementele matricei 2: \n");
    citire_matrice (matrice2, dim2);
    printf ("prima matrice va arata: \n");
    afisare_matrice (matrice1, dim1);
    printf ("a doua matrice va arata: \n");
    afisare_matrice (matrice2, dim2);
    printf ("matrice1 + matrice2 = \n");
    suma_matrice (matrice3, matrice1, matrice2, dim1);
    printf ("elementele de pe diagonala secundara a matricei suma sunt: ");
    diagonala_matrice (matrice3, dim1);
}

void citire_matrice (int **matrice, int dim) {
    if (matrice)
    for (int i{}; i < dim; i++)
        matrice[i] = (int *)malloc(dim * sizeof(int));
    for (int i{}; i < dim; i++) {
        printf ("\tLinia %d\n" , i+1);
        for (int j{}; j < dim; j++){
            printf ("x[%d][%d]: " , i+1, j+1);
            scanf ("%d" , &matrice[i][j]);
        }
    }
}

void afisare_matrice (int **matrice, int dim) {
    for (int i{}; i < dim; i++) {
        for (int j{}; j < dim; j++)
            printf ("%d " , matrice[i][j]);
        printf ("\n");
    }
}

void suma_matrice (int **matrice, int **matrice1, int **matrice2, int dim) {
    for (int i{}; i < dim; i++) {
        matrice[i] = (int *)malloc(dim * sizeof(int));
        for (int j{}; j < dim; j++)
            matrice[i][j] = matrice1[i][j] + matrice2[i][j];
    }
    for (int i{}; i < dim; i++) {
        for (int j{}; j < dim; j++)
            printf ("%d " , matrice[i][j]);
        printf ("\n");
    }
    free(matrice1);
    free(matrice2);
}

void diagonala_matrice (int **matrice, int dim) {
    for (int i{}; i < dim; i++) {
        for (int j{}; j < dim; j++)
            if (i == dim-j-1)
                printf ("%d " , matrice[i][j]);
    }
    free(matrice);
}

    
  
    

        
    
    


