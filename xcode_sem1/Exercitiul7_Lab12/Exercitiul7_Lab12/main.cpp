/*AxenteAndrei Exercitiul7 Lab12 Grupa2115
 Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru datele a n studenţi, (nume, prenume si gen), citeşte datele pentru fiecare din aceştia, afişează numărul studentelor si elibereaza memoria alocată.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studenti {
    char nume[256];
    char prenume[256];
    char gen[256];
};
void studente (struct studenti *s, int);
int main() {
    struct studenti *s;
    int dim{};
    printf ("Introduceti numarul de studenti: ");
    scanf ("%d" , &dim);
    s = (struct studenti *) malloc (dim * sizeof(struct studenti ));
    studente (s,dim);
    free (s);
}

void studente (struct studenti *s, int dim) {
    int contor{};
    for (int i{}; i < dim; i++) {
        printf ("Nume: "); scanf ("%s" , (s+i)->nume);
        if (strcmp((s+i)->nume , "Nela") != 0 ) {
            printf ("Prenume: "); scanf ("%s" , (s+i)->prenume);
            printf ("Gen: "); scanf ("%s" , (s+i)->gen);
            printf ("\n");
            if (strcmp((s+i)->gen , "Feminin") == 0 || strcmp((s+i)->gen , "feminin") == 0)
                contor++;
        }
        else
            break;
    }
    printf ("Sunt %d studente!\n" , contor);
}
