/* Axente Andrei Grupa 2115 Lab_05 Exercitiul7
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza lungimea si aria unui cerc de raza data
 */
#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <iostream>
using namespace std;

float lungime (int);
float aria (int);
int main () {
    int raza {};
    float lungime_c {};
    float aria_c {};
    printf ("Introduceti valoarea razei cercului: ");
    scanf ("%d" , &raza);
    lungime_c = lungime (raza);
    aria_c = aria (raza);
    printf ("Lungimea cercului este: %10.3f\n" , lungime_c);
    printf ("\nAria cercului este: %10.3f\n" , aria_c);
    return 0;
}

float lungime (int raza) {
    float lungime {};
    lungime = 2 * pi * raza;
    return lungime;
}

float aria (int raza) {
    float aria {};
    aria = pi * raza * raza;
    return aria;
}
 
