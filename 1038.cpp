#include <bits/stdc++.h>
using namespace std;

int main(){

    int cod, qntd;
    float lista[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    cin >> cod >> qntd;
    double valor;
    valor = lista[cod-1];
    valor *= qntd;
    cout << "Total: R$ " << setprecision(2) << fixed << valor << endl;
}