/*AxenteAndrei Ex2 Lab13 Grupa2115
 Să se scrie un program care citeşte dintr-un fişier text 10 numere întregi (generat in prealabil prin program sau extern). Să se scrie funcţiile care:
 a. aranjează crescător/descrescator şirul si afiseaza rezultatul; b. numără câte elemente sunt pare si afiseaza rezultatul. Adăugați în fișierul original noile rezultate obținute.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * , const void * );
int main() {
    FILE *f;
    int var[10];
    int x{};
    int contor{};
    f = fopen("test.txt", "r");
    for (int i{}; i < 10; i++) {
        fscanf (f, "%d", &x);
        var[i] = x;
        
    }
    qsort(var, 10, sizeof(int), cmpfunc);
    fclose (f);
    f = fopen("test.txt", "w");
    printf ("Numerele aranjate in ordine crescatoare: ");
    for (int i{}; i < 10; i++)
        printf ("%d " , var[i]);
    // a)
    for (int i{}; i < 10; i++) {
        if (var[i] % 2 == 0)
            contor++;
            }
    printf ("\nSunt %d numere pare!\n" , contor);
    fprintf (f, "%s" , "Numerele sunt: ");
    for (int i{}; i < 10; i++) {
        fprintf (f, "%d ", var[i]);
    }
    fprintf (f, "%s %d %s", "\nExista", contor, "numere pare!\n");
    fclose (f);
    // b)
}





int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
    
