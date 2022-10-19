/*Axente Andrei Exercitiul14 Lab07 Grupa 2115
 Scrieti un program care citeşte n numere întregi de la tastatură şi le afişează pe cele divizibile cu 3.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main () {
    int tablou [20];
    int n {};
    printf ("introduceti numarul de caractere: ");
    scanf ("%d" , &n);
    for (int i {}; i < n ; i++){
        printf ("x[%d]: " ,i);
        scanf ("%d", &tablou[i]);
            }
    for (int i {}; i < n ; i++){
        if (tablou[i] % 3 == 0)
            printf ("%d " , tablou [i]);
    }
    printf ("\n");
    return 0;
}
