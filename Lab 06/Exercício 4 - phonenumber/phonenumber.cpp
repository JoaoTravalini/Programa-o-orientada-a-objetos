#include <iostream>
#include "PhoneNumber.h"

using namespace std;

ostream &operator<<(ostream &output, const PhoneNumber &number) {
    output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line;
    return output;
}

istream &operator>>(istream &input, PhoneNumber &number) {
    char discard; // Variável para descartar os caracteres adicionais (parênteses, traço, etc.)
    input >> discard; // Descarta o '('
    getline(input, number.areaCode, ')'); // Lê o código de área até encontrar ')'
    input >> discard; // Descarta o espaço após o código de área
    getline(input, number.exchange, '-'); // Lê o código de intercâmbio até encontrar '-'
    input >> number.line; // Lê a linha do número de telefone
    return input;
}

