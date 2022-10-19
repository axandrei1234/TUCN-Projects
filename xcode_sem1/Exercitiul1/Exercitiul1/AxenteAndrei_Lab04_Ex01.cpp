    /* Axente Andrei Grupa 2115 Lab_04 Exercitiul1
      Created by Axente Andrei on 29.10.2021.
      Acest program va face media aritmetica a 3 numere neintregi citite de la tastatura
     */

    #define _CRT_SECURE_NO_WARNINGS_
    #include <stdio.h>
    using namespace std;

    float citire ();
    float media (float, float, float);


    int main () {
        float media_a {};
        float numar1 {};
        float numar2 {};
        float numar3 {};
        numar1 = citire();
        numar2 = citire();
        numar3 = citire();
        media_a = media (numar1, numar2, numar3);
        
        printf ("\nNumerele neintregi introduse sunt urmatoarele:  %f, %f, %f", numar1, numar2, numar3);
        printf ("\nMedia celor 3 numere neintregi este: %f\n" , media_a);
        return 0;
        
    }

    float citire () {
        float numar {};
        printf ("Introduceti un numar neintreg: " );
        scanf ("%f" , &numar);
        return numar;
    }
    float media (float numar1, float numar2, float numar3) {
        float media {};
        media = (numar1 + numar2 + numar3)/3.0f;
        return media;
    }
