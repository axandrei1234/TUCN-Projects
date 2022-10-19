/*Axente Andrei ex2 Lab04 G2115
 Modificaţi programul care exemplifică metoda de sortare rapidă explicita (Quick-Sort) aşa încât să ordoneze şirul iniţial în ordine descrescătoare.*/

#include <iostream>
#include <vector>
using namespace std;

void quicksort (int *, int, int);

int main() {
    int *arr;
    int n{};
    cout <<"Cate numere doriti sa aibe array-ul: ";
    cin >> n;
    arr = new int[n];
    for (int i{}; i<n; i++) {
        cout << "x[" << i << "]: ";
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    cout <<"Array-ul aranjat este: ";
    for (int j{}; j<n; j++) {
        cout << arr[j] << " ";
    }
    delete[] arr;
}

void quicksort (int *p, int prim, int ultim) {
    int i,j,pivot,temp;
    i=prim;
    j=ultim;
    pivot = p[ultim];
    do {
        while (p[i]>pivot)
            i++;
        while (p[j]<pivot)
            j--;
        if (i<j) {
            temp = p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        if (i<=j) {
            j--;
            i++;
        }
    }while (i<j);
    if (prim < j)
        quicksort(p,prim,j);
    if (i < ultim)
        quicksort(p, i,ultim);
}
