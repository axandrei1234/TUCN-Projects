/*Axente Andrei Exercitiul8 Lab08 Grupa 2115
 Scrieţi un program care preia de la tastatură “n” valori reale într-un tablou unidimensional, calculează cu o funcţie valoarea medie a valorilor introduse si afişează cu o altă funcţie doar valorile din tablou mai mari decît valoarea medie calculată.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
float tablou_medie(float[], int);
void comparare (float[], int);
int main () {
    float tablou[20];
    int dim {};
    printf ("Introduceti dimensiunea tabloului: ");
    scanf ("%d", &dim);
    while (dim > 20) {
        printf ("Valoarea introdusa nu este corecta! Introduceti o alta valoare: ");
        scanf ("%d" , &dim);
    }
    for (int i{}; i<dim; i++){
        printf ("tablou[%d]: ", i);
        scanf ("%f" , &tablou[i]);
        
}
    printf ("Media este: %.3f\n", tablou_medie(tablou, dim));
    printf ("Numere mai mari decat media sunt: ");
    comparare(tablou, dim);
    printf ("\n");
}


float tablou_medie(float tablou[20], int dim) {
    float suma{};
    for (int i{}; i<dim; i++)
        suma += tablou[i];
    return suma / dim;
}

void comparare (float tablou[20] , int dim) {
    for (int i{}; i<dim; i++)
        if (tablou_medie(tablou,dim) < tablou[i])
            printf ("%f " , tablou[i]);
}
