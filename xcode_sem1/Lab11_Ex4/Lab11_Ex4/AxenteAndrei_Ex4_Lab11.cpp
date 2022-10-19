/*AxenteAndrei Exercitiul4 Lab11 Grupa2115
 Să se scrie o aplicaţie C/C++ care alocă dinamic memorie pentru "n" şiruri de caractere, care se vor citi de la tastatură.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n{};
    char *arr;;
    printf ("Introduceti numarul de siruri de caractere pe care doriti sa-l introduceti: ");
    scanf ("%d" , &n);
    arr = (char*)malloc(n * sizeof(char));
    for (int i{}; i < n; i++) {
        printf ("string %d: ", i+1);
        scanf ("%s" , arr+i);
    }
    free(arr);
}
