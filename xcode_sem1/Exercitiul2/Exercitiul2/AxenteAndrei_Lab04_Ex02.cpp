/*  Axente Andrei Grupa 2115 Lab_04 Exercitiul2
    Created by Axente Andrei on 29.10.2021.
    Aceasta problema va calcula media geometrica a 2 numere intregi
 */
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int citire ();
float media_g (int, int);

int main () {
    
    int numar1 {};
    int numar2 {};
    float media_geometrica {};
    numar1 = citire();
    numar2 = citire();
    media_geometrica = media_g (numar1, numar2);
    
    printf ("Numerele introduse sunt: %d, %d\n" , numar1, numar2);
    printf ("\nMedia geometrica a celor 2 numere intregi este: %f\n" , media_geometrica );
    
    return 0;
}
int citire () {
    int numar {};
    printf ("Introduceti un numar intreg: ");
    scanf ("%d" , &numar);
    return numar;
}

float media_g (int numar1, int numar2) {
    float media_g {};
    media_g = sqrt(numar1 * numar2);
    return media_g;
}


