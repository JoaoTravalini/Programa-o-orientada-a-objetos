#include "ProvaBimestral.h"
#include <bits/stdc++.h>
using namespace std;

ProvaBimestral::ProvaBimestral(const string& disciplina, int bimestre, float nota, const string& data)
    : disciplina(disciplina), bimestre(bimestre), nota(nota), data(data) {}

ProvaBimestral::~ProvaBimestral() {}

string ProvaBimestral::getDisciplina() const {
    return disciplina;
}

void ProvaBimestral::setDisciplina(const string& disciplina) {
    this->disciplina = disciplina;
}

int ProvaBimestral::getBimestre() const {
    return bimestre;
}

void ProvaBimestral::setBimestre(int bimestre) {
    this->bimestre = bimestre;
}

float ProvaBimestral::getNota() const {
    return nota;
}

void ProvaBimestral::setNota(float nota) {
    this->nota = nota;
}

string ProvaBimestral::getData() const {
    return data;
}

void ProvaBimestral::setData(const string& data) {
    this->data = data;
}

bool ProvaBimestral::isAprovado() const {
    return nota >= 6.0;
}

void ProvaBimestral::imprimirResultado() const {
    cout << "Resultado da prova de " << disciplina << " do bimestre " << bimestre << ": ";
    if (isAprovado()) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
}

void ProvaBimestral::adiarProva(const string& novaData) {
    data = novaData;
}
