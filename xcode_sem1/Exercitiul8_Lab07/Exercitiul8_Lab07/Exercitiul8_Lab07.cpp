/*Axente Andrei Exercitiul8 Lab07 Grupa 2115
 Scrieti un program care calculeaza produsul a două numere întregi folosind numărul corespunzător de adunări.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int main () {
    int numar1 {};
    int numar2 {};
    int x {};
    int y {};
    printf ("Introduceti o valoare pentru primul numar: ");
    scanf ("%d" , &numar1);
    printf ("Introduceti o valoare pentru al doilea numar: ");
    scanf ("%d" , &numar2);
    x = numar1;
    y = numar2;
    
    if (numar1 == numar2 && (numar1 > 0 || numar2 > 0)) {
        for (int i{1} ; i < x; i++)
            numar1 +=x ;
        printf ("%d\n" ,  numar1);
    }
    else
        if (numar1 < numar2 && (numar1 > 0 || numar2 > 0)){
            for (int i{1}; i < numar2; i++)
                numar1 += x;
            printf ("%d\n" , numar1);
        
        }else
            if (numar1 > numar2 && (numar1>0 || numar2 > 0)){
        for (int i{1}; i < numar1; i++)
            numar2+=y;
    printf ("%d\n", numar2);
        
        }
            else
            if (numar1 < numar2 && (numar1 < 0 && numar2 < 0)){
            for (int i {1} ; i < abs(numar2); i++)
                numar1 += x;
            printf ("%d\n",abs(numar1));
}
    else
        if (numar1 > numar2 && (numar1 < 0 && numar2 < 0)){
            for (int i {1}; i < abs(numar1); i++)
                numar2 += y;
            printf ("%d\n" , abs(numar2));
        }
    else
        if (numar1 == numar2 && (numar1 < 0 && numar2 <0)){
            for (int i {1}; i < abs(x); i++)
                numar1 += x;
            printf ("%d\n", abs(numar1));
        }
    return 0;
}
                


