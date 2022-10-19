/*Axente Andrei Ex6 Lab11 G2115
 Definiti o clasa numita Record care stocheaza informatiile aferente unei melodii (artist, titlu, durata). O clasa abstracta (Playlist) contine ca atribut privat un pointer spre un sir de obiecte de tip inregistrare. In constructor se aloca memorie pentru un numar de inregistrari definit de utilizator. Clasa contine metode accesor si mutator pentru datele componente ale unei inregistrari si o metoda pur virtuala cu un parametru (abstracta), care poate ordona sirul de inregistrari dupa un anumit criteriu codat in valoarea intreaga primita ca parametru (1=ordonare dupa titlu, 2=ordonare dupa artist, 3=ordonare dupa durata). Intr-o alta clasa (PlaylistImplementation) derivata din Playlist se implementeaza corpul metodei abstracte de sortare.*/

#include <iostream>
#include <string>
using namespace std;
class Record {
private:
    string artist;
    string titlu;
    int durata;
};

class Playlist : public Record {
    
};


int main() {
    
}
