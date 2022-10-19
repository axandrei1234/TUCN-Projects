/*AxenteAndrei Exercitiul1 Lab13 Grupa2115
 Să se scrie un program care citeşte şi apoi afişează date întregi preluate dintr-un fişier text al cărui nume este citit de la consolă. Creati in prealabil fisierul prin program.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{ FILE* f;
    f=fopen("test2","w+");
    int var{};
    if(f==NULL)
    {printf("fail");
        exit(2);
    }
    for (int i{};i<10;i++)
    {printf("enter the number: ");
        scanf("%d",&var);
        fprintf(f,"%d ",var);
    }
    fclose(f);
    f=fopen("test2","r");
    while(!feof(f))
    {fscanf(f,"%d",&var);
        printf("%d ",var);
    }
    fclose(f);
}


