/*AxenteAndrei Exercitiul6 Lab13 Grupa2115
 Scrieţi un program C/C++ care citeşte de la tastatură valori reale în format float, cu confirmare. Valorile citite vor fi scrise într-un fişier text cu numele citit din linia de comandă. Citiţi apoi fişierul şi afişati valorile mai mari decât o valoare dată, citită de la tastatură.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    float *nr;
    char decizie[10];
    int dim{};
    float var{};
    
    FILE *f;
    f = fopen (argv[0], "w+");
    if (f == NULL) {
        perror("Nu s-a putut crea fisierul");
        exit(1);
    }
    printf ("Cate numere doriti sa introduceti: ");
    scanf ("%d",  &dim);
    nr = (float*) malloc (dim * sizeof(nr));
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: ", i);
        scanf ("%f" , nr+i);
        printf ("Este corect numarul introdus: DA   /   NU\n");
        scanf ("%s" , decizie);
        while (strcmp(decizie , "NU") == 0) {
            printf ("x[%d]: ", i);
            scanf ("%f", nr+i);
            printf ("Este corect numarul introdus: DA   /   NU\n");
            scanf ("%s" , decizie);
        }
        if (strcmp(decizie , "DA") == 0) {
            fprintf (f, "%.3f ", *(nr+i));
            printf ("Numar introdus\n");
        }
    }
    fclose(f);
    f = fopen (argv[0], "r");
    printf ("Introduceti un numar: ");
    scanf ("%f", &var);
    printf ("Numerele mai mari decat %.3f sunt: " , var);
    for (int i{}; i < dim; i++) {
        fscanf (f, "%f", nr+i);
        if (*(nr+i) > var)
            printf("%.3f, " , *(nr+i));
    }
    printf ("\n");
    fclose(f);
    free(nr);
}
        
