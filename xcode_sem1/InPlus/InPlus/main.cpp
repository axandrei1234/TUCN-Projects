#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {
    int array [20] = {};
    int contor {};
    char option;
    printf ("P - Print numbers\n");
    printf ("A - Add a number\n");
    printf ("M - Display the mean of the numbers\n");
    printf ("S - Display the smallest number\n");
    printf ("L - Display the largest number\n");
    printf ("Q - Quit\n");
    printf ("\n Enter your choice: ");
    scanf ("%c" , &option);
    if (option >= 'a')
        option -= 32;
    switch (option) {
        case 'P':
            printf ("[ ");
            for (int i{}; i<20; i++)
                printf ("%d ", array[i]);
            printf ("]");
            
            break;
            
        case 'A':
                scanf ("%d " , &array[contor]);
            printf ("%d was added", array[contor]);
            contor++;
            break;
        
            
        case 'M':
            int suma{};
            float avg{};
            for (int i{}; i<contor; i++)
                suma += array[i];
            avg = suma/(float)contor;
            printf ("Media este: %f" , avg);
            break;
}
}
