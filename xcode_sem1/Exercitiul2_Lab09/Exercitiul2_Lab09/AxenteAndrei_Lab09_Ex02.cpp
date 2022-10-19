/*Axente Andrei Exercitiul2 Lab09 Grupa2115
 Să se scrie o aplicaţie C/C++ în care se generează aleator 20 de numere întregi cu valori mai mici decât 50 (Folositi srand(), rand() si operatorul %). Să se scrie o funcţie care elimină din tabloul unidimensional creat numerele impare. Funcţia va utiliza pointeri. Afişati în main() tabloul iniţial şi cel obţinut după eliminarea elementelor impare*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



void pare (int*);
void eliminare (int*, int);
int main () {
    int tablou [20];
    printf ("Cele 20 de numere aleatorii sunt: ");
    for (int i{};i<20;i++)
        tablou[i] = rand()%50;
    for (int i{}; i<20; i++)
        printf ("%d ", tablou[i]);
    pare (tablou);
    printf ("\ntabloul fara numere impare este: ");
    for (int i{}; i<20;i++)
        if (tablou[i] >= 0 && tablou[i] <= 50)
        printf ("%d ", tablou[i]);

}

void pare (int *tablou) {
    for (int i{}; i<20;i++)
        if (*(tablou+i) % 2 == 0){
            eliminare(tablou, i);
            i--;
        }
}
                      
void eliminare (int *tablou, int n) {
    for (int i{n}; i<20; i++)
        *(tablou+i) = *(tablou+i+1);
}
                                    

