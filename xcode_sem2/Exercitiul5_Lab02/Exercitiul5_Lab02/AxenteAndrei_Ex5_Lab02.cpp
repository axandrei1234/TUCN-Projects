/*Axente Andrei Ex5 Lab02 G2115
 Citiţi un şir de caractere de la tastatură, caracter cu caracter, cu ajutorul unei funcţi bazate pe
 caracter. Afişaţi şirul în ordine inversă folosind o funcţie recursivă.*/

#include <iostream>
using namespace std;
char nume[20], invers[20];
void sir (char[], int);
char revert (int, int);

int main() {
    int n{};
    cout << "Cate caractere doriti sa introduceti: ";
    cin >> n;
    sir (nume, n);
    revert (n-1,0);
    cout << "Sirul inversat este: " << endl;
    for (int i{}; i<n; i++)
        cout << invers[i];
    cout << endl;
}

void sir (char nume[], int n) {
    for (int i{}; i<n; i++) {
        cout << "c[" << i << "]: ";
        cin >> nume[i];
    }
    cout << "Sirul de caractere introdus de la tastatura este: " << endl;
    for (int i{}; i<n; i++)
        cout << nume[i];
    cout << endl;
}

char revert (int n, int i) {
    if (n >= i)
    {
        invers[i] = nume[n - i];
        return revert(n, i + 1);
    }
    else return 0;
}


