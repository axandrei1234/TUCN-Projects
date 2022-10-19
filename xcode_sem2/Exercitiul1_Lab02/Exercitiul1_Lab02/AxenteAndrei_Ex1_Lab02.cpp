/*Axente Andrei Ex1 Lab02 G2115
 Construiţi o funcţie recursivă care calculează Ank , unde n, k sunt citite de la tastatură, k<n.
 ( Ank = n   Ank−1 ; la k=1 Ank este n). Verificati rezultatul folosind si metoda bazata pe
 factorial.*/

#include <iostream>
using namespace std;

int factorial (int);
int aranjamente (int, int);
int aranjamente_factorial (int, int);

int main() {
    int n{}, k{};
    cout << "Introduceti o valoare pentru n: ";
    cin >> n;
    cout << "n!=" << factorial (n) << endl;
    cout << "Introduceti valoare pentru k: (k<n)";
    cin >> k;
    cout << "arnajamente de n luate cate k= " << aranjamente(n,k) << endl;
    cout << "aranjamente de n luate cate k folosind factorial este= " << aranjamente_factorial(n,k) << endl;
}

int factorial (int n) {
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int aranjamente (int n,int k) {
    if (k==1)
        return n;
    else
        return n*aranjamente(n-1, k-1);
}

int aranjamente_factorial (int n, int k) {
    if (k==1)
        return n;
    else
        return factorial(n)/factorial(n-k);
}
