/*Axente Andrei && Fufezan Mihai Ex2 Lab10 G2115
 Folosind modelul claselor de la mostenirea publica, implementaţi două clase, astfel: - clasa de bază contine metode pentru:
 -codarea unui şir de caractere (printr-un algoritm oarecare- recomandat XOR cu o masca fixa) => public;
 -afişarea şirului original şi a celui rezultat din transformare = > public; - clasa derivata contine o metoda pentru:
 -scrirea rezultatului codării într-un fişier, la sfârşitul acestuia.
 Fiecare inregistrare are forma: nr_inregistrare: şir_codat;
 Accesul la metodele ambelor clase se face prin intermediul unui obiect rezultat prin instanţierea clasei derivate. Programul care foloseşte clasele citeşte un şir de caractere de la tastatură şi apoi, în funcţie de opţiunea utilizatorului, afişează rezultatul codării sau îl scrie în fişier.*/

class Base {
    
    
    
    
protected:
    
    
    
    
  char str[50];
    
    
  char mask = 0b01000111;
    
    

public:
  void setStr(char *str);
  void encode();
  void display();
};

class Derived : public Base {
public:
  void appendFile();
};

int getNum();


#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;


ifstream fin("records.txt");
ofstream fout("records.txt", ios_base::out | ios_base::app);


int number = getNum();

int main() {
  Derived deriv_obj;
  char str[50], type = 0;

  cout << "Enter a string: ";
  cin >> str;
  deriv_obj.setStr(str);

  while (type != 'q') {
    cout << "\nWhat do you want to do with the string?\ne - encode\na - "
            "append to file\nd - display string\nq - quit: ";
    cin >> type;

    switch (type) {
    case 'e':
            
            
      deriv_obj.encode();
      break;
    case 'a':
            
            
            
            
            
            
            
      deriv_obj.appendFile();
      break;
    case 'd':
            
            
            
            
            
      deriv_obj.display();
      break;
            
            
            
            
            
            
    case 'q':
      break;
    default:
            
            
            
            
            
            
            
      cout << "Unknown operation!";
    }
  }
}




void Base::encode() {
    
    
    
    
    
    
    
    
  for (int i{}; i < strlen(str); i++)
      
      
      
    str[i] ^= mask;
}




void Base::display()  { cout << str << endl; }





void Base::setStr(char *str) { strcpy(this->str, str); }





void Derived::appendFile() { fout << number << " = " << str << endl; }

int getNum() {
    
    
    
  char str[60]{}, str2[60]{};

    
    
 
  if (fin.fail())
    return 1;

  
  while (!fin.eof()) {
      
      
      
      
      
    strcpy(str2, str);
      
      
      
      
      
    fin.getline(str, 60);
  }

    
    
    
    
    
  return stoi(string(str2)) + 1;
}
