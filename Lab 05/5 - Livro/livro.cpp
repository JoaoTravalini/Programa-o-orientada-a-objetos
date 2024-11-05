#include <bits/stdc++.h>
#include "Livro.h"

Livro::Livro(const std::string& titulo, const std::string& autor, int anoPublicacao, const std::string& isbn)
    : titulo(titulo), autor(autor), anoPublicacao(anoPublicacao), isbn(isbn) {}

Livro::~Livro() {}

std::string Livro::getTitulo() const {
    return titulo;
}

void Livro::setTitulo(const std::string& titulo) {
    this->titulo = titulo;
}

std::string Livro::getAutor() const {
    return autor;
}

void Livro::setAutor(const std::string& autor) {
    this->autor = autor;
}

int Livro::getAnoPublicacao() const {
    return anoPublicacao;
}

void Livro::setAnoPublicacao(int anoPublicacao) {
    this->anoPublicacao = anoPublicacao;
}

std::string Livro::getISBN() const {
    return isbn;
}

void Livro::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}
