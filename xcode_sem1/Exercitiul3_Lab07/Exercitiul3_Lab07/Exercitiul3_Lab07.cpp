/*Axente Andrei Exercitiul3 Lab07 Gruma 2115
 Scrieti un program care calculeaza an, prin inmultiri repetate, unde n este citit de la consolă (a se
 defineşte în program).*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int main () {
    int a = 2;
    int n {};
    int b {};
    b=a;
    printf ("Introduceti o valoare pentru n: ");
    scanf ("%d" , &n);
    for (int i {1}; i < n; i++){
        a = a * b;
    }
    
    printf ("%d\n", a);
    return 0;
    
}
