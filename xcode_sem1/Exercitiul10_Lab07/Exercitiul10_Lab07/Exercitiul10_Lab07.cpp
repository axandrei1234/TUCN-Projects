/*Axente Andrei Exercitiul10 Lab07 Grupa 2115
 Scrieti un program care determină numărul de cifre care compun un număr întreg citit de la
 tastatură.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a{};
    int n{};

    printf("Introduceti un numar: ");
    scanf("%d", &a);

    if (a == 0)
        n = 1;
    else
    {
        while (a)
        {
            n++;
            a = a / 10;
        }
    }

    printf("numarul de cifre din care este compus a este: %d\n", n);
    return 0;
}
