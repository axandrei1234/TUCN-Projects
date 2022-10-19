#include <iostream>
#include <fstream>
using namespace std;
#include "Coord.h"

int main( ) {
ofstream fout;
ifstream fin;
fout.open("test.txt", ios::out | ios::trunc); if (!fout) {
perror("Cannot open test.txt file.\n");
exit(1); }
Coord A(7, 2), B(17, 20);
cout << A << B;
//cout << "\nScrie A (7,2) si B(17,20) in fisier\n";
fout << A << B;
cin >> A;
//cout << "\nValorile noi introduse sunt: \n";
cout << A;
fout << A;
//fout << std::ifstream::traits_type::eof( );// write EOF fout.close( );
fin.open("test.txt");
if (!fin) {
perror ( "Cannot open test.txt file.\n");
exit(1); }
    while (fin) { //while (1) { fin >> A;
    if (fin.eof( )) break;
    cout << A; }
    /*
    while (!fin.eof( )) {//read twice the last values - past the end
    fin >> A; cout << A;
    } */
    fin.close( );
    return 0; }
