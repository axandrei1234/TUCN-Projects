/*Axente Andrei Ex8 Lab02 G2115
 Analog cu problema precedentă, dar se calculează produsul elementelor aflate pe poziţii
 impare într-un tablou unidimensional, respectiv să se calculeze suma numerelor prime din
 tablou.*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("test.txt");
int suma_imp(int*, int);

int main() {
    int *arr;
    int n{};
    fin >> n;
    arr = new int[n];
    arr[0] = n;
    for (int i{1}; i<n; i++) {
        fin >> arr[i];
    }
    cout << "Suma elementelor de pe pozitiile impare este: " << suma_imp(arr,n-1) << endl;
}

int suma_imp(int *arr, int n) {
    if (arr[0]==0)
        return 0;
    if (n<0)
        return 0;
    if (n%2!=0)
        return arr[n] * suma_imp(arr,n-1);
    else
        return suma_imp(arr,n-1);
}
