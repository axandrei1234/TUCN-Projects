/* AxenteAndrei Exercitiul1 Lab12 Grupa2115
 Să se scrie un program C/C++, care folosind o structură numita Student, avand campurile {nume, prenume, ţara de origine, grupa, anul naşterii}, să determine numărul de studenţi străini din grupă (grupa de MAX studenti) şi să afişeze toate datele acestora. Datele pentru studenţii din grupa se citesc de la intrarea standard, până la întâlnirea numelui AAA.
 */
#include "AxenteHeader.h"

struct student {
    char nume[256];
    char prenume[256];
    char origine[256];
    int grupa;
    int nastere;
};

void student(struct student *s, int);
int main() {
    struct student *s;
    int dim{};
    printf ("Introduceti numarul maxim de studenti: ");
    scanf ("%d" , &dim);
    s = (struct student*) malloc (dim * sizeof (struct student));
    student (s,dim);
}

void student (struct student *s, int dim) {
    int contor{};
    for (int i{}; i < dim; i++) {
        printf ("Nume: ");
        scanf ("%s" , (s+i)->nume);
        if (strcmp ((s+i)->nume , "AAA") != 0) {
            printf ("Prenume: ");
            scanf ("%s" , (s+i)->prenume);
            printf ("Origine: ");
            scanf ("%s" , (s+i)->origine);
            if (strcmp ((s+i)->origine , "Romania") != 0 && strcmp ((s+i)->origine , "romania") != 0 )
                contor++;
            printf ("Grupa: ");
            scanf ("%d" , &(s+i)->grupa);
            printf ("An nastere: ");
            scanf ("%d" , &(s+i)->nastere);
            printf ("\n");
        }
        else
            break;
    }
    printf ("Sunt %d studenti straini!\n\n" , contor);
    for (int i{}; i < contor; i++)
        if (strcmp ((s+i)->origine , "Romania") != 0 && strcmp ((s+i)->origine , "romania") != 0 ) {
            printf ("Nume: %s\n" , (s+i)->nume);
            printf ("Prenume: %s\n" , (s+i)->prenume);
            printf ("Origine: %s\n" , (s+i)->origine);
            printf ("Grupa: %d\n" , (s+i)->grupa);
            printf ("An nastere: %d\n\n" , (s+i)->nastere);
        }
}
