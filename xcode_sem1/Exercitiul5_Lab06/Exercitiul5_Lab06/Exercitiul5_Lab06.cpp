/*AxenteAndrei Ex5 Lab6 G2115
 Să se scrie un program care citeşte de la intrarea standard un număr întreg şi afişează numărul de
 zerouri din reprezentarea sa binară.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main (){
    int x {};
    int i [4] ;
    scanf ("%d", &x);
    printf ("valoarea numarului este: %d\n" , x);
    
    
    
    for (int j {}; j < 4 ; j++ ){
        i [j] = x % 2;
    x= x/2;
    }
    for (int j = 3; j >= 0 ; j--)
        if ( i[j]==0 )
            printf ("%d" , i[j]);
        return 0;

}

