#ifndef LIVRO_H
#define LIVRO_H

#include <bits/stdc++.h>

class Livro {
private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    std::string isbn;

public:
    Livro(const std::string& titulo, const std::string& autor, int anoPublicacao, const std::string& isbn);
    ~Livro();

    // Getters e Setters
    std::string getTitulo() const;
    void setTitulo(const std::string& titulo);
    std::string getAutor() const;
    void setAutor(const std::string& autor);
    int getAnoPublicacao() const;
    void setAnoPublicacao(int anoPublicacao);
    std::string getISBN() const;
    void setISBN(const std::string& isbn);
};

#endif
