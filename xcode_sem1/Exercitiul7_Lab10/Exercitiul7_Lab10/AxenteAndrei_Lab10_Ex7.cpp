/*Axente Andrei Exercitiul7 Lab10
 Să se scrie un program care preia din linia de comandă şiruri de caractere şi afişează
 şirul rezultat din concatenarea acestora.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char string1[100];
    char string2[100];
    
    if ( argc == 3 ) {
        strcpy (string1, argv[1]);
        strcpy (string2, argv[2]);
        strcat (string1, string2);
        printf ("%s\n" , string1);
    }
    else
        if ( argc > 3 )
            printf ("Au fost introduse prea multe argumente\n");
    else
        if (argc < 3 )
            printf ("Au fost introduse prea putine argumente\n");
}
