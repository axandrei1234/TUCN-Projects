/*Axente Andrei Exercitiul6 Lab10 Grupa2115
 Scrieţi un program în care să definiţi un tablou de pointeri spre şiruri de caractere, pe
 care să-l iniţializaţi cu diferite mesaje. Afişaţi mesajele.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {
   const char *mesaje [] = {"MANCARE" , "PIZZA" , "EBIC", "NOTA 10 LA PROGRAMARE"};
    for (int i{}; i<sizeof(mesaje);i++)
        printf ("\n %s \n", *(mesaje+i));
}
