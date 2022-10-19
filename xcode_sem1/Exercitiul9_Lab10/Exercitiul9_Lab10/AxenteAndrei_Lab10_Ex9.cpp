/*Axente Andrei Exercitiul9 Lab10 Grupa2115
 Scrieţi un program care citeşte de la tastatură elementele de tip float ale unui tablou
 unidimensional, elemente ce reprezintă mediile unei grupe de studenţi. Să se scrie o funcţie care determină numărul studenţilor cu media >= 8. Afişaţi rezultatul în main. (lucrati cu pointeri, fără variabile globale).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire_arr(float*, int);
void afisare_medii(float*, int);
int main() {
    float arr[20];
    int dim{};
    printf ("Introduceti numarul de medii ale studentilor(de la 1 la 10): ");
    scanf ("%d", &dim);
    while (dim>20){
        printf ("dimensiunea este prea mare! Introduceti alta valoare: ");
        scanf ("%d", &dim);
    }
    citire_arr(arr,dim);
    afisare_medii(arr,dim);
    
}

void citire_arr(float *arr, int dim) {
    for (int i{}; i<dim; i++){
        printf ("x[%d]: " , i);
        scanf ("%f" , arr+i);
        while (*(arr+i)<0 || *(arr+i)>10) {
        printf("Media este cuprinsa intre 0 si 10! Incercati din nou!\n");
        printf ("x[%d]: " , i);
        scanf ("%f" , arr+i);
        }
    }
}
    
void afisare_medii(float *arr, int dim) {
        int contor{};
    for (int i{}; i<dim; i++)
        if (*(arr+i)>=8)
            contor++;
        printf ("Au fost obtinute %d medii peste 8!\n", contor);
}
