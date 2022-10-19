/*Axente Andrei Ex2 Lab02 G2115
 Acest program calculeaza combinari de n luate cate k*/

#include <iostream>
using namespace std;

int factorial (int);
int combinari (int, int);
int combinari_factorial (int, int);

int main() {
    int n{}, k{};
    cout << "Introduceti o valoare pentru n: ";
    cin >> n;
    cout << "Introduceti o valoare pentru k(k<n): ";
    cin >> k;
    while (k>n || n<0 || k<0)  {
        cout << "Valorile introduse nu sunt corecte! Incercati alte valori!";
        cout << "Introduceti o valoare pentru n: ";
        cin >> n;
        cout << "Introduceti o valoare pentru k(k<n): ";
        cin >> k;
    }
    cout << "Combinari de n luate cate k folosind recursivitate: " << combinari(n,k) << endl;
    cout << "Combinari de n luate cate k folosind factorial:" << combinari_factorial(n,k) << endl;
}

int factorial (int n) {
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int combinari (int n, int k) {
    if (n==0 || k==0 || n==k)
        return 1;
    else
        return combinari(n-1,k)+combinari(n-1,k-1);
}

int combinari_factorial (int n, int k) {
    if (n==0 || k==0 || n==k)
        return 1;
    else
        return factorial(n)/(factorial(k)*factorial(n-k));
}
