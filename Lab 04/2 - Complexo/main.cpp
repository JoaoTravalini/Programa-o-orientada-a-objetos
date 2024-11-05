#include <bits/stdc++.h>
#include "complexo.cpp"
#include "complexo.h"

using namespace std;

int main() {
    Complexo a(1, 2);
    Complexo b(3, 4);
    Complexo aux;

    cout << "A: ";
    a.print();
    cout << "B: ";
    b.print();

    cout << "A + B: ";
    aux = a + b;
    aux.print();

    cout << "A - B: ";
    aux = a - b;
    aux.print();

    cout << "A * B: ";
    aux = a * b;
    aux.print();

    cout << "A / B: ";
    aux = a / b;
    aux.print();

    cout << "|A|: " << a.modulo() << endl;
    cout << "|B|: " << b.modulo() << endl;
    cout << "Quantidade de objetos: " << a.getObjetos() << endl;

    cout << "Digite dois números para criar um novo complexo: ";
    cin >> aux;
    cout << "Novo complexo: " << aux << endl;

    cout << "A == B? " << (a == b ? "Sim" : "Não") << endl;
    cout << "A != B? " << (a != b ? "Sim" : "Não") << endl;

    return 0;
}
