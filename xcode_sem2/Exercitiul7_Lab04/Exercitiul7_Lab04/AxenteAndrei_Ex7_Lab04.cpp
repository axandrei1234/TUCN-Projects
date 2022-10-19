/*Axente Andrei Ex7 Lab04 G2115
 Să se scrie un program care permite sortarea unui stoc de calculatoare. Acestea să se reprezinte în program ca o structură formată din caracteristicile calculatoarelor (nume (sir caractere), tip de procesor (sir caractere), frecventa de tact (long int), dimensiunea memoriei RAM (int), preț (float). Sortarea se va face, la alegerea utilizatorului, după: pret, memorie, tact sau tip de procesor. Folosiți, de preferință, funcția de bibliotecă pentru sortări qsort( ) sau o altă metodă la alegere. Sortați apoi considerând un câmp sir de caractere si unul numeric. Afișați rezultatele.*/

#include <iostream>
using namespace std;

struct Calculatoare {
    char nume [30];
    char procesor [30];
    long int frecventa;
    int ram;
    float pret;
};

void wstruct (struct Calculatoare *c);
void rstruct (struct Calculatoare *c);
int compare0 (const void *a, const void *b);
int compare1 (const void *a, const void *b);
int compare2 (const void *a, const void *b);
int compare3 (const void *a, const void *b);
int compare4 (const void *a, const void *b);

int main() {
    struct Calculatoare *c;
    int dim{};
    char decizie;
    cout << "Cate calculatoare doriti sa introduceti: ";
    cin >> dim;
    c = new Calculatoare[dim];
    for (int i{}; i<dim; i++) {
        cout << "Calculator[" << i << "]: " << endl;
        wstruct (c+i);
    }
    cout << "Afisare Calculaoare: " << endl << endl;
    for (int i{}; i<dim; i++) {
        cout << "Calculator[" << i << "]: " << endl;
        rstruct (c+i);
    }
    cout << "Alegeti ce sa sortati (Nume[1], CPU[2], freq[3], ram[4], pret[5]): ";
    cin >> decizie;
    switch (decizie) {
        case '1':
            cout << "Sortare dupa nume(crescator): " << endl << endl;
            qsort (c,dim,sizeof(Calculatoare),compare0);
            for (int i{}; i<dim; i++) {
                cout << "Calculator[" << i << "]: " << endl;
                rstruct (c+i);
    }
            break;
        case '2':
            cout << "Sortare dupa cpu(crescator): " << endl << endl;
            qsort (c,dim,sizeof(Calculatoare),compare1);
            for (int i{}; i<dim; i++) {
                cout << "Calculator[" << i << "]: " << endl;
                rstruct (c+i);
    }
            break;
        case '3':
            cout << "Sortare dupa frecventa(crescator): " << endl << endl;
            qsort (c,dim,sizeof(Calculatoare),compare2);
            for (int i{}; i<dim; i++) {
                cout << "Calculator[" << i << "]: " << endl;
                rstruct (c+i);
            }
            break;
        case '4':
            cout << "Sortare dupa ram(crescator): " << endl << endl;
            qsort (c,dim,sizeof(Calculatoare),compare3);
            for (int i{}; i<dim; i++) {
                cout << "Calculator[" << i << "]: " << endl;
                rstruct (c+i);
            }
            break;
        case '5':
            cout << "Sortare dupa pret(crescator): " << endl << endl;
            qsort (c,dim,sizeof(Calculatoare),compare4);
            for (int i{}; i<dim; i++) {
                cout << "Calculator[" << i << "]: " << endl;
                rstruct (c+i);
            }
            break;
        default:
            cout << "Ati introdus alegerea gresita!" << endl;
            break;
    }
}

void wstruct (struct Calculatoare *c) {
    cout << "Nume PC: "; cin >> c->nume;
    cout << "Procesor: "; cin >> c->procesor;
    cout << "Frecventa: "; cin >> c->frecventa;
    cout << "Ram: "; cin >> c->ram;
    cout << "Pret: "; cin >> c->pret;
    cout << endl;
}

void rstruct (struct Calculatoare *c) {
    cout << "Nume PC: " << c->nume << endl;
    cout << "Procesor: " << c->procesor << endl;
    cout << "Frecventa: " << c->frecventa << endl;
    cout << "Ram: " << c->ram << endl;
    cout << "Pret: " << c->pret << endl;
    cout << endl;
}

    int compare0 (const void *a, const void *b) {
        Calculatoare *A = (Calculatoare *) a;
        Calculatoare *B = (Calculatoare *) b;
        return strcmp(A->nume,B->nume);
    }

int compare1(const void *a, const void *b) {
    Calculatoare *A = (Calculatoare *) a;
    Calculatoare *B = (Calculatoare *) b;
    return strcmp(A->procesor,B->procesor);
}

int compare2(const void *a, const void *b) {
    Calculatoare *A = (Calculatoare *) a;
    Calculatoare *B = (Calculatoare *) b;
    return (A->frecventa - B->frecventa);
}

int compare3 (const void *a, const void *b) {
    Calculatoare *A = (Calculatoare *) a;
    Calculatoare *B = (Calculatoare *) b;
    return (A->ram - B->ram);
}

int compare4 (const void *a, const void *b) {
        Calculatoare *A = (Calculatoare *) a;
        Calculatoare *B = (Calculatoare *) b;
        return (A->pret - B->pret);
}
