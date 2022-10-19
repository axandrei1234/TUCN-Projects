#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

int main() {
    vector <int> numere;
    int max;
    int min;
    int sum{};
    int nrnou{};
    char decizie;
    do {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl << endl;
    cout << "Enter your choice: ";
    cin >> decizie;
        if (decizie == 'p' || decizie == 'P') {
            if (numere.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[";
                for (unsigned int i{}; i < numere.size(); i++)
                    cout << " " << numere.at(i) << " ";
                cout << "]" << endl;
            }
        }
        else
            if (decizie == 'a' || decizie == 'A') {
                cout <<"Introduceti numarul pe care doriti sa-l adaugati in vector: ";
                cin >> nrnou;
                numere.push_back(nrnou);
                cout << endl;
            }
        else
            if (decizie == 'm' || decizie == 'M') {
                for (unsigned int i{}; i < numere.size(); i++)
                    sum += numere.at(i);
                cout << "Media numerelor este: " << sum / (float)numere.size() << endl;
                sum = 0;
            }
        else
            if (decizie == 's' || decizie == 'S') {
                min = numere.at(0);
                for (unsigned int i{}; i < numere.size(); i++)
                    if (min > numere.at(i))
                        min = numere.at(i);
                cout << "Cel mai mic numar din vector este: " << min << endl;
            }
            else
                if (decizie == 'l' || decizie == 'L') {
                    max = numere.at(0);
                    for (unsigned int i{}; i < numere.size(); i++)
                        if (max < numere.at(i))
                            max = numere.at(i);
                    cout << "Cel mai mare numar din vector este: " << max << endl;
                }
        cout << endl << endl;
    }while (decizie != 'q' && decizie != 'Q');
}
