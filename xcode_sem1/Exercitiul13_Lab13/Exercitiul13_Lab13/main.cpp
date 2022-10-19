/*Definiti o structura Prajitura, cu campurile nume, nr_bucati, pret.
 - cititi de la tastatura datele pentru un numar n de prajituri si salvati aceste date intr-un
 fisier binar.
 - cititi apoi inregistrările din fişier şi afişati toate informaţiile despre prăjitura cea mai
 ieftină.*/

#include <stdio.h>
#include <stdlib.h>

struct Prajitura {
    char nume[256];
    int nr_bucati;
    int pret;
};
void citire_s (struct Prajitura *p, int);
int main() {
    int min = 1000;
    struct Prajitura *p;
    FILE *f;
    int dim{};
    printf ("Cate prajituri doriti sa introduceti: ");
    scanf ("%d" , &dim);
    p = (struct Prajitura *)malloc(dim * sizeof(struct Prajitura));
    f = fopen("test.txt" , "w");    
    citire_s(p,dim);
    for (int i{}; i < dim; i++)
        fwrite(p+i, sizeof(struct Prajitura *), 1, f);
     freopen("test.txt", "r", f);
    fseek(f, 0, SEEK_SET);
    for (int i{}; i < dim; i++) {
        fread (p+i, sizeof(struct Prajitura*), 1, f);
        printf ("Citirea prajiturilor din fisier: \n\nNume Prajitura: %s\nNumar Bucati: %d\nPret: %d\n" , (p+i)->nume, (p+i)->nr_bucati, (p+i)->pret);
    }
    for (int j{}; j < dim; j++)
        if ((p+j)->pret < min) {
            min = (p+j)->pret;
    }
    for (int k{}; k < dim; k++) {
        if ((p+k)->pret == min) {
            printf ("Cea mai ieftina prajitura este: \n\nNume Prajitura: %s\nNumar Bucati: %d\nPret: %d\n" , (p+k)->nume, (p+k)->nr_bucati, (p+k)->pret);
        }
    }
}

void citire_s (struct Prajitura *p, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("Nume Prajitura: ");
        scanf ("%s" , (p+i)->nume);
        printf ("Numar Bucati: ");
        scanf ("%d" , &(p+i)->nr_bucati);
        printf ("Pret: ");
        scanf ("%d" , &(p+i)->pret);
        printf ("\n");
    }
}
