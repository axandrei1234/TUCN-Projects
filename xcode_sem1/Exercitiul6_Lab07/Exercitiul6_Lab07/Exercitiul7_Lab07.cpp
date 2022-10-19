/*Axente Andrei Exercitiul7 Lab07 Grupa 2115
 Scrieti un program care determină toţi divizorii unui număr.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main () {
    int n {};
    
    
    printf ("Introduceti un numar: ");
    scanf ("%d" , &n);
    for (int i{1}; i<n; i++ ) {
       if (n % i == 0)
           printf ("%d " , i);        
    }
    return 0;
}
