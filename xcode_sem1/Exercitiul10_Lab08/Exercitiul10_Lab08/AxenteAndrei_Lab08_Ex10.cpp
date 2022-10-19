/*Axente Andrei Exercitiul10 Lab08 Grupa 2115
 Scrieţi programul care citeşte elementele întregi ale unui tablou unidimensional şi construieşte într-o funcţie un alt tablou unidimensional în care se vor stoca resturile împărţirii elementelor primului tablou la numărul elementelor pozitive din acesta.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
void tablou_rest (int[], int);

int main () {
    int dim{};
    int tablou [20];
    printf ("Introduceti dimensiunea pe care s-o aiba tabloul: ");
    scanf ("%d" , &dim);
    while (dim>20) {
        printf ("Dimensiunea tabloului este prea mare. Introduceti o alta valoare: ");
        scanf ("%d" , &dim);
    }
    printf ("Introduceti valorile din tablou: \n");
    for (int i{}; i<dim; i++){
        printf ("x[%d]: " , i);
        scanf ("%f" , &tablou[i]);
    }
    printf ("Tabloul ce stockeaza resturile va avea urmatoarele valori: \n");
    tablou_rest(tablou , dim);
}


void tablou_rest (int tablou[20] , int dim) {
    int tablou2 [20];
    int contor{};
    for (int i{}; i<dim; i++){
        if (tablou[i] >= 0)
            contor++;
    }
    for (int i{}; i<dim; i++){
        tablou2[i] = tablou[i] % contor;
        printf ("%d ", tablou2[i]);
    }
}
