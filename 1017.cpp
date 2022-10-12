#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int nota;
    int restante;

    cin >> nota;
    int n100 = nota / 100;
        restante = nota % 100;
    int n50 = restante / 50;
        restante = restante % 50;
    int n20 = restante / 20;
        restante = restante % 20;
    int n10 = restante / 10;
        restante = restante % 10;
    int n5 = restante / 5;
        restante = restante % 5;
    int n2 = restante / 2;
        restante = restante % 2;
    int n1 = restante / 1;
        restante = restante % 1;
    
    cout << nota << endl;
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);


    return 0;
} 