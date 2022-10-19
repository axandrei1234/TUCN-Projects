/* Axente Andrei Grupa 2115 Lab_05 Exercitiul3
  Created by Axente Andrei on 29.10.2021.
  Acest program calculeaza ipotenuza si perimetrul unui triunghi
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int citire ();
float ipotenuza (int, int);
float perimetru (int, int, float);

int main () {
    int cateta1 {};
    int cateta2 {};
    float _ipotenuza {};
    float _perimetru {};
    
    cateta1 = citire();
    cateta2 = citire();
    _ipotenuza = ipotenuza (cateta1, cateta2);
    _perimetru = perimetru (cateta1, cateta2, _ipotenuza);
    
    
    printf ("Valorile celor 2 catete sunt: %d, %d\n", cateta1, cateta2);
    printf ("\nValoarea ipotenuzei este: %.3f\n" , _ipotenuza);
    printf ("\nValoarea perimetrului este: %.3f\n", _perimetru);
    return 0;
}

int citire () {
    int numar {};
    printf ("Introduceti valoarea unei catete: ");
    scanf ("%d" , &numar);
    return numar;
}

float ipotenuza (int cateta1, int cateta2) {
    float ipotenuza {};
    ipotenuza = sqrt (cateta1 * cateta1 + cateta2 * cateta2);
    return ipotenuza;
}
float perimetru (int cateta1, int cateta2, float Ipotenuza) {
    float perimetru {};
    perimetru = cateta1 + cateta2 + Ipotenuza;
    return perimetru;
}

