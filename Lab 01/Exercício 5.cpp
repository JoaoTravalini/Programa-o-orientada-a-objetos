#include <bits/stdc++.h>

using namespace std;

void imprime(int l, int a, char b, char p, char r){
    if(r == 's'){
        for(int i = 1; i <= a; i++){
        for(int j = 1; j <= l; j++){
            if(i == 1 || j == 1 || i == a || j == l){
                cout << b;
            }else{
                cout << p;
            }
        }
        cout << endl;
    }
    }else{
        for(int i = 1; i <= a; i++){
        for(int j = 1; j <= l; j++){
            if(i == 1 || j == 1 || i == a || j == l){
                cout << b;
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    }
}

int main(){

    int altura, largura;
    char borda, preenchimento, resposta;

    cout << "Entre com a largura e altura do retangulo: ";
    cin >> largura >> altura;
    cout << "Entre com o caractere da borda: ";
    cin >> borda;
    cout << "Entre com o caractere do preenchimento: ";
    cin >> preenchimento;
    cout << "Com preenchimento (s) ou sem preenchimento (n) ?";
    cin >> resposta;

    imprime(largura, altura, borda, preenchimento, resposta);

    return 0;
}