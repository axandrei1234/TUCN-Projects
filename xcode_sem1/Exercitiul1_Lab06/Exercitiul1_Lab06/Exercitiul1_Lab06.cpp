/*AxenteAndrei Ex1 Lab6 G2115
 Să se scrie un program care afişează valoarea polinomului de gradul 3 pentru o anumită valoare a variabilei reale x.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int citire ();
int citire1 ();
int calcul (int, int, int, int, int);

int main () {
    int a {};
    int b {};
    int c {};
    int d {};
    int x {};
    int _calcul {};

    a = citire();
    b = citire();
    c = citire();
    d = citire();
    x = citire1();
    _calcul = calcul (a, b, c, d, x);
    printf ("Valorile coeficientilor sunt: %d, %d, %d, %d", a, b, c, d);
    printf ("\nValoarea lui x este: %d\n" , x);
    printf ("\nValoarea ecuatiei este: %d\n" , _calcul);
    
}
int citire () {
    int numar {};
    printf ("Introduceti valorile coeficientilor: ");
    scanf ("%d" , &numar);
    return numar;
}
int citire1 () {
    int numar {};
    printf ("Introduceti valoarea lui x: ");
    scanf ("%d" , &numar);
    return numar;
}
int calcul (int a, int b, int c, int d, int x) {
    float calcul {};
    calcul = a*x*x*x + b*x*x + c*x +d;
    return calcul;
}
