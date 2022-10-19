/*Axente Andrei Exercitiul1 Lab08 Grupa 2115
 Scrieţi un program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un tablou unidimensional.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
float media_pozitive (int[], int);
float media_negative (int[], int);
int main () {
    int j [20];
    int n;
    printf ("Introduceti numarul de valori stocat de vector: ");
    scanf ("%d" , &n); 
    printf ("Introduceti valorile tabloului: ");
    for (int i {}; i < n; i++)
        scanf ("%d" , &j[i]);
    printf ("media numerelor pozitive este: %.3f\n" , media_pozitive(j , n));
    printf ("media numerelor negative este: %.3f\n" , media_negative(j , n));
    return 0;
}

    float media_pozitive (int j[] , int n) {
        int suma {};
        int contor{};
        for (int i{}; i < n ; i++){
            if (j[i] >= 0){
            suma += j[i];
                contor++;
        }
        }
        return (float)suma/contor;
    }

float media_negative (int j[], int n) {
    int suma {};
    int contor {};
    for (int i{}; i < n ; i++){
        if (j[i] < 0){
            suma += j[i];
            contor++;
        }
    }
    return suma/contor;
}
/* si pentru pozitive si pentru negative trebuie o functie,
 daca nu am numerele negative - if
 daca nu am numerele pozitive - if
 */
