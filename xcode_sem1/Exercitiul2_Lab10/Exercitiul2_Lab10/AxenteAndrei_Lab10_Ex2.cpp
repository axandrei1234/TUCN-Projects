/*Axente Andrei Exercitiul2 Lab10 Grupa2115
 Se consideră doi parametri întregi şi alţi doi flotanţi din linia de comandă. Să se afişeze suma şi produsul lor.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  {

    int nr1{};
    int nr2{};
    float nr3{};
    float nr4{};
    if( argc == 5 ) {

  printf("Numerele citite din linia de comanda sunt: %s %s %s %s\n", argv[1],argv[2],argv[3],argv[4]);
  nr1=atoi(argv[1]);
  nr2=atoi(argv[2]);
  nr3=atof(argv[3]);
  nr4=atof(argv[4]);
  printf("Suma numerelor este: %.2f\n",nr1+nr2+nr3+nr4);
  printf("Produsul numerelor este: %.2f\n", nr1*nr2*nr3*nr4);
    }else
        if (argc > 5)
            printf ("Prea multe arguente\n");
    else
        printf ("Prea putine argumente\n");
}
