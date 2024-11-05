#include <queue>
#include <iostream>
using namespace std;

priority_queue<int> filaP;

int menu() {
    cout << "\n1. Insira um elemento na heap\n";
    cout << "2. Remova um elemento da heap\n";
    cout << "3. Tamanho da heap\n";
    cout << "4. Primeiro elemento da heap\n";
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
    cout << " Programa de Heap STL \n";
    cout << "---------------------------\n";
    
    int op = -1;
    while (op != 5) {
        op = menu();
        switch (op) {
            case 1: {
                cout << "Entre com o valor a ser inserido: ";
                int val;
                cin >> val;
                filaP.push(val);
                break;
            }
            case 2: {
                if (!filaP.empty()) {
                    cout << "Elemento " << filaP.top() << " removido\n";
                    filaP.pop();
                } else {
                    cout << "Heap vazia\n";
                }
                break;
            }
            case 3: {
                cout << "Tamanho da heap: " << filaP.size() << "\n";
                break;
            }
            case 4: {
                if (!filaP.empty()) {
                    cout << "Primeiro elemento da heap: " << filaP.top() << "\n";
                } else {
                    cout << "Heap vazia\n";
                }
                break;
            }
        }
        cout << "\n";
    }
    
    cout << "Programa finalizado!\n";
    return 0;
}
