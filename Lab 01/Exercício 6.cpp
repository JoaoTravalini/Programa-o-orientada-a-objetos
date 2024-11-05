#include <bits/stdc++.h>

using namespace std;

int somadosprimeiros(int n){

    if(n == 1){
        return 1;
    }else{
        return n + somadosprimeiros(n - 1);
    }

}

int main (){

    int num, soma;

    cout << "Entre com um numero para saber a soma dos n primeiros numeros inteiros: ";
    cin >> num;

    soma = somadosprimeiros(num);

    cout << "A soma e: " << soma << endl;

    return 0;
}