/*Axente Andrei Exercitiul15 Lab07 Grupa 2115
 Scrieti un program care citeşte de la tastatură un caracter, pe care îl afişează pe n rânduri, câte n
 caractere pe un rând, n citit de la tastatura.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main () {
    char a ;
    scanf ("%c" , &char);
    int n{};
    printf ("Introduceti o valoare pentru n: ");
    scanf ("%d" , &n);
    
    for (int i{}; i<n; i++){
        for (int j{}; j<n; j++)
            printf ("%c" , a);
        printf ("\n");
}
    
}
