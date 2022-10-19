/* AxenteAndrei Exercitiul2 Lab12 Grupa2115
 Să se scrie un program C/C++, în care folosind câte o funcţie, se transferă ca parametru o variabilă de tip structură de date prin valoare şi respectiv prin adresă, folosind pointeri. În funcţia main( ) iniţializaţi câmpurile structurii cu date citite de la tastatură. În ambele funcţii afişaţi datele din structură folosind un mesaj adecvat.*/
#include "AxenteHeader.h"
struct calendar {
    int zi;
    int luna;
    int an;
};

void calendar(struct calendar *c, int);
int main () {
    struct calendar *c;
    int dim{};
    printf ("Introduceti numarul maxin de date: ");
    scanf ("%d" , &dim);
    c = (struct calendar*)malloc(dim * sizeof(struct calendar));
    calendar (c,dim);
    
}

void calendar(struct calendar *c, int dim) {
    int contor{};
    for (int i{}; i < dim; i++) {
        printf ("zi: ");
        scanf ("%d" , &(c+i)->zi);
        if ((c+i)->zi != 999) {
        printf ("luna: ");
        scanf ("%d" , &(c+i)->luna);
        printf ("ani: ");
        scanf ("%d" , &(c+i)->an);
        printf ("\n");
        contor++;
        }
        else
            break;
    }
    for (int i{}; i < contor; i++) {
        printf ("%d / %d / %d \n" , (c+i)->zi, (c+i)->luna, (c+i)->an);
    }
}
