/*Axente Andrei Ex7 Lab06 G2115
 Să se scrie clasa Seif, cu atributele private cifru (pin - sir de caractere, 4 cifre int) și suma de
 tip double. Definiți metodele private getSuma() și setSuma( ) și metodele public puneInSeif( ) și scoateDinSeif( ) cu care să accesați suma de bani care se află în seif. Metoda puneInSeif( ) poate apela getSuma() și setSuma( ), metoda scoateDinSeif( ) poate apela getSuma( ) și setSuma( ). Instanțiați obiecte din clasa Seif, iar metodele puneInSeif( ) și scoateDinSeif( ) vor putea accesa suma doar dacă parametrul de tip cifru utilizat corespunde obiectului instanțiat. În caz de diferență de cifru, se va da un mesaj.*/

#include <iostream>
#include <string>
#define sumInit 100
using namespace std;


class Seif {
private:
    string pin;
    double suma = sumInit;
    
    void setSuma(double a = sumInit) {suma=a;}
    double getSuma() {return suma;}
public:
    void setPin(string a) {pin = a;}
    string getPin() {return pin;}
    
    void puneInSeif () {
        double bani;
        cout << "Cati bani doriti sa introduceti in seif: ";
        cin >> bani;
        while (bani < 0) {
            cout << "Puteti introduce numai valori pozitive! Introduceti alta valoare: ";
            cin >> bani;
        }
        suma += bani;
        setSuma(suma);
        cout << "Aveti in seif " << getSuma() << " Lei!" << endl  << endl;
    }
    
    void scoateDinSeif() {
        double bani;
        cout << "Cati bani doriti sa scoateti din seif: ";
        cin >> bani;
        while (bani < 0) {
            cout << "Puteti introduce numai valori pozitive! Introduceti alta valoare: ";
            cin >> bani;
        }
        while (bani > suma) {
            cout << "Nu puteti scoate mai multi bani decat aveti in seif deja! Introduceti alta valoare: ";
            cin >> bani;
        }
            
        suma -= bani;
        setSuma(suma);
        cout << "Aveti in seif " << getSuma() << " Lei!" << endl << endl;
    }
    
    void verificarePin() {
        string p;
        char alegere;
        cout << "Care este cifrul: ";
        cin >> p;
        pin = p;
        cout << "Introduceti cifrul pentru a avea acces la seif: ";
        cin >> p;
        cout << endl;
        
        if (p == pin) {
            do {
                cout << "1. Introduceti bani" << endl;
                cout << "2. Scoateti bani" << endl;
                cout << "3. Iesiti din problema" << endl;
                cout << endl << "Alegeti o varianta: ";
                cin >> alegere;
                while (alegere != '1' && alegere && '2' && alegere != '3') {
                    cout << "Ati introdus valoarea gresita! Introduceti alta alegere: ";
                    cin >> alegere;
                }
                if (alegere == '1')
                    puneInSeif();
                else
                    if (alegere == '2')
                        scoateDinSeif();
            } while (alegere != '3');
            
        
    }
        else {
            cout << "Pinul a fost introdus gresit" << endl;
            exit (1);
        }
    }
};

int main() {
    Seif s;
    s.verificarePin();
}
