#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;

    int ano, mes, dia;
    int res;

    cin >> n;
    ano = n/365;
    res = n%365;

    mes = res/30;
    res = res%30;

    dia = res;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
} 