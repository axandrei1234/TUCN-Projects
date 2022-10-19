/*AxenteAndrei Ex3 Lab6 G2115
 Să se scrie un program care afişează valorile biţilor unei variabile de tip unsigned char aplicând succesiv operatorul de deplasare dreapta şi operatorul %.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int main () {
    char ascii ;
    int i [8] ;
    scanf ("%c", &ascii);
    printf ("valoarea lui %c in ascii este %d\n" , ascii, ascii);
    for (int j {}; j < 8 ; j++ ) {
        i [j] = ascii % 2;
    ascii /=2 ;
    }
    for (int j = 7; j >= 0 ; j--)
        printf ("%d", i[j]);
    return 0;
}
        
