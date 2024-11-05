#include <bits/stdc++.h>
#include "livro.cpp"
#include "Livro.h"

int main() {
    Livro livro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954, "9788578277109");

    std::cout << "Livro: " << livro.getTitulo() << std::endl;
    std::cout << "Autor: " << livro.getAutor() << std::endl;
    std::cout << "Ano de Publicacao: " << livro.getAnoPublicacao() << std::endl;
    std::cout << "ISBN: " << livro.getISBN() << std::endl;

    return 0;
}
