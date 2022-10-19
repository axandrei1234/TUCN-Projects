/*Axente Andrei Exercitiul1 Lab07 Grupa 2115
Scrieti un program se citesc trei numere de la tastatură (a, b şi c). Să se determine aria dreptunghiului ale cărui laturi sunt a şi b şi verificaţi dacă diagonala dreptunghiului este egală cu c.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int arie (int, int);
float pitagora (int, int);

int main (){
    int a {};
    int b {};
    int c {};
    
    printf ("Introduceti o valoare pentru a: ");
    scanf ("%d" , &a);
    printf ("Introduceti o valoare pentru b: ");
    scanf ("%d" , &b);
    printf ("Introduceti o valoare pentru c: ");
    scanf ("%d" , &c);
    
    printf ("Cele 3 numere introduse sunt: %d, %d, %d\n", a, b, c);
    printf ("Aria este: %d\n" , arie (a,b));
    printf ("Valoarea diagonalei este: %f\n" , pitagora (a,b));
    if (c == pitagora (a,b)){
        printf ("diagonala este egala cu valoarea lui c\n");
    }else{
        printf ("Valoarea diagonalei nu este egala cu cea a lui c\n");
    }
    return 0;
}

int arie (int a , int b) {
    int arie {};
    arie = a * b;
    return arie;
}

float pitagora (int a , int b) {
    float pitagora {};
    pitagora = sqrt(a*a + b*b);
    return pitagora;
}
