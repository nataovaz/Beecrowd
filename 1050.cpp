#include <bits/stdc++.h>

using namespace std;


int main(){

    int x; string resp = "";
    cin >> x;

    if(x == 61){
        resp = "Brasilia";
    }
    else if(x == 71){
        resp = "Salvador";
    }
    else if(x == 11){
        resp = "Sao Paulo";
    }
    else if(x == 21){
        resp = "Rio de Janeiro";
    }
    else if(x == 32){
        resp = "Juiz de Fora";
    }
    else if (x == 19){
        resp = "Campinas";
    }
    else if(x == 27){
        resp = "Vitoria";
    }
    else if(x == 31){
        resp = "Belo Horizonte";
    }
    else {
        resp = "DDD nao cadastrado";
    }


        

    cout << resp << endl;

    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1