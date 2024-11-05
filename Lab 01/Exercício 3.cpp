#include <bits/stdc++.h>

using namespace std;

int menu() {
    int op;
    cout << "0 - sair" << endl;
    cout << "1 - fatorial" << endl;
    cout << "2 - 20 primeiros primos" << endl;
    cout << "3 - mudanca de base" << endl;
    cout << "4 - retangulo" << endl;
    cout << "5 - soma ate n" << endl;
    cout << "6 - mdc" << endl;
    cout << "7 - binario" << endl;
    cout << "8 - palindromo" << endl;
    cout << "Escolha: ";
    cin >> op;
    return op;
}

int main(){

    int op = menu();
    while (op != 0) {
        switch (op) {
            case 1:
                cout << "Opção 1: " << endl;
                break;
            case 2:
                cout << "Opção 2: " << endl;
                break;
            case 3:
                cout << "Opção 3: " << endl;
                break;
            case 4:
                cout << "Opção 4: " << endl;
                break;
            case 5:
                cout << "Opção 5: " << endl;
                break;
            case 6:
                cout << "Opção 6: " << endl;
                break;
            case 7:
                cout << "Opção 7: " << endl;
                break;
            case 8:
                cout << "Opção 8: " << endl;
                break;
            case 9:
                break;
        }
        op = menu();
    }

    return 0;
}