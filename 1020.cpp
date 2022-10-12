#include <bits/stdc++.h>

using namespace std;

int main(){
    float valor;
    int restante;

    cin >> valor;
    int nota = floor(valor);

  

    int moedas = (int)((valor-nota) *100);

    cout << moedas << "Moedas aqui";


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

    restante = 0;
    int m50 = moedas/50;
        restante = fmod(moedas, 50);
    
    int m25 = restante/25;
        restante = fmod(moedas, 25);
    
    int m10 = restante/10;
        restante = fmod(moedas, 10);
    int m5 = restante/5;
        restante = fmod(moedas, 5);
    int m1 = restante;
    
    
   
    printf("NOTAS:\n");  
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);

    printf("MOEDAS:\n");  
    printf("%d moeda(s) de R$ 1,00\n", n1);
    printf("%d moeda(s) de R$ 0,50\n", m50);
    printf("%d moeda(s) de R$ 0,25\n", m25);
    printf("%d moeda(s) de R$ 0,10\n", m10);
    printf("%d moeda(s) de R$ 0,05\n", m5);
    printf("%d moeda(s) de R$ 0,01\n", m1);


    return 0;
} 