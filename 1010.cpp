#include <iostream>

using namespace std;

int main(){
    int cod, qntd;
    double valor;
    double res(0);

    
    int n = 2;
    while(!(n == 0)){
        cin >> cod >> qntd >> valor;

        res += qntd * valor;


        n--;
        
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", res);

    return 0;

}