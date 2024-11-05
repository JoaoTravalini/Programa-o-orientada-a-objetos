#ifndef PROVABIMESTRAL_H
#define PROVABIMESTRAL_H

#include <bits/stdc++.h>
using namespace std;

class ProvaBimestral {
private:
    string disciplina;
    int bimestre;
    float nota;
    string data;

public:
    ProvaBimestral(const string& disciplina, int bimestre, float nota, const string& data);
    ~ProvaBimestral();

    string getDisciplina() const;
    void setDisciplina(const string& disciplina);
    int getBimestre() const;
    void setBimestre(int bimestre);
    float getNota() const;
    void setNota(float nota);
    string getData() const;
    void setData(const string& data);

    bool isAprovado() const;
    void imprimirResultado() const;
    void adiarProva(const string& novaData);
};

#endif
