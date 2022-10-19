/*Axente Andrei Ex4 Lab02 G2115
 Se consideră recursivitatea (seria de medii arimetico-geometrice a lui Gauss):
 an=(an-1+bn-1)/2 şi
 bn=sqrt(an-1*bn-1), determinaţi an şi bn, pentru n, a0, b0 introduse de la tastatură.*/

#include <iostream>
#include <math.h>
using namespace std;
int a0, b0;
float a (int);
float b (int);


int main() {
    int n;
    cout << "Introduceti o valoare pentru n: ";
    cin >> n;
    cout << "Introduceti o valoare pentru a0: ";
    cin >> a0;
    cout << "Introduceti o valoare pentru b0: ";
    cin >> b0;
    cout << "Valoarea mediei aritmetice este: " << a(n) << endl;
    cout << "Valoarea mediei geometriece este: "<< b(n) << endl;
}

float a (int n) {
    if (n==0)
        return a0;
    else
        return (a(n-1)+b(n-1))/2.0f;
}

float b (int n) {
    if (n==0)
        return b0;
    else
        return sqrt(a(n-1)*b(n-1));
    
}
