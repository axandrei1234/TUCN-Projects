#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int main (){
    const int x = 32;
    char cuvinte [10];
    scanf ("%s" , &cuvinte);
    for (int i{}; i<10; i++)
        i[cuvinte] -= x;
    printf ("%s\n" , cuvinte);
    return 0;
    
}
