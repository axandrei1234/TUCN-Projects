#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <stdio.h>
using namespace std;
float arie_c (int);
float arie_d (int,int);
int main () {
    int a {};
    int b {};
    float _arie_c {};
    float _arie_d {};
    printf ("Introduceti valoarea lui a: ");
    scanf ("%d" , &a);
    printf ("Introduceti valoarea lui b: ");
    scanf ("%d" , &b);
    _arie_c = arie_c (a);
    _arie_d = arie_d (a,b);
    if (a == b) {
        printf ("Aria cercului este: %.3f\n" , _arie_c);
        } else {
        printf ("Aria dreptunghiului este: %.3f\n" , _arie_d);
        }
    return 0;
}
float arie_c (int a) {
    float arie {};
    arie = pi * a * a;
    return arie;
}

float arie_d (int a, int b) {
    float arie {};
    arie = a * b;
    return arie;
}
