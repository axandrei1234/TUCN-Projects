/*AxenteAndrei Ex3 Lab13 Grupa2115
 Scrieţi un program care citeşte de la consolă n numere întregi pe care le scrie într-un fişier text cu numele citit de la tastatură. Citiţi apoi numerele din fişier, determinaţi media lor aritmetică, pe care o adăugaţi la sfârşitul fişierului şi o afişaţi şi pe ecran.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>(

int main() {
    FILE *f;
    int var[100];
    int dim;
    int sum{};
    printf ("Introduceti dimensiunea array-ului: ");
    scanf ("%d" , &dim);
    f = fopen("test.txt", "w");
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: ", i);
        scanf ("%d" , &var[i]);
        sum += var[i];
    }
    fprintf (f, "%s", "Numerele din fisier sunt: ");
    for (int i{}; i < dim; i++) {
        fprintf (f, "%d ", var[i]);
    }
    fprintf (f,"%s %.3f ", "\nMedia numerelor din array este: ", sum/(float)dim);
    fclose (f);
    printf ("Media numerelor din array este: %.3f\n", sum/(float)dim);
    
}
