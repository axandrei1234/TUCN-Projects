/*Axente Andrei Ex1 Lab04 G2115
 Implementaţi metoda bulelor (Bubble-Sort) care foloseşte un indicator flag şi optimizează ciclul interior. Se cere atât scrierea funcţiei, cât şi partea de program care face citirea şi afişarea şirului iniţial şi a celui ordonat.*/

#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector <int> &);
int main() {
    int n{}, nrnou{};
    vector <int> numere;
    cout << "Cate numere doriti sa introduceti: ";
    cin >> n;
    for (int i{}; i<n; i++) {
        cout << "x[" << i << "]: ";
        cin >> nrnou;
        numere.push_back(nrnou);
    }
    BubbleSort(numere);
    cout << "Numerele din vector sortate sunt: ";
    for (int i:numere)
        cout << i << " ";
    cout << endl;
}

void BubbleSort (vector <int> &p) {
    bool conditie;
    do {
        conditie = false;
        for (int i{}; i<p.size()-1; i++) {
            if (p[i]>p[i+1]) {
                swap (p[i],p[i+1]);
                conditie = true;
            }
        }
    } while (conditie);
}
