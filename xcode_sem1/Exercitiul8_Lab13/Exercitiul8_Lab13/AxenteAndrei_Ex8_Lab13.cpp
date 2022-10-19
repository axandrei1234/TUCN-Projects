/*AxenteAndrei Exercitiul8 Lab13 Grupa2115
 Scrieţi un program care citeşte valori reale dintr-un fişier creat în prealabil si scrie într-un alt fişier partea întreagă a numerelor pozitive citite.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    FILE *fs;
    float nr{};
    
    f = fopen ("test.txt", "r");
    fs=fopen("test1.txt","w+");
    if (f == NULL)
        exit(2);
    while(!feof(f)) {
        fscanf(f, "%f", &nr);
        if(nr>=0)
            fprintf(fs,"%d ",(int)nr);
        
    }
    fclose (f);
    fclose (fs);
}
    

