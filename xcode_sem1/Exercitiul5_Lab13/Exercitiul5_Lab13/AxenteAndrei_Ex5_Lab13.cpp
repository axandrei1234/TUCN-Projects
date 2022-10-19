/*AxenteAndrei Exercitiul5 Lab13 Grupa2115
 Să se scrie o aplicaţie C/C++ care citeşte un fişier text linie cu linie şi îl afişează pe ecran. Se va folosi un fisier existent din sistem sau se va genera in prealabil unul prin program.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f;
    char s;
    f = fopen("test.txt" , "r");
    while(!feof(f)) {
        s = fgetc (f);
        printf ("%c", s);
    }
    printf ("\n");
    fclose (f);
}
