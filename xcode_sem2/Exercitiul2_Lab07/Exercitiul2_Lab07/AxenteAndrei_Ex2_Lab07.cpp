/*Axente Andrei Ex2 Lab07 G2115
 Să se scrie o aplicaţie C/C++ care să modeleze obiectual un tablou unidimensional de numere reale. Creaţi două instanţe ale clasei şi afișați valorile unui al 3-lea tablou, obținute prin scăderea elementelelor corespunzătoare din primele 2 tablouri. Dacă tablourile au lungimi diferite, tabloul rezultat va avea lungimea tabloului cel mai scurt.*/

#include <iostream>
#include <vector>
using namespace std;

class Tablou {
private:
  vector<float> v1;

public:
  void citire(vector<float> a) {
    int n{};
    float numar;

    cout << "Ce dimensiune sa aiba vectorul: ";
    cin >> n;
    for (int i{}; i < n; i++) {
      cout << "v[" << i << "]: ";
      cin >> numar;
      a.push_back(numar);
    }
   copy(a.begin(), a.end(), back_inserter(v1));
  }

  void afisare() {
    for (auto i : v1)
      cout << i << " ";
  }

  Tablou scadere(Tablou t2) {
    Tablou t3;

    for (int i{}; i < min(v1.size(), t2.v1.size()); i++)
      t3.v1.push_back(v1[i]-t2.v1[i]);
    return t3;
  }
};

int main() {
  Tablou t1, t2, t3;
  vector<float> c1;
  t1.citire(c1);
  t2.citire(c1);
  t3 = t1.scadere(t2);
  t3.afisare();
}
