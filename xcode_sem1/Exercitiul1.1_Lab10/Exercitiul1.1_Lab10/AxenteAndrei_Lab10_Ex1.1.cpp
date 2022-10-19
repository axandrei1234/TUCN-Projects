/*Axente Andrei Exercitiul 1.1 Lab10 Grupa 2115
 Scrieţi un program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un tablou unidimensional
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void citire (int*, int);
float media_p (int*, int);
float media_n (int*, int);

int main () {
    int *tab;
    int dim{};
    printf("Introduceti dimensiunea tabloului: ");
    scanf("%d" , &dim);
    tab = (int*)malloc(dim * sizeof(int));
    citire (tab, dim);
    printf ("media elementelor pozitive din tablou este: %f\n" , media_p(tab, dim));
    printf ("media elementelor negative din tablou este: %f\n" , media_n(tab, dim));

}

void citire (int *tab, int dim) {
    for (int i{}; i<dim; i++){
        printf ("x[%d]: ", i);
        scanf ("%d" ,tab+i);
    }
}

float media_p (int *tab, int dim) {
    float sum{};
    int contor{};
    for (int i{}; i<dim; i++){
        if (*(tab+i)>0){
            sum += *(tab+i);
        contor++;
        }
    }
    return sum/(float)contor;
}

float media_n (int *tab, int dim) {
    float sum{};
    int contor{};
    for (int i{}; i<dim; i++){
        if (*(tab+i)<0) {
            sum += *(tab+i);
            contor++;
        }
       
    }
    return sum/(float)contor;
}


