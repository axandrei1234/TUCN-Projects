/*Axente Andrei Exercitiul8 Lab10 Grupa2115
 Să se scrie un program care inversează şirul de caractere citit din linia de comandă.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argc, const char* argv[]) {

    char *string;
    int x = strlen(argv[1]);
    string = (char*)malloc(x * sizeof(char));

    if (argc == 2)
    {
        int x = strlen(argv[1]);

        printf("sirul de caractere este: %s\n", argv[1]);
        for (int i{}; i < x; i++)
            string[x -1- i ] = *(*(argv + 1) + i);
        printf("sirul de caractere inversat este: ");
        for (int i{}; i < x; i++)
            printf("%c", string[i]);
    }
    printf ("\n");
        return 0;
    }
