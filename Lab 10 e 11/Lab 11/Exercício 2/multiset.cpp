#include <set>
#include <iostream>
using namespace std;

multiset<int> conjunto;

void imprime() {
    for (auto x : conjunto)
        cout << x << " ";
    cout << endl;
}

int menu() {
    cout << "1. Inserir elemento\n";
    cout << "2. Remover elementos com determinado valor\n";
    cout << "3. Exibir elementos em ordem\n";
    cout << "4. Exibir quantidade de elementos\n";
    cout << "5. Remover todos os elementos\n";
    cout << "6. Consultar quantidade de elementos com determinado valor\n";
    cout << "7. Sair\n";
    
    int aux = -1;
    while (!(1 <= aux && aux <= 7)) {
        cout << "Escolha uma opcao: ";
        cin >> aux;
    }
    return aux;
}

int main() {
    cout << "======================================\n";
    cout << " Implementação de Árvore (multiset) no STL \n";
    cout << "======================================\n";
    
    int op = -1, val = -1;
    while (op != 7) {
        op = menu();
        switch (op) {
            case 1: {
                cout << "Elemento a ser inserido: ";
                cin >> val;
                conjunto.insert(val);
                break;
            }
            case 2: {
                cout << "Elemento a ser removido: ";
                cin >> val;
                conjunto.erase(val);
                break;
            }
            case 3: {
                imprime();
                break;
            }
            case 4: {
                cout << "Quantidade de Elementos: " << conjunto.size() << "\n";
                break;
            }
            case 5: {
                cout << "Removendo todos os elementos\n";
                conjunto.clear();
                break;
            }
            case 6: {
                cout << "Elemento a ser consultado: ";
                cin >> val;
                cout << val << " aparece: " << conjunto.count(val) << " vezes.\n";
                break;
            }
        }
        cout << "\n";
    }
    
    cout << "Programa finalizado!\n";
    return 0;
}
