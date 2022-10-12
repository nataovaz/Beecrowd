#include <bits/stdc++.h>

using namespace std;

int main(){

    double a,b,c;
    cin >> a >> b >> c;

    if (a >= b + c or b >= a + c or c >= a + b){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    } else {

    if(pow(a,2) == pow(b,2) + pow(c,2) or pow(b,2) == pow(a,2) + pow(c,2) or pow(c,2) == pow(b,2) + pow(a,2)){
        cout << "TRIANGULO RETANGULO" << endl;

    }
    else if(pow(a,2) > pow(b,2) + pow(c,2) or pow(b,2) > pow(a,2) + pow(c,2) or pow(c,2) > pow(b,2) + pow(a,2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(pow(a,2) < pow(b,2) + pow(c,2) or pow(b,2) < pow(a,2) + pow(c,2) or pow(c,2) < pow(b,2) + pow(a,2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && a == c && c == b){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(a == b or a == c or c == b){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    }
    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1