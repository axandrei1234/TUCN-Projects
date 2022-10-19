/*AxenteAndrei Tentativa test*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Minge{
    char nume[30];
    char culoare[30];
    double diametru;
};
void citire_m (struct Minge *m, int);
void afisare_m(struct Minge *m, int);

int main() {
    FILE *f;
    struct Minge *m;
    int n{}; //dim {} pleaca de la 0
    printf ("Cate mingi doriti sa introduceti de la tastatura: ");
    scanf ("%d" , &n);
    while (n>100) { // in caz ca dimensiunea depaseste 100
        printf ("Valoarea trebuie sa fie mai mica decat 100! Reintroduceti valoarea: ");
        scanf ("%d" , &n);
    }
    m = (struct Minge *)malloc(n * sizeof(struct Minge));
    if ( m == NULL ) {
        printf ("Eroare la alocare!\n");
        exit(1);
    }
    citire_m(m, n);
    afisare_m(m, n);
    f = fopen ("test.txt" , "wb");
    if ( f == NULL ) {
        printf ("Eroare la creare fisier!\n");
        exit(2);
    }
    for (int i{}; i < n; i++)
        fwrite(m+i, sizeof(struct Minge *), n, f); // scriere binara in fisier
    
}

void citire_m (struct Minge *m, int n) {
    for (int i{}; i < n; i++) {
        printf ("\tMinge %d\n", i+1);
        printf ("Nume minge: ");
        scanf ("%s" , (m+i)->nume);
        getchar();
        printf ("Culoare: ");
        scanf ("%s" , (m+i)->culoare);
        printf ("Diametru: ");
        scanf ("%lf" , &(m+i)->diametru);
        printf ("\n");
        
    }
}

void afisare_m (struct Minge *m, int n) {
    for (int i{}; i < n; i++) {
        printf ("Minge %d" , i+1);
        printf ("\n\nNume minge: %s\n" , (m+i)->nume);
        printf ("Culoare: %s\n" , (m+i)->culoare);
        printf ("Diametru: %lf\n\n" , (m+i)->diametru);
    }
}
