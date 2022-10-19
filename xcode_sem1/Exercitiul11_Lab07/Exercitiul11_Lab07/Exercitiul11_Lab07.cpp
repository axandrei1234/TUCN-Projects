/*Axente Andrei Exercitiul11 Lab07 Grupa 2115
 Scrieti un program care citeşte de la tastatură n numere întregi. Afişaţi toate numerele impare din
 şir.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
void impar (int[], int);

int main() {
    int tablou [20];
    int dim {};
    printf ("Introduceti numarul de valori pentru vector: ");
    scanf ("%d" , &dim);
    if (dim > 20)
        printf ("Valoarea introdusa nu este corecta!\n");
    for (int i {}; i < dim; i++){
        printf ("x[%d]: " ,i);
        scanf ("%d" , &tablou[i]);
    }
    impar(tablou, dim);
    return 0;
}

void impar (int tablou[], int dim) {
    for (int i{}; i <dim; i++)
        if (tablou[i] % 2 == 1)
            printf("%d ", tablou[i]);
}
