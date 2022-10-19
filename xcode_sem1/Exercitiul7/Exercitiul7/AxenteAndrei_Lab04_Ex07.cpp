/* Axente Andrei Grupa 2115 Lab_04 Exercitiul7
  Created by Axente Andrei on 29.10.2021.
  Acest program va calcula o ecuatie folosing prima data numere reale si a doua oara numere intregi
 */
#include <stdio.h>
using namespace std;

float citire ();
int citire2 ();
float adunare1 (float, float, float);
float adunare2 (int, int, int);

int main() {

    float a {};
    float b {};
    float c {};
    int d {};
    int e {};
    int f {};
    float adunare_reale {};
    float adunare_int {};

    a = citire();
    b = citire();
    c = citire();
    d = citire2();
    e = citire2();
    f = citire2();
    adunare_reale = adunare1(a, b, c);
    adunare_int = adunare2(d, e, f);

    printf ("Cele 3 numere reale citite sunt: %f, %f, %f\n" , a, b, c);
    printf ("Cele 3 numere intregi sunt: %d, %d, %d\n" , d, e, f);
    printf ("\nSuma celor 3 numere reale este: %f\n" , adunare_reale);
    printf ("\nSuma celor 3 numere intregi este: %f\n" , adunare_int);
    return 0;
}
float citire () {
    float numar {};
    printf ("Introduceti un numar real: ");
    scanf ("%f", &numar);
    return numar;
}
int citire2 () {
    int numar {};
    printf ("Introduceti un numar intreg ");
    scanf ("%d", &numar);
    return numar;

}
float adunare1 (float a, float b, float c) {
    float adunare1 {};
    adunare1 = 1/a + 1/b + 1/c;
    return adunare1;
}

float adunare2 (int d, int e, int f) {
    float adunare2 {};
    adunare2 = 1/(float)d + 1/(float)e + 1/(float)f;
    return adunare2;
}
