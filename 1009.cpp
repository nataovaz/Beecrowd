#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome;
    double sal(0), mont(0);

    cin >> nome;
    cin >> sal >> mont;

    double res = (mont*0.15);
    double salT= sal + res;
    
    printf("TOTAL = R$ %.2lf\n", salT);



    return 0;
}