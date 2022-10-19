/*Axente Andrei Exercitiul9 Lab07 Grupa 2115
 Scrieti un program care determină câtul împărţirii a doi întregi folosind scăderi succesive.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a{};
    int b{};
    int n{};
    int y{};
    int x{};

    printf("Introduceti valoarea primului numar intreg: ");
    scanf ("%d" , &a);
    printf ("Introduceti valoarea urmatorului numar intreg: ");
    scanf ("%d" , &b);

    if (a > b){
    
        x = a;
        y = b;
    }
    else
    {
        x = b;
        y = a;
    }
    while (x > y)
    {
        x -= y;
        n++;
    }
    printf("catul este: %d\n", n);
    
}
