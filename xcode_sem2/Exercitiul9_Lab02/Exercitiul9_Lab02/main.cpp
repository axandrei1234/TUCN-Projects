/*Axente Andrei Ex9 Lab02 G2115
 Folosind o funcție recursivă, calculați suma valorilor introduse de la tastatură cu confirmare,
 adică cereți utilizatorului să indice dacă mai dorește să mai introducă o nouă valoare sau nu. Modificați funcția pentru a calcula și afișa, și media valorilor date de utilizator. Semnalați printr-un mesaj când suma valorilor depășește o anumită valoare prestabilită.*/

#include <iostream>
#include <string>
using namespace std;
int suma(int*,int, int);

int main() {
    int *arr;
    int n{};
    char decizie[10];
    cout << "Cate valori are tabloul: ";
    cin >> n;
    arr = new int[n];
    cout << suma(arr,n) << endl;
}

int suma(int sum, int n) {
    
    char decizie [10];
    int i{};
    int contor{};
    cout << "Introduceti valorile din array!" << endl;
    do {
        cin >> arr[i];
        cout << "Mai doriti sa introduceti un numar (Y/N): ";
        cin >> decizie;
        while (strcmp(decizie,"Y")!=0 && strcmp(decizie,"N")!=0) {
            cout << "Decizia nu a fost introdusa corect! Reintroduceti decizia: " << endl;
            cin >> decizie;
        }
        i++;
        contor++;
    }while (strcmp(decizie,"N")!=0);
}
