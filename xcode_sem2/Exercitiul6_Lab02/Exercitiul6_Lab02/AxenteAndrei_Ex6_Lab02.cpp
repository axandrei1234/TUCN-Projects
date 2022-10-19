/*Axente Andrei Ex6 Lab02 G2115
 Determinaţi printr-o funcţie recursivă produsul scalar al doi vectori (tablouri unidimensionale
 de aceiasi lungime).*/

#include <iostream>
using namespace std;
int a[20],b[20];
int prod_vec (int[], int[], int);

int main() {
    int n{};
    cout << "Cate valori sa aiba cei 2 vectori: ";
    cin >> n;
    for (int i{}; i<n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    for (int i{}; i<n; i++) {
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }
    cout << "Produsul vectorial al celor 2 vectori este: " << prod_vec(a, b, n) << endl;
}

int prod_vec( int a[], int b[], int n )
{
    if ( n == 0 )
        return 0;
    else
        return a[n - 1] * b[n - 1] + prod_vec( a, b, n - 1 );
}

