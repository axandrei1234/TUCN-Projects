/*Axente Andrei Exerctitiul2 Lab11 Grupa2115
 Fie o aplicaţie de gestiune distribuită care consideră că tratează activitatea din 5 oraşe diferite în fiecare oraş fiind 3 birouri de vânzare pe teritoriul respectiv. Să se creeze în cadrul unei funcţii un tablou de 5 pointeri către date de tip flotant, fiecare pointer din acest tablou referind o zonă în heap alocată dinamic de 3 date flotante ce reprezintă situaţia vânzărilor la sfărşitul unei zile. Se cere prelucrarea datelor din fiecare oraş, respectiv din fiecare birou de vânzare, prelucrare ce va include:
- funcţie care permite introducerea datelor pentru cele 5 oraşe şi respectiv pentru fiecare oraş pentru cele 3 magazine din oraş;
- funcţie ce permite determinarea totalului de vânzări pe fiecare oraş în parte, valoare pe care o va returna astfel că în programul principal se va calcula şi afişa media vânzărilor din toate cele 5 oraşe;
- funcţie care va permite eliberarea spaţiului de memorie alocat dinamic astfel încât dacă aceeaşi firmă are alte 3 magazine în cele 5 oraşe de profil diferit să poată realoca un spaţiu echivalent pentru noile prelucrări pe care le va efectua.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire_date(float**, int, int);
void afisare_date(float**, int, int);
float suma_date(float**, int, int);
int main () {
    float **oras;
    int linii = 5;
    int coloane = 3;
    float suma{};
    float medie{};
    oras = (float**)malloc(linii * sizeof(float));
    printf ("Datele birourilor de vanzare din cele 5 orase sunt: \n");
    citire_date(oras,linii,coloane);
    printf ("Datele vor arata in felul urmator: \n");
    afisare_date(oras,linii,coloane);
    for (int i{}; i < linii; i++) {
        printf ("Suma vanzarilor din orasul %d este: %.3f\n" , i+1, suma_date(oras, coloane, i));
    }
    for (int i{}; i < linii; i++)
        suma += suma_date(oras,coloane,i);
    free (oras);
    printf ("%f" ,oras[1][1]);
    printf ("Suma vanzarilor a celor 15 birouri este: %.3f \n" , suma);
    medie = suma / linii;
    printf ("Media vanzarilor a celor 15 birouri este: %.3f \n" , medie);
}

void citire_date(float **oras, int linii, int coloane) {
    if (oras)
    for (int i{}; i < linii; i++) {
        *(oras+i) = (float*)malloc(coloane * sizeof(float));
        printf ("\tOras %d: \n" , i+1);
        for (int j{}; j < coloane; j++) {
            printf ("Birou[%d]: " , j+1);
            scanf ("%f" , &oras[i][j]);
        }
    }
}

void afisare_date(float **oras, int linii, int coloane) {
    for (int i{}; i < linii; i++) {
        for (int j{}; j < coloane; j++)
            printf ("%.3f " , *(*(oras + i) + j));
        printf ("\n");
    }
}

float suma_date(float **oras, int coloane, int i) {
    float sum{};
    for (int j{}; j < coloane; j++) {
            sum += *(*(oras+i)+j);
    }
    return sum;
}
            
