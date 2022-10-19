/*Axente Andrei Exercitiul5 Lab08 Grupa2115
 Scrieti o aplicatie C/C++ care citeşte de la tastatura două siruri de caractere reprezentand numele si prenumele unei persoane. Afisati-le cu majuscula, separate prin două spatii de tabulare.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main (){
    char nume [10];
    char prenume [10];
    
    printf ("Introduceti numele: ");
    scanf ("%s", nume);
    for (int i{}; i<10; i++){
        if (nume[i] >= 97)
            nume[i] = nume[i] - 32;
    }
    printf ("Introduceti prenumele: ");
    scanf ("%s", prenume);
    for (int i{}; i<10; i++){
        if (prenume[i] >= 97)
            prenume[i] = prenume[i] - 32;
    }
    
    printf ("Numele tau este: %s \t %s\n" , nume , prenume);
    
    
}
