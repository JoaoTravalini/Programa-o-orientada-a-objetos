#include <bits/stdc++.h>
#include "Ponto.h"
#include "ponto.cpp"
#include "Circulo.h"
#include "circulo.cpp"
#include "Cilindro.h"
#include "cilindro.cpp"

int main() {
    std::vector<Ponto*> objetos;
    int opcao;

    do {
        std::cout << "Escolha o tipo de objeto a ser criado:\n";
        std::cout << "1 - Ponto\n";
        std::cout << "2 - Circulo\n";
        std::cout << "3 - Cilindro\n";
        std::cout << "0 - Sair\n";
        std::cout << "Opção: ";
        std::cin >> opcao;

        if (opcao == 1) {
            double x, y;
            std::cout << "Coordenada x: ";
            std::cin >> x;
            std::cout << "Coordenada y: ";
            std::cin >> y;
            objetos.push_back(new Ponto(x, y));
        } else if (opcao == 2) {
            double x, y, raio;
            std::cout << "Coordenada x: ";
            std::cin >> x;
            std::cout << "Coordenada y: ";
            std::cin >> y;
            std::cout << "Raio: ";
            std::cin >> raio;
            objetos.push_back(new Circulo(x, y, raio));
        } else if (opcao == 3) {
            double x, y, raio, altura;
            std::cout << "Coordenada x: ";
            std::cin >> x;
            std::cout << "Coordenada y: ";
            std::cin >> y;
            std::cout << "Raio: ";
            std::cin >> raio;
            std::cout << "Altura: ";
            std::cin >> altura;
            objetos.push_back(new Cilindro(x, y, raio, altura));
        }
    } while (opcao != 0);

    std::cout << "\nLista de objetos criados:\n";
    for (const auto& obj : objetos) {
        obj->imprime();
        std::cout << std::endl;
    }

    // Liberar a memória alocada
    for (auto& obj : objetos) {
        delete obj;
    }

    return 0;
}
