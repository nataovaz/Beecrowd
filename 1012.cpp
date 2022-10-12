#include <bits/stdc++.h>


using namespace std;

int main(){
    double A, B, C;
    double pi = 3.14159;

    cin >> A >> B >> C;
    cout << setprecision(3) << fixed;
    cout << "TRIANGULO: " << (A*C)/2 << endl;
    cout << "CIRCULO: " << pi * pow(C, 2) << endl;
    cout << "TRAPEZIO: " << ((A+B)*C)/2 << endl;
    cout << "QUADRADO: " << pow(B, 2) << endl;
    cout << "RETANGULO: " << A*B << endl;
    

    return 0;
}