/*Axente Andrei Ex8 Lab04 G2115
 Preluați din două fișiere doua tablouri unidimensionale ce conțin valori reale. Generați un al treilea tablou care să conțină toate valorile din cele doua tablouri și toate valorile obținute prin medierea valorilor de pe aceeași poziție din cele doua tablouri inițiale. Dacă numărul de elemente ale tablourilor diferă, media se va face considerând valoarea 0.0 pentru elementele lipsă. Ordonați al treilea tablou și numărați câte valori neunice sunt în șir.*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int main() {
    ifstream lista0;
    ifstream lista1;
    vector <float> numere0, numere1, numere2;
    float numar;
    int contor{};
    lista0.open("lista0.txt");
    if (!lista0)
        cout << "Nu exista acest fisier" << endl;
    while (lista0 >> numar)
        numere0.push_back(numar);
    for (int i{}; i<numere0.size(); i++)
        cout << numere0.at(i) << " ";
    cout << endl;
    lista0.close();
    lista1.open("lista1.txt");
    if (!lista1)
        cout << "Nu exista acest fisier" << endl;
    while (lista1 >> numar) {
        numere1.push_back(numar);
    }
    for (int i{}; i<numere1.size(); i++)
        cout << numere1.at(i) << " ";
    cout << endl;
        lista1.close();
    for (int i{}; i<numere0.size(); i++)
        numere2.push_back(numere0[i]);
    for (int i{}; i<numere1.size(); i++)
        numere2.push_back(numere1[i]);
    for (int i{}; i<numere0.size(); i++) {
        numar = (numere0[i]+numere1[i])/2;
        numere2.push_back(numar);
    }
    for (float i : numere2)
        cout << i << " ";
    cout << endl;
    sort (numere2.begin(),numere2.end());
    for (int i{}; i<numere2.size(); i++) 
        for (int j = i+1; j<numere2.size(); j++)
            if (numere2[i] != numere2[j]) {
                contor++;
                break;
            }
    cout << "Dupa sortare cescatoare: " << endl;
    for (float i: numere2)
        cout << i << " ";
    cout << endl << "Au fost gasite " << contor << " elemente neunice!";
    cout << endl;
}
