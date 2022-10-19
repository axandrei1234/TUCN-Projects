/*Axente Andrei Ex2 Lab05*/
#include <iostream>
#include <string>
using namespace std;
class myString {
private:
    string sir0;
public:
    void set_sir(string sir1) {
        if(sir1.length()>10)
            exit(1);
        else
            sir0 = sir1;
    }
    
    string get_sir() {return sir0;}
    
    size_t dim_sir() {return sir0.length();}
    
    size_t ult_poz() {return sir0.length()-1;}
    
    string upper () {
        for (int i{}; i<sir0.length(); i++)
            sir0[i] = toupper(sir0[i]);
        return sir0;
    }

    string lower () {
        for (int i{}; i<sir0.length(); i++)
            sir0[i] = tolower(sir0[i]);
        return sir0;
    }
    int count () {
        int k{};
        for (int i{}; i<sir0.size(); i++)
            if (sir0[i] == 'a')
            k++;
        return k;
    }
};


