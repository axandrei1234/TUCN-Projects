/*Axente Andrei Exercitiul4 Lab07 Grupa 2115
 Scrieti un program care citeşte de la tastatură o valoare întreagă n şi calculează n! (n-factorial).*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int main (){
    int a = 1;
    int n {};
    scanf ("%d" , &n);

    for (int i = 1; i <= n; i++ )
        a = a*i;
    printf ("%d\n" , a);
    return 0;
}
