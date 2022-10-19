/*AxenteAndrei Exercitiul4 Lab12 Grupa2115
 Să se scrie o aplicaţie C/C++, care utilizând o structură de tip Angajat, să afişeze toate datele persoanelor cu ocupaţia inginer dintr-o întreprindere (nume, prenume, ocupaţia, data naşterii, secţia în care lucrează).*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct angajat {
    char nume[256];
    char prenume[256];
    char ocupatia[256];
    int zi;
    int luna;
    int an;
    char sectie[256];
};
void inginer (struct angajat *a, int);
int main() {
    struct angajat *a;
    int dim{};
    printf ("Introduceti numarul de angajati: ");
    scanf ("%d" , &dim);
    a = (struct angajat*)malloc(dim * sizeof (struct angajat));
    inginer (a,dim);
    free(a);
}

void inginer (struct angajat *a, int dim) {
    int contor{};
    int contor1{};
    for (int i{}; i < dim; i++) {
        printf ("Nume: "); scanf ("%s" , (a+i)->nume);
        if (strcmp ((a+i)->nume , "Dulap") != 0) {
            printf ("Prenume: "); scanf ("%s" , (a+i)->prenume);
            printf ("Ocupatia: "); scanf ("%s" , (a+i)->ocupatia);
            if (strcmp ((a+i)->ocupatia , "Inginer") == 0 || strcmp ((a+i)->ocupatia , "inginer") == 0)
                contor++;
            printf ("Zi: "); scanf ("%d" , &(a+i)->zi);
            printf ("Luna: "); scanf("%d" , &(a+i)->luna);
            printf ("An: "); scanf ("%d" , &(a+i)->an);
            printf ("Sectie: "); scanf ("%s" , (a+i)->sectie);
            printf ("\n");
            contor1++;
        }
        else
            break;
    }
    printf ("Angajatii care au ocupatia de inginer sunt: %d \n\n", contor);
    for (int i{}; i < contor1; i++) 
        if (strcmp ((a+i)->ocupatia , "Inginer") == 0 || strcmp ((a+i)->ocupatia , "inginer") == 0) {
            printf ("Nume: %s\n" , (a+i)->nume);
            printf ("Prenume: %s\n" , (a+i)->prenume);
            printf ("Ocupatie: %s\n" , (a+i)->ocupatia);
            printf ("Zi: %d\n" , (a+i)->zi);
            printf ("Luna: %d\n" , (a+i)->luna);
            printf ("An: %d\n" , (a+i)->an);
            printf ("Sectie: %s\n\n" , (a+i)->sectie);
        }
}
