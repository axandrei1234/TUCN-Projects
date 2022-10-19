/*Axente Andrei Ex4 Lab09 G2115
 Pornind de la exemplul 5 referitor la matrici, verificati/implementati următoarele cerințe:
 a. citirea/scrierea unei matrici, unde dimensiunile sunt preluate de la tastatură
 b. testați toți operatorii supraîncărcați. Implementati variante in care se folosesc metode membre la
 supraincarcare.
 c. afișați elementele de pe diagonala principală și secundară
 d. implementati operatiile cu matrici folsind metode membre.*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int *elems;
public:
    Matrix();
    Matrix(int rows, int cols);
    Matrix(const Matrix&);
    ~Matrix() { delete[] elems; }
    int& operator ( ) (int row, int col);
    Matrix& operator=(const Matrix&);
    //friend Matrix operator+(Matrix&, Matrix&);
    Matrix operator+(Matrix&);//method
    friend Matrix operator-(Matrix&, Matrix&); friend Matrix operator*(Matrix&, Matrix&); int getRows() { return rows; }
    int getCols() { return cols; }
    void init(int r, int c); void citire();
    void afisare();
};


