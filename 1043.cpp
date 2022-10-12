#include <bits/stdc++.h>

using namespace std;

int main(){

    double a,b,c;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b){
        double per = a + b + c;
        printf("Perimetro = %.1lf\n", per);

    }else{
        double ar = ((a + b)*c)/2;
        printf("Area = %.1lf\n", ar);}
    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1