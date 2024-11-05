#include <iostream>
#include "poligonos.h"

using namespace std;

int main(){

 Poligonos poli;

 int n, b;

 cout << "Entre com o numero de lados e o comprimento de cada lado: ";
 cin >> n >> b;

 poli.preenche(n, b);
 
 cout << "Nome = " << poli.Nome() << endl;
 cout << "Area = " << poli.Area() << endl;
 cout << "Perimetro = " << poli.Perimetro() << endl;
}