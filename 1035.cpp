#include <bits/stdc++.h>

using namespace std;

int main(){

    double A, B, C;
    cin >> A >> B >> C;
    if (A == 0.0 or B == 0.0 or C == 0.0)
    {
        cout << "Impossivel calcular\n";
        return 0;

    }

    double x1, x2;
    double delta = pow(B,2)-4*A*C;
    
    if(delta < 0)
        {
            cout << "Impossivel calcular\n";
            return 0;
        }


    x1= ((-B)-sqrt(delta))/(2*A);
    x2= ((-B)+sqrt(delta))/(2*A);

    printf("R1 = %.5lf\n", x2);
    printf("R2 = %.5lf\n", x1);

    return 0;
}