/* Axente Andrei Grupa 2115 Lab_05 Exercitiul9
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza timpul dupa care se intalnesc 2 masini aflate la 100km una fata de cealalta ( durata de timp exrpimata in minute )
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

float citire ();
float timp (float, float, int);
int main () {
    float viteza1 {};
    float viteza2 {};
    int distanta {100};
    float _timp {};
    viteza1 = citire();
    viteza2 = citire();
    _timp = timp (viteza1, viteza2, distanta);
    
    printf ("Vitezele celor doua masini sunt(km/h): %.1f, %.1f\n" , viteza1 , viteza2);
    printf ("Timpul pana cand cele doua masini se intalnesc este: %.3f minute" , _timp);
}

float citire () {
    float numar {};
    printf ("Introduceti viteza unei masini(km/h): ");
    scanf ("%f" , &numar);
    return numar;
}

float timp (float viteza1, float viteza2, int distanta) {
    float timp {};
    timp = distanta / (viteza1 + viteza2);
    timp = timp * 60;
    return timp;
}
