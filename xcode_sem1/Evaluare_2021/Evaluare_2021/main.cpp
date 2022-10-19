/*Scrieti o aplicatie C/C++ cu urmatoarele cerinte:
 1) Definiti structura Produs cu campurile: denumire (sir de caractere), pret (double), cantitate (int).
 Alocati dinamic un tablou pentru stocarea a n articole de tip Produs (n va fi citit de la tastatura).
 2) Scrieti o functie pentru citirea valorilor campurilor unui articol de tip Produs si utilizati aceasta
 functie pentru a citi valori pentru toate elementele tabloului alocat dinamic.
 3) Scrieti o functie pentru afisarea unui articol de tip Produs si afisati informatiile despre toate
 produsele din tablou.
 4) In fisierul text “produs.txt” sunt stocate informatiile referitoare la un produs, de exemplu:
 mere 4.5 100 (reprezentand: denumire pret cantitate - pentru un produs) .
 Scrieti o functie care verifica daca in tabloul de produse exista produsul ce are numele specificat
 in fisier. Daca exista, functia afiseaza pozitia in care a fost gasit si valoarea stocului acelui
 produs (cant x pret). Daca nu exista, va afisa mesajul “Nu exista”.
 5) Scrieti o functie care determina ce produs din tablou are stocul cel mai mare (cant cea mai
 mare) si returneaza acel produs. In main() se va afisa denumirea acelui produs.
 6) Adaugati la sfarsitul fisierului “produs.txt” produsul cu stocul cel mai mare (camp cu camp).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void citire_p(struct Produs *p, int);
void afisare_p(struct Produs *p, int);
void cautare_p(FILE *,struct Produs *p, int);
char* max_p (struct Produs *p, int);

struct Produs {
    char denumire[256];
    double pret;
    int cantitate;
};

int main() {
    int max{};
    FILE *f;
    struct Produs *p;
    int n{};
    printf ("Cate produse doriti sa introduceti: ");
    scanf ("%d" , &n);]=
    p = (struct Produs *)malloc(n * sizeof(struct Produs));
    citire_p(p,n);
    f = fopen("produs.txt" , "r");
    afisare_p(p,n);
    cautare_p(f,p,n);
    
    printf ("Produsul cu cea mai mare cantitate este: %s\n" , max_p(p,n));
    for (int i{}; i < n; i++) {
        if (max < (p+i)->cantitate)
            max = (p+i)->cantitate;
    }
    for (int j{}; j < n; j++) {
        if ((p+j)->cantitate == max) {
            fprintf (f, "Denumire: %s\n Pret: %lf\n" , (p+j)->denumire, (p+j)->pret);
        }
    }
    
    free (p);
    fclose (f);
}

void citire_p(struct Produs *p, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("\tProdus %d\n" , i+1);
        printf ("Denumire Produs: "); scanf ("%s" , (p+i)->denumire);
        printf ("Pret: "); scanf ("%lf" , &(p+i)->pret);
        printf ("Cantitate: "); scanf ("%d" , &(p+i)->cantitate);
        printf ("\n");
    }
}

void afisare_p(struct Produs *p, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("\nDenumire Produs: %s\n" , (p+i)->denumire);
        printf ("\nPret: %lf\n" , (p+i)->pret);
        printf ("\nCantitate: %d\n" , (p+i)->cantitate);
        printf ("\n");
    }
}

void cautare_p(FILE *f,struct Produs *p, int dim) {
    
    char cautare[256];
    fscanf (f, "%s"  , cautare);
    int contor{};
    getchar();
    for (int i{}; i < dim; i++) {
        if (strcmp(cautare, (p+i)->denumire) == 0) {
            printf ("%s a fost gasit pe pozitia: %d\n\n" , (p+i)->denumire, i);
            printf ("Pret: %lf\n" , (p+i)->pret);
            printf ("Cantitate: %d\n" , (p+i)->cantitate);
            contor++;
        }
            if (contor == 0)
            printf ("Nu exista!\n");
    }
}

char *max_p(struct Produs *p, int dim) {
    int max{};
    for (int i{}; i < dim; i++)
        if (max < (p+i)->cantitate)
            max = (p+i)->cantitate;
    for (int j{}; j < dim; j++)
        if ((p+j)->cantitate == max)
            return (p+j)->denumire;
    return 0;
}
