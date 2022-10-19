/*Axente Andrei Exercitiul3 Lab09 Grupa 2115
 Să se scrie un program C/C++ în care se citesc de la tastatură numere reale, ce vor fi stocate într-un tablou unidimensional. Să se scrie o funcţie care copiază într-un alt tablou toate valorile din primul tablou, care sunt mai mari decât valoarea medie a numerelor preluate. Se vor folosi pointeri şi se vor afişa în main() valorile din cele două tablouri.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void citire (float*, int);
float media (float*, int);
void copiere (float*, float*, float, int);
int main () {
    float tablou [20];
    float tablou2 [20];
    float x{};
    int dim{};
    printf ("Introduceti demensiunea tabloului: ");
    scanf ("%d" , &dim);
    while (dim>20) {
        printf ("Dimensiunea este prea mare! Introduceti o alta valoare: ");
        scanf ("%d" , &dim);
    }
    printf ("Valorile tabloului sunt: \n");
    citire (tablou, dim);
    printf ("Elementele mai mari decat media din tablou sunt: ");
    x = media (tablou,dim);
    copiere (tablou,  tablou2, x, dim);
    for (int i{}; i<dim; i++)
        if (tablou2[i] > x)
            printf ("\t%.3f ", tablou2[i]);
    printf ("\n");
    
    
}

void citire (float *tablou, int dim) {
    for (int i{}; i<dim; i++){
        printf ("x[%d]: " , i);
        scanf ("%f" , tablou+i);
    }
}

float media (float *tablou, int dim) {

    float suma {};
    for (int i{}; i<dim; i++)
        suma += *(tablou+i);
    return (float)suma/dim;
}
    
void copiere (float *tablou, float *tablou2, float medie, int dim) {
    for (int i{}; i<dim; i++)
        if (*(tablou+i) > medie)
            *(tablou2+i) = *(tablou+i);
}
