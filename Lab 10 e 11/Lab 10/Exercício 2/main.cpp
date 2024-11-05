#include <list>
#include <iostream>
using namespace std;

list<int> lista;

bool find(int v) {
    for (auto x : lista) {
        if (x == v) {
            return true;
        }
    }
    return false;
}

int menu() {
    cout << "1. Inserir elemento na frente\n";
    cout << "2. Inserir elemento no final\n";
    cout << "3. Excluir elemento na frente\n";
    cout << "4. Excluir elemento no final\n";
    cout << "5. Exibir primeiro elemento da lista\n";
    cout << "6. Exibir ultimo elemento da lista\n";
    cout << "7. Tamanho da lista\n";
    cout << "8. Redimensionar lista\n";
    cout << "9. Remover elementos com valores especificos\n";
    cout << "10. Remover valores duplicados\n";
    cout << "11. Reverter a ordem dos elementos\n";
    cout << "12. Ordenar a lista\n";
    cout << "13. Sair\n";

    int aux = -1;
    while (!(1 <= aux && aux <= 13)) {
        cout << "Escolha uma opcao: ";
        cin >> aux;
    }
    return aux;
}

int main() {
    cout << "===============================\n";
    cout << " Implementacao de Lista no STL \n";
    cout << "===============================\n";
    
    int op = -1, val = -1;
    while (op != 13) {
        op = menu();
        switch (op) {
            case 1:
                cout << "Elemento a ser inserido na frente: ";
                cin >> val;
                lista.push_front(val);
                break;
            case 2:
                cout << "Elemento a ser inserido no final: ";
                cin >> val;
                lista.push_back(val);
                break;
            case 3:
                if (!lista.empty()) {
                    cout << "Elemento " << lista.front() << " excluido\n";
                    lista.pop_front();
                } else {
                    cout << "Lista vazia\n";
                }
                break;
            case 4:
                if (!lista.empty()) {
                    cout << "Elemento " << lista.back() << " excluido\n";
                    lista.pop_back();
                } else {
                    cout << "Lista vazia\n";
                }
                break;
            case 5:
                if (!lista.empty()) {
                    cout << "Primeiro elemento: " << lista.front() << "\n";
                } else {
                    cout << "Lista vazia\n";
                }
                break;
            case 6:
                if (!lista.empty()) {
                    cout << "Ultimo elemento: " << lista.back() << "\n";
                } else {
                    cout << "Lista vazia\n";
                }
                break;
            case 7:
                cout << "Tamanho da lista: " << lista.size() << "\n";
                break;
            case 8:
                cout << "Novo tamanho: ";
                cin >> val;
                if (val >= 0) {
                    lista.resize(val);
                } else {
                    cout << "Tamanho invalido\n";
                }
                break;
            case 9:
                cout << "Elemento a ser removido: ";
                cin >> val;
                if (find(val)) {
                    lista.remove(val);
                } else {
                    cout << "Elemento nao esta na lista\n";
                }
                break;
            case 10:
                cout << "Lista Antiga:";
                for (auto x : lista) {
                    cout << " " << x;
                }
                cout << "\n";
                lista.sort();
                lista.unique();
                break;
            case 11:
                cout << "Lista Antiga:";
                for (auto x : lista) {
                    cout << " " << x;
                }
                cout << "\n";
                lista.reverse();
                break;
            case 12:
                cout << "Lista Antiga:";
                for (auto x : lista) {
                    cout << " " << x;
                }
                cout << "\n";
                lista.sort();
                break;
        }
        
        cout << "Lista Atual:";
        for (auto x : lista) {
            cout << " " << x;
        }
        cout << "\n";
        cout << "\n";
    }
    
    cout << "Programa finalizado!\n";
    return 0;
}
