/* Axente Andrei Grupa 2115 Lab_05 Exercitiul8
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza durata distantei pe care o parcurge un tren din Cluj pana in Brasov
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int main () {
    int ora1 {};
    int ora2 {};
    int minutul1 {};
    int minutul2 {};
    
    printf ("Trenul din Cluj pleaca la ora: ");
    scanf ("%d" , &ora1);
    
    printf (" si la minutul: ");
    scanf ("%d" , &minutul1);
    
    printf ("\nTrenul ajunge in Brasov la ora: ");
    scanf ("%d" , &ora2);
    
    printf (" si minutul: ");
    scanf ("%d" , &minutul2);

    printf ("\nDurata calatoriei a fost: ");
    if (minutul1 > minutul2) {
        ora2 = ora2 - 1;
        minutul2 = minutul2 + 60;
        printf ("%d ore, %d minute\n", ora2-ora1, minutul2-minutul1);
    }
    else
    printf ("%d ore, %d minute\n", ora2-ora1, minutul2-minutul1);
    return 0;
}

