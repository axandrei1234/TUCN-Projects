/*Axente Andrei Exercitiul4 Lab08 Grupa 2115
 Scrieti un aplicatie C/C++ care defineşte o parolă (in format şir de caractere). Programul citeşte în mod repetat şirurile de caractere introduse de la tastatură, până când utilizatorul scrie parola corectă. Să se afişeze numărul de incercări până la introducerea parolei corecte.*/


#define _CRT_SECURE_NO_WARNINGS
#define parola_a "doamneajuta123" // _a = adevarata
#include <stdio.h>
#include <string.h>
using namespace std;
int incercari ();
int main() {

    printf("Ati introdus parola de %d ori\n",incercari());

}

int incercari(){
    char parola [20];
    int k{};
    int adevar = 1;
    do {
        printf ("Introduceti parola: ");
        scanf ("%s" , parola);
        adevar = strcmp(parola, parola_a);
        if (adevar == 0)
            break;
            printf ("Parola introdusa nu este cea corecta! Mai incercati.\n");
            k++;
    } while (adevar);
    printf ("Felicitari! Ati introdus parola corecta!\n");
    return k;
}
