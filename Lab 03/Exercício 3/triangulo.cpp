#include <bits/stdc++.h>
#include "triangulo.h"

using namespace std;

void trianguloret::todos100(){
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                if(i==sqrt(j*j + k*k)){
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
}

trianguloret::trianguloret(int a, int b, int c){
    if(((a*a) == (b*b + c*c)) || ((b*b) == (a*a + c*c)) || ((c*c) == (a*a + b*b)) ){
        ma = a;
        mb = b;
        mc = c;
    }else{
        cout << endl << "Triangulo invalido. Os valores padrao sao a=5, b=4 , c=3"<< endl << endl;
        ma = 5;
        mb = 4;
        mc = 3;
    }
}

