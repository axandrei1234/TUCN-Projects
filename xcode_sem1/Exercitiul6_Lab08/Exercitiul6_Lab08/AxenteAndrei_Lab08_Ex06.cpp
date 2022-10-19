/*Axente Andrei Exercitiul6 Lab8 Grupa 2115
 Scrieti o aplicatie aplicatie C/C++ care defineşte două matrici de valori intregi. Dimensiunea si elementele matricilor sunt citite de la tastatura. Scrieţi functiile care:
 a) afişează poziţiile elementelor pare din fiecare matrice;
 b) afişează suma elementelor impare din ambele matrice;
 c) afişează suma matricelor;*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void matrice_citire(int[20][20], int, int);
void matrice_matematica(int[20][20], int, int);
void numere_pare(int[20][20], int, int);
int suma_numere_impare(int[20][20], int[20][20], int, int, int, int);
void adunare_matrice(int[20][20], int[20][20], int, int, int, int);
int main() {
    int linii{};
    int coloane{};
    int matrice[20][20];
    
    printf("Introduceti numarul de linii pentru prima matrice: ");
    scanf("%d", &linii);
    printf ("Introduceti numarul de coloane pentru prima matrice: ");
    scanf ("%d", &coloane);
    if ((linii > 20 || coloane > 20) || (linii < 0 || coloane < 0 ) || (linii == 0 && coloane == 0)) {
        printf ("Numarul de linii sau coloane pentru prima matrice este introdus gresit!");
        return 1;
    }
    printf ("Introduceti elementele matricei: ");
    matrice_citire(matrice, linii, coloane); // se scriu de la tastatura elementele primei matrici
    printf ("Prima matrice: \n");
    matrice_matematica(matrice, linii, coloane); // afisare matematica a matricei
    
    int linii2{};
    int coloane2{};
    int matrice2[20][20];
    
    printf ("Introduceti numarul de linii pentru a doua matrice: ");
    scanf ("%d" , &linii2);
    printf ("Introduceti numarul de coloane pentru a doua matrice: ");
    scanf ("%d" , &coloane2);
    if ((linii2 > 20 || coloane2 > 20) || (linii2 < 0 || coloane2 < 0) || (linii2 == 0 && coloane2 == 0)) {
        printf ("Numarul de linii sau coloane pentru a doua matrice este introdus gresit!");
        return 2;
    }
    printf("Introduceti elementele matricei:");
    matrice_citire(matrice2, linii2, coloane2); // se scriu de la tastatura elementele celei de a doua matrice
    printf ("A doua matrice: \n");
    matrice_matematica (matrice2, linii2, coloane2); // afisare matematica a matricei
    
    // PUNCTUL a)
    printf ("a) Elementele pare ale celor doua matrici sunt: \n");
    numere_pare(matrice, linii, coloane);
    numere_pare(matrice2, linii2, coloane2);
    printf ("\n");
    // PUNCTUL b)
    printf ("b) Suma numerelor impare este: %d\n" , suma_numere_impare(matrice, matrice2, linii, coloane, linii2, coloane2));
    
    // PUNCTUL c)
    if (linii == linii2 && coloane == coloane2){
        printf ("c) Suma celor doua matrici este: \n");
        adunare_matrice(matrice, matrice2, linii, coloane, linii2, coloane2);
    }
    else
        printf ("c) Nu se poate calcula adunarea celor doua matrici!\n");
    

        }
    
    
    void matrice_citire(int matrice[20][20], int linii, int coloane) {
        for (int i{}; i<linii; i++) {
        printf("\n\t Linia %d: \n", i + 1);
            for (int j{}; j<coloane; j++){
            printf("\t\tmatrice[%d,%d] = ", i + 1, j + 1);
            scanf ("%d" , &matrice[i][j]);
            }
        }
}


void matrice_matematica (int matrice[20][20], int linii, int coloane) {
    for (int i{}; i<linii; i++) {
        for (int j{}; j<coloane; j++) {
            printf("%d " , matrice[i][j]);
        }
        printf ("\n");
    }
}

void numere_pare(int matrice[20][20], int linii, int coloane) {
    for (int i{}; i<linii; i++) {
        for (int j{}; j<coloane; j++)
        if (matrice[i][j] % 2 == 0)
            printf ("%d " , matrice[i][j]);
    }
}

int suma_numere_impare(int matrice[20][20], int matrice2[20][20], int linii, int coloane, int linii2, int coloane2) {
    int suma{};
    int suma2{};
    for (int i{}; i<linii; i++) {
        for (int j{}; j<coloane; j++)
            if (matrice[i][j] % 2 == 1)
                suma += matrice[i][j];
    }
    for (int i{}; i<linii2; i++) {
        for (int j{}; j<coloane2; j++)
            if (matrice2[i][j] % 2 == 1)
                suma2 += matrice2[i][j];
    }
    return suma + suma2;
}

void adunare_matrice(int matrice[20][20], int matrice2[20][20], int linii, int coloane, int linii2, int coloane2){
    int matrice3[20][20];
    for (int i{}; i<linii; i++){
        for (int j{}; j<coloane; j++)
            matrice3[i][j] = matrice[i][j] + matrice2[i][j];
    }
    matrice_matematica(matrice3, linii, coloane);
}
