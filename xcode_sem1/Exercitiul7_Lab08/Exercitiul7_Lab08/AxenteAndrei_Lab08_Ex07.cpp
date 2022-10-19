/*Axente Andrei Exercitiul7 Lab08 Grupa 2115
 Citiţi de la tastatura elementele unei matrice cu elemente de tip float, cu dimensiunea 3x3. Rearanjaţi coloanele matricei astfel ca suma elementelor de pe o anumită coloană sa fie mai mica decat suma elementelor de pe coloana următoare.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 3
using namespace std;
void matrice_citire (float[max][max], int, int);
float matrice_suma (float[max][max], int, int);
void matrice_interschimbare(float[max][max], int, int);

int main() {
    float suma1{};
    float suma2{};
    float suma3{};
    float matrice[3][3];
    for (int i{}; i<3; i++) {
        printf ("\tLinia %d\n", i+1);
        for (int j{}; j<3; j++){
        printf ("matrice[%d][%d]: ", i+1, j+1);
            scanf ("%f" , &matrice[i][j]);
    }
        
    }
    suma1 = matrice_suma(matrice, max, 0);
    suma2 = matrice_suma(matrice, max, 1);
    suma3 = matrice_suma(matrice, max, 2);

    
    printf("The sum on the first column is : %.2f\n", suma1);
     printf("The sum on the second column is : %.2f\n", suma2);
     printf("The sum on the third column is : %.2f\n", suma3);
    

    if ((suma1 < suma2 && suma2 < suma3 && suma1 < suma3)|| (suma1 == suma2 && suma2 < suma3))
        printf("\nMatricea ta nu trebuie sa fie aranjata!");
    else {
        do
        {
            if (suma1 > suma2)
                matrice_interschimbare (matrice, 0, 1);
            else if (suma2 > suma3)
                matrice_interschimbare(matrice, 1, 2);
            else if (suma1 > suma3)
                matrice_interschimbare(matrice, 0, 2);
            else break;
            
            suma1 = matrice_suma(matrice, max, 0);
            suma2= matrice_suma(matrice, max, 1);
            suma3 = matrice_suma(matrice, max, 2);

        } while (!(suma1 < suma2 && suma2 < suma3 && suma1 < suma3));



        printf("\n The rearranged matrix is : \n");
        matrice_citire(matrice, max, max);
    }

}

 


void matrice_citire(float matrice[max][max], int linii, int coloane){
    for (int i{}; i<linii; i++){
        for (int j{}; j<coloane; j++){
            printf("%.3f ", matrice[i][j]);
    }
        printf ("\n");
    }
    
}

float matrice_suma(float matrice[max][max],int linii, int coloane) {
    float suma{};
    for (linii=0; linii<max; linii++)
        suma += matrice[linii][coloane];
        
    
    return (float) suma;
}

void matrice_interschimbare(float matrice[3][3], int coloane, int coloane2){
    for (int i{}; i<3; i++){
        int temp = matrice[i][coloane];
        matrice[i][coloane] = matrice[i][coloane2];
        matrice[i][coloane2] = temp;
    }
}


