/*AxenteAndrei Sesiune2022 Grupa2115
 1) Definiți structura Oras cu câmpurile: nume (șir de caractere), judet (șir de caractere), suprafata (double), locuitori (int). Alocați dinamic un tablou pentru stocarea a n elemente de tip Oras (n va fi citit de la tastatură, 2<=n<=10). Eliberați acest spațiu la terminarea programului.
 2) Scrieți o funcție pentru citirea valorilor câmpurilor unui articol de tip Oraș si utilizați această funcție pentru a citi valori pentru toate elementele tabloului alocat dinamic.
 3) Scrieți o funcție care va fi utilizată pentru afișarea elementelor de tip Oras din tablou.
 4) Scrieți o funcție care determină orașul cu densitatea de populație cea mai mică. Apelați această funcție și afișați pe ecran (în main()) numele orașului respectiv și densitatea de populație.
 5) Scrieți într-un fișier text cu numele citit de la tastatură toate informațiile despre orasul de la punctul 4).
 6) Scrieți o funcție care returnează suprafața medie a orașelor din județul Cluj. Afișați în main() valoarea calculată și adăugați-o în fișier, pe linie nouă.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Oras {
    char nume[256];
    char judet [256];
    double suprafata;
    int locuitori;
};
void citire_o (struct Oras *o, int);
void afisare_o (struct Oras *o, int);
void d_mica (FILE *f,struct Oras *o, int);
double s_medie (struct Oras *o, int);

int main() {
    FILE *f;
    char nume[256];

    struct Oras *o;
    int n{};
    printf ("Cate orease doriti sa introduceti: ");
    scanf ("%d" , &n);
    while (n <= 2 || n >= 10) {
        printf ("Puteti introduce intre 2 si 10 orase! Incercati alta valoare: ");
        scanf ("%d" , &n);
    }
    o = (struct Oras *)malloc(n * sizeof(struct Oras));
    if (o==NULL) {
        printf ("Alocarea a esuat!");
        exit(1);
    }
    printf ("Introduceti numele fisierului: ");
    scanf ("%s" , nume);
    f = fopen (nume, "w");

    citire_o(o, n);
    afisare_o(o, n);
    d_mica(f, o, n);
    printf ("densitatea medie este de: %lf" , s_medie(o,n));
}

void citire_o (struct Oras *o, int n) {
    for (int i{}; i < n; i++) {
        printf ("\tOras %d\n" , i+1);
        printf ("Nume oras: ");
        scanf ("%s" ,(o+i)->nume);
        getchar();
        printf ("Judet: ");
        scanf ("%s" , (o+i)->judet);
        printf ("Suprafata: ");
        scanf("%lf" , &(o+i)->suprafata);
        printf ("Numar locuitori: ");
        scanf ("%d" , &(o+i)->locuitori);
        printf ("\n");
    }
}

void afisare_o (struct Oras *o, int n) {
    for (int i{}; i < n; i++) {
        printf ("\tOras %d\n" , i+1);
        printf ("Nume oras: %s\n", (o+i)->nume);
        printf ("Judet: %s\n", (o+i)->judet);
        printf ("Suprafata: %lf\n", (o+i)->suprafata);
        printf ("Numar locuitori: %d\n\n", (o+i)->locuitori);
    }
}

void d_mica (FILE *f,struct Oras *o, int n) {
    double *densitate;
    double min;
    densitate = (double*)malloc(n * sizeof(double));
    if (densitate == NULL) {
        printf ("Alocare esuata!");
    }
    for (int i{}; i < n; i++) {
        densitate[i] = (o+i)->locuitori / (o+i)->suprafata;
        if (i==0)
            min = densitate[i];
        else
            if (min > densitate[i])
                min = densitate[i];
        
    }
    for (int j{}; j < n; j++)
        if (densitate[j] == min) {
            printf ("Orasul cu cea mai mica densitate este: ");
            printf ("%s\n", (o+j)->nume);
            printf ("Densitate: %lf\n" , densitate[j]);
            fprintf (f, "%s\n" ,(o+j)->nume);
            fprintf (f, "%s\n", (o+j)->judet);
            fprintf (f, "%lf\n" , (o+j)->suprafata);
            fprintf (f, "%d\n",  (o+j)->locuitori);
        }
    
}
double s_medie (struct Oras *o, int n) {
    double medie{};
    for (int i{}; i < n; i++) {
        medie += (o+i)->suprafata;
    }
    return medie/(double)n;
}

