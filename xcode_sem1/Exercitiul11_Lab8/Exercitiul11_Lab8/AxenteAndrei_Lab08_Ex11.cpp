/*Axente Andrei Exercitiul11 Lab08 Grupa2115
 Se citeşte de la tastatură un şir de caractere. Scrieţi funcţia care inversează şirul şi apoi formează un alt şir de caractere ce va conţine elementele de pe poziţiile pare ale şirului inversat. Afişaţi şirurile obţinute.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
using namespace std;
void inversare (char[]);
int main () {
    char cuvant [20];
    printf ("Introduceti un cuvant: ");
    scanf ("%s" , &cuvant);
    printf ("Cuvantul inversat si elementele pare de array-ul inversat vor fi: \n");
     inversare(cuvant);
}
     
    


void inversare (char cuvant [20]) {
    char inversare [20];
    
    for (int i{}; i<strlen(cuvant); i++){
        inversare[i] = cuvant [strlen(cuvant)-i-1];
        printf ("%c", inversare [i]);
    }
    printf ("\n");
    for (int i{}; i<strlen(cuvant); i+=2)
            printf ("%c" , inversare[i]);
    printf ("\n");
}

