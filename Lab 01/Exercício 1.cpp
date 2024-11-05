#include <bits/stdc++.h>

int fatorial(int n){
    
    int fat = 1;
    
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    
    return fat;
}


int main()
{
    using namespace std;
    
    int num = 0;
    
    cout << "Entre com um numero para saber seu fatorial: ";
    cin >> num;
    
    if(num <= 0){
        cout << "Erro!";
    }else{
        int resultado = fatorial(num);
        cout << "O fatorial de " << num << " e: " << resultado << endl;
    }
    
    return 0;
}