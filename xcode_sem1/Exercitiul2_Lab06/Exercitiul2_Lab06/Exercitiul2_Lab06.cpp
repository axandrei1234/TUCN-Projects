//Axente Andrei G2115 Lab 06
/*Să se scrie un program care citeşte lungimile laturilor unui triunghi (folosind variabile întregi) şi afişează aria triunghiului ca valoare reală.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;
int citire ();
float aria (int, int ,int);

int main () {
    int lat1 {};
    int lat2 {};
    int lat3 {};
    float _aria {};
    
    lat1 = citire();
    lat2 = citire();
    lat3 = citire();
    if (lat1 + lat2 > lat3 && lat2 + lat3 > lat1 && lat1 + lat3 > lat2){
        
    _aria = aria(lat1, lat2, lat3);
    printf ("Cele trei laturi introduse sunt: %d, %d, %d\n" , lat1, lat2, lat3);
    printf ("Aria triunghiului este: %.3f\n", _aria);
    }
    else
        printf ("Valorile introduse nu pot fi laturi de triunghi!\n");
    return 0;
}
int citire () {
    int numar {};
    printf ("Introduceti lungimea unei laturi: ");
    scanf ("%d", &numar);
    return numar;
}
float aria (int lat1, int lat2, int lat3) {
    float p {};
    float aria {};
    p = (lat1 + lat2 + lat3)/2.f;
    aria = sqrt(p * (p - lat1) * (p - lat2) * (p - lat3));
    return aria;
    
}


