/*AxenteAndrei Exercitiul3 Lab12 Grupa2115
 Să se scrie un program C/C++, în care o funcţie returnează o structură de date adecvată. În acest fel vor fi returnate mai multe valori. Afişaţi rezultatul, valorile iniţiale transferate funcţiei (puteţi realiza orice operaţie în cadrul acelei funcţii), cu mesaje adecvate.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct calcule {
    int numar1;
    float numar2;
};
struct calcule rezolvare (struct calcule);
int main() {
    struct calcule p{};
    printf ("numar1: ");
    scanf("%d",&p.numar1);
    printf ("numar2: ");
    scanf("%f",&p.numar2);
    struct calcule x=rezolvare (p);
    printf("\nIntul este: %d",x.numar1);
    printf("\nFloatul este: %.3f\n",x.numar2);
}

struct calcule rezolvare (struct calcule p) {
    p.numar1*=10;
    p.numar2=p.numar2*p.numar1;
    return p;
}
