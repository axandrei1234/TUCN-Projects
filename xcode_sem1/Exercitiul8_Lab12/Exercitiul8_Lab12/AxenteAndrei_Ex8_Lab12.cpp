/* Axente Andrei Exercitiul8 Lab12 Grupa2115
 Declaraţi un nou tip de date O_struct, care să conţină o variabilă de tip întreg, una de tip caracter şi un şir de 256 de caractere. Definiţi in main( ) o variabilă statică de tip O_struct, căreia să-i iniţializaţi câmpurile cu date citite de la intrarea standard. Declaraţi apoi un pointer de tip O_struct, numit po_struct, care va fi definit prin alocarea dinamică a unei zone de memorie care să conţină un articol de tip O_struct. Iniţializaţi câmpurile structurii de date folosind pointerul po_struct. Afisati toate campurile si eliberaţi zona de memorie alocată.*/
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct O_struct {
    int numar;
    char caracter;
    char sir[256];
};

int main() {
    struct O_struct c;
    printf ("Numar: ");
    scanf ("%d" , &c.numar);
    getchar();
    printf ("Caracter: ");
    scanf ("%c" , &c.caracter);
    printf ("Sir: ");
    scanf ("%s" , c.sir);
    printf ("Datele afisate de variabila statica sunt: %d, %c, %s\n", c.numar, c.caracter, c.sir);
    struct O_struct *p;
    p = (struct O_struct *) malloc (1 * sizeof(struct O_struct));
    printf ("Numar: " );
    scanf ("%d" , &p->numar);
    getchar();
    printf ("Caracter: ");
    scanf ("%c" , &p->caracter);
    printf ("Sir: ");
    scanf ("%s" , p->sir);
    printf ("Datele afisate de folosind pointeri sunt: %d, %c, %s\n" , p->numar, p->caracter, p->sir);
    free(p);
}
