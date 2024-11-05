#include <bits/stdc++.h>
#include "INT30.cpp"
#include "INT30.h"

using namespace std;

int main() {
    INT30 num1, num2, resultado;
    
    // Leitura dos números
    cout << "Digite o primeiro número (30 dígitos ou menos): ";
    num1.leia();

    cout << "Digite o segundo número (30 dígitos ou menos): ";
    num2.leia();

    // Operações
    resultado = num1.soma(num2);
    cout << "Soma: ";
    resultado.print();

    resultado = num1.subtrai(num2);
    cout << "Subtração: ";
    resultado.print();

    return 0;
}
