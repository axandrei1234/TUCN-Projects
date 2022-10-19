            /*Axente Andrei Ex7 Lab02 G2115
             Să se calculeze suma numerelor impare dintr-un tablou unidimensional de numere întregi în
             mod recursiv, tablou citit dintr-un fişier unde, ca primă valoare, avem numărul de elemente ale
             tabloului.*/

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
                cout << "Suma numerelor impare din fisier este: " << suma_imp(arr, n-1) << endl;
            }

            int suma_imp(int *arr, int n) {
                if (arr[0]==0)
                    return 0;
                if (n<0)
                    return 0;
                if (arr[n]%2!=0)
                    return arr[n]+ suma_imp(arr,n-1);
                else
                    return suma_imp(arr, n-1);
            }   
