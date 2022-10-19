/*AxenteAndrei Grupa2115 SUPLIMENTAR
 Aplicatie care atunci cand are un numar par, numarul respectiv se va imparti la 2(/2, iar cand are un numar impar, acesta se va inmulti cu 3 si se va aduna cu 1 (*3+1). Orice numar as alege, folosindu-ne de proprietatile de mai sus, rezultatul final va fi 1. Eg: alegem numarul 1. 1*3+1 = 4; 4/2 = 2; 2/2 = 1 SAMD pt x numere intregi */
#include <stdio.h>
#include <term.h>
#include <stdlib.h>

int main () {
  long int v[10000];
    int numar {1};
    int contor{};

            for (int i{}; i<10000; i++){
                v[i] = numar;
            
                printf ("%ld\n", v[i]);
              
                do {
                    if (v[i] % 2 == 1)
                        v[i] = (v[i] * 3) + 1;
                    else
                        v[i] = v[i] / 2;
                    printf("%ld\n", v[i]);
                    contor++;
                } while (v[i] != 1);
                printf ("\nau fost facute %d operatii\n" , contor);
                numar++;
                contor = 0;
                printf ("\n");
            }
}
