/*AxenteAndrei Exercitiul10 Lab12 Grupa2115
 Să se definească o structură cu numele Masina, care are câmpurile producator, anul fabrictiei, capacitatea_cilindrică și culoare. Să se aloce dinamic memorie pentru n date de tip Maşina şi să se citească informaţiile pentru acestea. Să se afişeze inregistrarile maşinilor de culoare roşie, fabricate după anul 2010.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Masina {
    char producator[256];
    int anul_fabricatiei;
    int capacitate_cilindrica;
    char culoare[256];
};
void inregistrari (struct Masina *m, int);
void afisare (struct Masina *m);
int main() {
    struct Masina *m;
    int dim{};
    printf ("Cate masini doriti sa introduceti in lista: ");
    scanf ("%d" , &dim);
    m = (struct Masina*)malloc(dim * sizeof(struct Masina));
    inregistrari(m, dim);
    for (int i{}; i < dim; i++) {
        if ((m+i)->anul_fabricatiei > 2010 && strcmp((m+i)->culoare , "Rosu") == 0) {
            afisare(m+i);
            
        }
    }
    free(m);
}

void inregistrari (struct Masina *m, int dim) {
    for (int i{}; i < dim; i++) {
        getchar();
        printf ("Producator: "); scanf ("%s" , (m+i)->producator);
        printf ("An Fabricatie: "); scanf ("%d" , &(m+i)->anul_fabricatiei);
        printf ("Capacitate cilindrica: "); scanf ("%d" , &(m+i)->capacitate_cilindrica);
        printf ("Culoare: "); scanf ("%s" , (m+i)->culoare);
        printf ("\n");
    }
}

void afisare (struct Masina *m) {
    printf ("Producator: %s\n" , m->producator);
    printf ("An Fabricatie: %d\n" , m->anul_fabricatiei);
    printf ("Capacitate cilindru: %d\n" , m->capacitate_cilindrica);
    printf ("Culoare: %s\n\n" , m->culoare);
}
