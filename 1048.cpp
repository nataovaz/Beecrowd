#include <bits/stdc++.h>

using namespace std;


int main(){

    float salario, novo_salario;
    int reaj;
    cin >> salario;

    if (salario >= 0 && salario <= 400.00){
        reaj = 15;
        novo_salario = (salario * reaj)/100;

        cout << "Novo salario: " << setprecision(2) << fixed << novo_salario+salario << endl;
        cout << "Reajuste ganho: " << novo_salario << endl;
        cout << "Em percentual: " << reaj << " %" << endl;


    }
    else if(salario > 400 && salario <= 800.00){
        reaj = 12;
        novo_salario = (salario * reaj)/100;

        cout << "Novo salario: " << setprecision(2) << fixed << novo_salario+salario << endl;
        cout << "Reajuste ganho: " << novo_salario << endl;
        cout << "Em percentual: " << reaj << " %" << endl;
    }
    else if(salario > 800 && salario <= 1200.00){
        reaj = 10;
        novo_salario = (salario * reaj)/100;

        cout << "Novo salario: " << setprecision(2) << fixed << novo_salario+salario << endl;
        cout << "Reajuste ganho: " << novo_salario << endl;
        cout << "Em percentual: " << reaj << " %" << endl;
    }
    else if(salario > 1200 && salario <= 2000.00){
        reaj = 7;
        novo_salario = (salario * reaj)/100;

        cout << "Novo salario: " << setprecision(2) << fixed << novo_salario+salario << endl;
        cout << "Reajuste ganho: " << novo_salario << endl;
        cout << "Em percentual: " << reaj << " %" << endl;
    }
    else{
        reaj = 4;
        novo_salario = (salario * reaj)/100;

        cout << "Novo salario: " << setprecision(2) << fixed << novo_salario+salario << endl;
        cout << "Reajuste ganho: " << novo_salario << endl;
        cout << "Em percentual: " << reaj << " %" << endl;
    }

    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1