#include <bits/stdc++.h>
#include "politico.h"
#include "politico.cpp"
#include "presidente.h"
#include "presidente.cpp"
#include "governador.h"
#include "governador.cpp"
#include "prefeito.h"
#include "prefeito.cpp"

int main() {
    std::vector<Politico*> politicos;
    int opcao;

    do {
        std::cout << "Escolha o tipo de político a ser criado:\n";
        std::cout << "1 - Presidente\n";
        std::cout << "2 - Governador\n";
        std::cout << "3 - Prefeito\n";
        std::cout << "0 - Sair\n";
        std::cout << "Opcao: ";
        std::cin >> opcao;

        if (opcao == 1) {
            std::string nome, partido, pais;
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << "Partido: ";
            std::cin >> partido;
            std::cout << "Pais: ";
            std::cin >> pais;
            politicos.push_back(new Presidente(nome, partido, pais));
        } else if (opcao == 2) {
            std::string nome, partido, estado;
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << "Partido: ";
            std::cin >> partido;
            std::cout << "Estado: ";
            std::cin >> estado;
            politicos.push_back(new Governador(nome, partido, estado));
        } else if (opcao == 3) {
            std::string nome, partido, cidade;
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << "Partido: ";
            std::cin >> partido;
            std::cout << "Cidade: ";
            std::cin >> cidade;
            politicos.push_back(new Prefeito(nome, partido, cidade));
        }
    } while (opcao != 0);

    std::cout << "\nLista de poli ticos criados:\n";
    for (const auto& politico : politicos) {
        politico->imprime();
        std::cout << std::endl;
    }

    // Liberar a memória alocada
    for (auto& politico : politicos) {
        delete politico;
    }

    return 0;
}
