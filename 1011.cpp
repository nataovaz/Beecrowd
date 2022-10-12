#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double pi = 3.14159, r;

    cin >> r;

    double res = ((double)4/3) * pi * pow(r, 3);
    printf("VOLUME = %.3lf\n", res);

}