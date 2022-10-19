/*AxenteAndrei Exercitiul4 Lab13 Grupa2115
 Scrieţi un program C/C++ care citeşte de la tastatură un caracter apoi scrie acest caracter într-un fişier text pe n linii, câte n caractere pe fiecare linie, n citit de la consola.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    char c;
    int dim{};
    f = fopen("test.txt", "w");
    printf ("Introduceti dimensiunea: ");
    scanf ("%d" , &dim);
    getchar();
    printf ("Introduceti un caracter: ");
    scanf ("%c" , &c);
        for (int i{}; i < dim; i++) {
            fprintf (f, "%c ", c);
            for (int j{}; j < dim; j++)
                fprintf (f, "%c ", c);
            fprintf (f, "\n");
        }
    
    fclose (f);
}
