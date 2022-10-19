/*Axente Andrei Ex6 Lab06 G2115
 Pornind de la exemplul care tratează lucrul cu matrice, considerati ca si atribute private matricea data printr-un pointer dublu pentru a aloca un tablou de pointeri catre liniile matricii (sau, pointer simplu la alocarea dinamica contigua a matricii), si doua atribute private de tip int pentru numarul de linii si coloane. Constructorul cu doi parametrii va aloca dinamic spatiu pentru matrice initializand elementele cu 0. Implementati un destructor explicit pentru a elibera spatiul alocat. Definiti o metoda publica void setElement(int l, int c, int v) care va seta un element cu valoarea v, de pe linia l si coloana c. Declarati o functie globala void readMatrix(Matrix m) care va avea ca si parametru o matrice instantiata la care se va valida in main() ca dimensiunile sa fie corecte, >=1 si <=10, si care va citi elementele matricii de la tastatura (va folosi si metoda publica setElement()). Metoda din clasa, displayMatrix() va fi definita ca si o functie globala la fel ca si readMatrix() considerand metoda getElement() ca si metoda public.
 Metoda de afisare a unei coloane, nu va valida numarul coloanei, coloana fiind validata in main(). Completați codul scris cu metode specifice pentru:
 - afișarea elementelor de pe diagonala secundara a matricei, dacă matricea este pătratică; în
 caz contrar se afișează un mesaj corespunzător;
 - afișarea elementelor de sub diagonala principala;
 - afișarea unei matrice de dimensiunea celei inițiale ale cărei elemente pot avea valori de 0
 (dacă elementul corespunzător este mai mic decât o valoare in prealabil citita de prag) sau
 1 (în caz contrar), si verifica daca matricea este rara, >= 67% din elemente sunt zero); Refaceti aplicatia in care considerati metodele getElement() si setElement() private iar functile readMatrix() si displayMatrix() metode membere publice in cadrul clasei.*/

#include <iostream>
using namespace std;

const int Max1 = 10;
const int Max2 = 10;
class Matrix {
  int matrix[Max1][Max2], dim1, dim2;
  int getElement(int row, int column);
    void setElement(int row, int column, int value) {matrix[row][column] = value;}

public:
  Matrix(int dim1, int dim2) {
    int i, j;
    this->dim1 = dim1;
    this->dim2 = dim2;
    cout << "\nIntroduceti elementele matricii: ";
    for (i = 0; i < dim1; i++) {
      for (j = 0; j < dim2; j++) {
        cout << "\nmatrix[" << i << "][" << j << "] = ";
        cin >> matrix[i][j];
      }
    }
  }
  void displayMatrix() {
    int i, j;
    cout << "\nElementele matricii: ";
    for (i = 0; i < dim1; i++) {
      cout << "\n";
      for (j = 0; j < dim2; j++) {
        cout << getElement(i, j) << " ";
      }
    }
    cout << endl;
  }
  // declararea metodei de afisare a elementelor unei coloane
  void displayColumn(int col);
  void diagonalas() {
    cout << "Diagonala secundara este: ";
    if (dim1 != dim2) {
      cout << "Matricea nu este patratica! Nu se poate afisa diagonala!" << endl;
      return;
    }
    for (int i = 0; i < dim1; i++) {
      cout << matrix[i][dim1-i-1] << " ";
        }
      cout << endl;
  }
    void subdp() {
        cout << "Elementele de sub diagonala principala sunt: ";
        if (dim1 != dim2) {
            cout << "Matricea nu este patratica! Nu se pot afisa elementele de sub diagonala principala!" << endl;
            return;
        }
        for (int i{}; i<dim1; i++)
            for (int j{}; j<dim1; j++)
                if (i>j)
                    cout << matrix[i][j] << " ";
        cout << endl;
    }
    void newm() {
        int k{};
        int numar;
        int matrice[dim1][dim2];
        cout << "Introduceti un numar: ";
        cin >> numar;
        cout << "\nIntroduceti elementele matricii: ";
        for (int i{}; i < dim1; i++) {
            for (int j{}; j < dim2; j++) {
            cout << "\nmatrix[" << i << "][" << j << "] = ";
            cin >> matrice[i][j];
            }
        }
        for (int i{}; i<dim1; i++) {
            for (int j{}; j<dim2; j++) {
                if (matrice[i][j] < numar) {
                    matrice[i][j] = 0;
                    k++;
                }
                else
                    if (matrice [i][j] >= numar)
                        matrice [i][j] = 1;
            }
        }
        cout << "\nElementele matricii: ";
        for (int i{}; i < dim1; i++) {
          cout << "\n";
            for (int j{}; j < dim2; j++) {
                cout << matrice[i][j] << " ";
    }
        }
        if ((float)k / (dim1*dim2) >= 0.67)
            cout << endl << "Matricea este rara!" << endl;
        else
            cout << endl << "Matricea nu este rara!" << endl;
    }
};
void Matrix::displayColumn(int col) {
  if (col < 0 || col >= dim2) {
    cout << "\nColoana cu numarul " << col
         << " nu exista in matricea din clasa!\n";
  } else {
    cout << "\nElementele coloanei " << col << ": ";
    for (int i = 0; i < dim1; i++) {
      cout << getElement(i, col) << " ";
    }

  }
    cout << endl;
}
int Matrix::getElement(int row, int column) { return matrix[row][column]; }

int main() {
  int dim1, dim2;
  cout << "\nIntroduceti dimensiunile 1 si 2 ale matricii: (<=10):\n";
  cin >> dim1;
  cin >> dim2;

  if (dim1 < 1 || dim1 > 10) {
    cout << "Prima dimensiune este mai mica ca 1 sau mai mare ca 10!";
  }
  if (dim2 < 1 || dim2 > 10) {
    cout << "A doua dimensiune este mai mica ca 1 sau mai mare ca 10!";
  }
  Matrix m1(dim1, dim2);
  m1.displayMatrix();
  int c;
  cout << "\nIntroduceti un numar de coloana ale carei elemente vor fi "
          "afisate(< "
       << dim2 << ": ";
  cin >> c;
  m1.displayColumn(c);
  m1.diagonalas();
  m1.subdp();
    m1.newm();
}
