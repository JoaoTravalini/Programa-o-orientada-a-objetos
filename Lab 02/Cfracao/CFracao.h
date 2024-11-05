#ifndef ID_CFRACAO
#define ID_CFRACAO

class CFracao
{
private:
    int m_numerador;
    int m_denominador;

    CFracao Reduzida(void);

public:
    CFracao(void) { // Construtor sem parâmetros inline
        m_numerador = 1;
        m_denominador = 1;
    }

    CFracao(int Num, int Denom) : m_numerador(Num),
                                  m_denominador(Denom) {};

    CFracao(const CFracao &f) // Construtor de cópia inline
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }

    ~CFracao(void){}; // Destrutor

    int getNumerador(void) { return m_numerador; }

    int getDenominador(void) { return m_denominador; }

    CFracao Somar(CFracao _F);

    CFracao Subtrair(CFracao _F);

    CFracao Multiplicar(CFracao _F);

    CFracao Dividir(CFracao _F);

    int MenorQue(CFracao _Fracao);

    int MaiorQue(CFracao _Fracao);

    int Igual(CFracao _Fracao);

    float ComoFloat(void);

    void Print(void);
};

#endif 
