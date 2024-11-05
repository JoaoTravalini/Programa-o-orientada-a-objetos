#include <stack>
#include <iostream>
using namespace std;

stack<int> pilha;

int menu() {
    cout << "\n1. Insira um elemento na pilha\n";
    cout << "2. Remova um elemento da pilha\n";
    cout << "3. Tamanho da pilha\n";
    cout << "4. Primeiro elemento da pilha\n";
    cout << "5. Sair\n";
    
    int aux = -1;
    while (!(1 <= aux && aux <= 5)) {
        cout << "Escolha (1-5): ";
        cin >> aux;
    }
    return aux;
}

int main() {
    cout << "---------------------------\n";
    cout << " Programa de Pilha STL \n";
    cout << "---------------------------\n";
    
    int op = -1;
    while (op != 5) {
        op = menu();
        switch (op) {
            case 1: {
                cout << "Entre com o valor a ser inserido: ";
                int val;
                cin >> val;
                pilha.push(val);
                break;
            }
            case 2: {
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido\n";
                    pilha.pop();
                } else {
                    cout << "Pilha vazia\n";
                }
                break;
            }
            case 3: {
                cout << "Tamanho da pilha: " << pilha.size() << "\n";
                break;
            }
            case 4: {
                if (!pilha.empty()) {
                    cout << "Primeiro elemento da pilha: " << pilha.top() << "\n";
                } else {
                    cout << "Pilha vazia\n";
                }
                break;
            }
        }
        cout << "\n";
    }
    
    cout << "Programa finalizado!\n";
    return 0;
}
