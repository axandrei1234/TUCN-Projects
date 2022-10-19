/*Axente Andrei Exercitiul5 Lab10 Grupa2115
 Definiţi un tablou de pointeri către şiruri de caractere. Fiecare locaţie a tabloului conţine adrese către unul din urmatoarele şiruri de caractere:
 - "valoare prea mică"
 - "valoare prea mare"
 - "valoare corectă"
 Aplicaţia generează un număr aleator între 1 şi 100 şi apoi citeşte în mod repetat intrarea de la tastatură până când utilizatorul introduce valoarea corectă. Folositi mesajele definite pentru a informa utilizatorul, la fiecare pas, despre relaţia existentă
 între numărul generat şi ultima valoare citită.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char const *compar[] = {"Valoare prea mica" , "Valoare prea mare" , "Valoarea corecta"};
    int nr{};
    srand (time_t(0));
    int nr_aleator = rand() % 100;
    printf ("Ghiciti numarul: ");
    do {
        scanf ("%d" , &nr);
        if (nr < nr_aleator)
            printf ("%s. Incercati din nou: " , *(compar));
        else
            if (nr > nr_aleator)
                printf ("%s. Incercati din nou: " , *(compar+1));
        else
            printf ("%s\n", *(compar+2));
    }while (nr!=nr_aleator);
}
