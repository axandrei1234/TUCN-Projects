/*Axente Andrei Exercitiul9 Lab08 Grupa 2115
 Să se scrie o aplicaţie C/C++ în care se citesc într-un tablou unidimensional “n” valori întregi şi se determină numărul elementelor negative impare. Să se afişeze acest număr şi elementele respective.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;
int numere_impare(int[], int);
void afisare_impare (int[], int);
int main () {
    int tablou[20];
    int dim {};
    printf ("Introduceti dimensiunea tabloului: ");
    scanf ("%d" , &dim);
    while (dim>20){
        printf ("Dimensiunea introdusa este prea mare! Introduceti alta valoare: ");
        scanf ("%d" , &dim);
    }
    for (int i{}; i<dim; i++){
        printf ("x[%d]: " , i);
        scanf ("%d" , &tablou[i]);
    }
    printf ("Tabloul are %d numere impare. Acestea sunt: " , numere_impare(tablou,dim));
    afisare_impare(tablou, dim);
    printf ("\n");
    
}

int numere_impare (int tablou[20], int dim) {
    int contor{};
    for (int i{}; i<dim; i++)
        if (abs(tablou[i]) % 2 == 1 && tablou[i] < 0)
            contor++;
    
    return contor;
}
                                            
void afisare_impare (int tablou[20], int dim) {
    for (int i{}; i<dim; i++)
        if (abs(tablou[i]) % 2 == 1 && tablou[i] < 0)
            printf ("%d " , tablou[i]);
}
            
