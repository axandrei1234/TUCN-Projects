#include <stdio.h>
using namespace std;

int main() {
    float a {};
    float b {};
    float rotunjire[4];
    printf ("Introduceti o valoare pentru a: ");
    scanf ("%f" , &a);
    printf ("Introduceti o valoare pentru b: ");
    scanf ("%f" , &b);
    printf ("Adunarea dintre cele doua numere este: %.3f\n" , a+b);
    printf ("Scaderea dintre cele doua numere este: %.3f\n", a-b);
    printf ("Inmultirea dintre cele doua numere este: %.3f\n", a*b);
    printf ("Impartirea dintre cele doua numere este: %.3f\n", a/b);
    rotunjire [0] = a+b;
    rotunjire [1] = a-b;
    rotunjire [2] = a*b;
    rotunjire [3] = a/b;	
    for (int i{} ; i<4; i++)
        
    if (rotunjire[i] - (int)rotunjire[i] >= 0.5)
        printf ("Valorea rotunjita este: %d\n", (int)rotunjire[i]+1);
    else
        if (rotunjire [i] - (int)rotunjire[i] <= -0.5)
            printf ("Valoarea rotunjita este: %d\n" ,(int)rotunjire[i]-1);
    else
        printf ("Valorea rotunjita este: %d\n", (int)rotunjire[i]);
    
    
    
    if (a==b) {
        printf("Valorile date sunt egale\n");
    }else
        if (a>b) {
            printf("Valoarea minima este: %f\n", b);
        }else{
            printf("Valoarea minima este: %f\n", a);
        }
     

    return 0;
}



