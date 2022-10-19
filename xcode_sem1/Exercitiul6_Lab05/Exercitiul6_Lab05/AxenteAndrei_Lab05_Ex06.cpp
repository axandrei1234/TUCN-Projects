/* Axente Andrei Grupa 2115 Lab_04 Exercitiul6
  Created by Axente Andrei on 29.10.2021.
  Acest program introduce prin intermediul char numele a 2 studenti ulterior calculandu-le media notelor
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
float media1 (int, int);
float media2 (int, int);
int citire1 ();
int citire2 ();
int main () {
    char student [21];
    char student2 [21];
    int nota1 {};
    int nota2 {};
    int nota3 {};
    int nota4 {};
    float _media1 {};
    float _media2 {};

    printf ("Introduceti numele primului student: ");
    cin.getline (student, 21);
    printf ("\nIntroduceti numele celui de al doilea student: ");
    cin.getline (student2, 21);
    nota1 = citire1();
    nota2 = citire1();
    _media1 = media1 (nota1, nota2);
    printf ("\nMedia studentului %s este: %10.2f\n", student , _media1);
    nota3 = citire2();
    nota4 = citire2();
    _media2 = media2 (nota3, nota4);
    printf ("\nMedia studentului %s este:%-10.2f\n", student2, _media2);
    return 0;
}

int citire1 () {
    int numar {};
    printf ("Introduceti notele primului student: ");
    scanf ("%d", &numar);
    return numar;
}
int citire2 () {
    int numar {};
    printf ("Introduceti notele celui de al doilea student: ");
    scanf ("%d" , &numar);
    return numar;
}
float media1 (int nota1, int nota2) {
    float media {};
    media = ((float)nota1 + (float)nota2) / 2;
    return media;
}
float media2 (int nota3, int nota4) {
    float media {};
    media = ((float)nota3 + (float)nota4) / 2;
    return media;
}
