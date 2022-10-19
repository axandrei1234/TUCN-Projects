
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int prim (int);
int main (){
    int nr {};
    scanf ("%d" , &nr);
    if (prim(nr))
        printf ("%d este prim\n", prim(nr));
    else
        printf ("%d nu este prim\n", prim(nr));
    return 0;
}
int prim (int nr){
    int prim = true;
    int nr2 {};
    for (int i = 2; i < nr ; i++) {
        if ((nr2 % i) == 0){
            prim = false;
        }
            nr2++;
    }
    return nr2;
}
