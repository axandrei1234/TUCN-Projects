/*Axente Andrei, Domuta Andrei Test Programare Grupa 2115*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

void mxn (float[7][7], int, int);
void matrice_afisare (float[7][7], int, int);
float matrice_media (float[7][7],int ,int);
int main() {
    int m {};
    int n {};
    float tablou [7][7];
    printf ("Matricea trebuie sa fie patratica!\n");
    printf ("Introduceti numarul de linii: ");
    scanf ("%d" , &m);
    printf ("Introduceti numarul de coloane: ");
    scanf ("%d", &n);
    if ((m > 7 || n > 7) || m!=n){
        printf ("Introduceti alte valori pentru m si n!\n");
        return 1;
    }
        printf ("Introduceti elementele matricei: \n");
        mxn (tablou, m, n);
    printf ("Matricea va arata: \n");
    matrice_afisare(tablou, m, n);
    printf ("Media elementelor de sub diagonala principala este: %.3f", matrice_media(tablou, m, n));
    
}

void mxn (float tablou[7][7], int m, int n) {
    for (int i{}; i<m; i++){
        printf("\n\t Linia %d: \n", i + 1);
        for (int j{}; j<n; j++){
            printf("\t\tmatrice[%d,%d] = ", i + 1, j + 1);
            scanf ("%f", &tablou[i][j]);
        }
    }
}

void matrice_afisare (float tablou[7][7], int m, int n){
    for (int i{}; i<m; i++){
        for (int j{}; j<n; j++){
            printf ("%.3f " , tablou[i][j]);
    }
    printf ("\n");
}
}

float matrice_media (float tablou[7][7], int m, int n) {
    int contor{};
    float suma{};
    for (int i{}; i<m; i++){
        for (int j{}; j<n; j++)
            if(i>j && tablou[i][j]>0)
            {
                suma += tablou[i][j];
                contor++;
            }
    }
    return suma/contor;
}
