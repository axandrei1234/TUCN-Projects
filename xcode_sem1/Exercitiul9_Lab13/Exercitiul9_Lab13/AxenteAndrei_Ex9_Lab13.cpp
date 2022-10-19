/*AxenteAndrei Exercitiul9 Lab13 Grupa2115
 Să se scrie o aplicaţie care:
 - citeşte de la consolă un numar întreg n;
 - citeşte de la consolă, cu o funcţie, “n” numere reale, într-un tablou unidimensional, alocat dinamic în memorie;
 - scrie aceste valori din tablou într-un fişier binar, al cărui nume este citit tot de la consolă;
 - citeşte apoi conţinutul fişierului şi afişează numerele din 3 în 3 poziţii, folosind funcţii specifice accesului aleator la fişiere.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void  citire_d (float*, int);
int main() {
    FILE *f;
    int dim{};
    float *arr;
    int j{};
    printf ("Cate numere reale va contine array-ul: ");
    scanf ("%d", &dim);
    arr = (float*)malloc(dim * sizeof(float));
    citire_d(arr, dim);
    f = fopen ("test.txt" , "w");
    for (int i{}; i < dim; i++)
        fwrite((arr+i), sizeof(float), 1, f);
    f = freopen("test.txt", "r", f);
    while (fscanf (f, "%f", arr+j) != -1) {
        fscanf (f, "%f", arr+j);
        printf ("%.3f " ,*(arr+j));
        fseek(f, sizeof(float)*3, SEEK_CUR);
        j++;
    }
    free(arr);
    fclose(f);
    printf ("\n");
}


`void citire_d (float *arr, int dim) {
    for (int i{}; i < dim; i++) {
        printf ("x[%d]: " , i);
        scanf ("%f" , arr+i);
    }
}
`
