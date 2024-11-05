#include <iostream>
#include "PhoneNumber.cpp"
#include "PhoneNumber.h"

using namespace std;

int main() {
    PhoneNumber phone;
    cout << "Digite o numero de telefone no formato (11) 91234-5678:" << endl;
    cin >> phone;
    cout << "O numero de telefone digitado foi: ";
    cout << phone << endl;
}
