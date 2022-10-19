/*Axente Andrei Exercitiul3 Lab10 Grupa2115
 Scrieţi o aplicaţie care citeşte de la tastatură un şir de caractere cu lungimea mai mare decât 7. Folosiţi un pointer pt. a accesa şi afişa caracterele de pe poziţiile 1, 3, 5 şi 7.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main () {
    char str [20];
    printf ("Introduceti un sir de caractere: ");
    scanf ("%s" , str);
    while ( strlen(str) < 8 ) {
        printf ("Lungimea sirului este prea mica! Introduceti un alt sir: ");
        scanf("%s" , str);
    }
    printf ("Caracterele de pe pozitiile 1, 3, 5 si 7 sunt: %c, %c, %c si %c\n" , *(str+1), *(str+3), *(str+5), *(str+7));
}
