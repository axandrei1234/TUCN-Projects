/*Axente Andrei Exercitiul6 Lab07 Grupa 2115
 Scrieti un program care determină cel mai mare divizor comun a doi întregi.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int cmmdc(int, int);
int main () {
    int nr1 {}, nr2 {};
    
    printf ("Introduceti o valoare pentru primul numar: ");
    scanf ("%d" , &nr1);
    printf ("Introduceti o valoare pentru al doilea numar: ");
    scanf ("%d" , &nr2);
    if (nr1 == 0 || nr2 == 0)
        printf ("Nu se poate calcula. Introduceti alte valori!\n");
    printf("Cel mai mare divizor comun a numerelor %d si %d este: %d\n",nr1, nr2, cmmdc(nr1,nr2));
    return 0;
}
int cmmdc (int nr1, int nr2) {
    int max {};
    for (int i{1}; i <= abs(min(nr1, nr2)); i++){
        if (nr1 % i == 0 && nr2 % i == 0)
            max = i;
    }
        return max;

}
