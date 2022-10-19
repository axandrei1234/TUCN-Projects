/*Axente Andrei Exercitiul4 Lab09 Grupa 2115
 Să se scrie un program care citeşte de la tastatură un şir de caractere, apoi elimină din şir caracterele care se repetă şi afişează în final şirul obţinut, folosind pointeri.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void eliminate(char*, int);

int  main()
{
    char tablou[100];
    int dim{};
    printf("Introduceti dimensiunea tabloului: ");
    scanf("%d", &dim);

    for (int i{}; i < dim; i++)
    {
        printf("\n x[%d]: ", i);
        scanf("%s",&tablou[i]);
    }
    printf("\nTabloul este: %s", tablou);


    eliminate(tablou, dim);

    printf("\nTabloul final este: ");

    for (int i{}; i < dim; i++)
        printf("%c", tablou[i]);
    printf ("\n");

}

void eliminate(char* tablou, int dim)
{
    for (int i{}; i < dim; i++)
    {
        for (int k{ i + 1 }; k < dim; k++)
            if (*(tablou + i) != 0 && *(tablou + k) != 0 && *(tablou + i) == *(tablou + k))
            *(tablou + k) = 0;

    }
}
