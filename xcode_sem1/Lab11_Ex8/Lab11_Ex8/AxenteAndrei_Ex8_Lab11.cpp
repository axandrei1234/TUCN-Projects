/*AxenteAndrei Exercitiul8 Lab11 Grupa2115
 Să se scrie o aplicaţie C/C++ în care se alocă dinamic memorie pentru n numere întregi, numere ce vor fi citite de la tastatură. Să se scrie funcţia care extrage radicalul din fiecare număr şi stochează valorile obţinute într-un alt tablou alocat dinamic. Să se afişeze numerele iniţiale şi valorile din tabloul format. Eliberaţi la sfârşit memoria
alocată.*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dim{};
    int *arr;
    
    float *arr2;
    printf ("Cate numere doriti sa introduceti de la tastatura: ");
    scanf ("%d", &dim);
    arr = (int*)malloc(dim * sizeof(int));
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: ", i+1);
        scanf ("%d" , arr+i);
        
    }
    arr2 = (float*)malloc(dim * sizeof(float));
    printf ("Radicalii elementelor din primul array sunt: ");
    for (int j{}; j < dim; j++) {
        printf ("%.3f " , sqrt(*(arr+j)));
    }
    free (arr);
    free (arr2);
}
