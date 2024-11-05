#include <bits/stdc++.h>
#include "ProvaBimestral.cpp"
#include "ProvaBimestral.h"

using namespace std;

int main() {
    ProvaBimestral prova("Matematica", 1, 7.5, "01/04/2024");

    prova.imprimirResultado();

    prova.adiarProva("15/04/2024");
    cout << "Nova data da prova: " << prova.getData() << std::endl;

    return 0;
}
