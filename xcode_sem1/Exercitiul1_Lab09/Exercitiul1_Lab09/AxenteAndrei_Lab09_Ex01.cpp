/*Axente Andrei Exercitiul1 Lab09 Grupa2115
 Să se scrie un program C/C++ care citeşte elementele a doua tablouri unidimensionale de numere întregi şi afişează produsul scalar al acestora. Se va folosi o functie care preia elementele de la tastatură şi o altă funcţie, care calculează produsul scalar. Ambele vor utiliza pointeri. Citirea numărului de elemente ale tabloului şi afişarea rezultatului se va face în funcţia main().*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
void tablou_citire (int, int*);
int produs_scalar (int, int*, int*);
int main () {
    int tablou[20];
    int tablou2[20];
    int dim{};
    int dim2{};
    printf ("Introduceti dimensiunea tabloului: ");
    scanf ("%d" , &dim);
    while (dim>20){
        printf ("Dimensiunea tabloului este prea mare! Introduceti alta valoare: ");
        scanf ("%d" , &dim);
    }
    
    printf ("Introduceti dimensiunea tabloului2: ");
    scanf ("%d" , &dim2);
    while (dim2>20){
        printf ("Dimensiunea tabloului este prea mare! Introduceti alta valoare: ");
        scanf ("%d", &dim2);
    }
    printf ("Primul tablou este: \n");
    tablou_citire (dim, tablou);
    printf ("Al doilea tablou este: \n");
    tablou_citire (dim2, tablou2);
    printf ("Produsul scalar a celor doua tablouri este: %d\n" , produs_scalar(dim, tablou, tablou2));
            
}

void tablou_citire (int dim , int *tablou) {
    for (int i{}; i < dim; i++){
        printf ("x[%d]: " , i);
        scanf ("%d" , tablou+i);
    }
}

int produs_scalar (int dim, int *tablou, int *tablou2) {
    int scalar{};
    for (int i {}; i<dim;i++)
        scalar += *(tablou+i) * *(tablou2+i);
    return scalar;
    
}
