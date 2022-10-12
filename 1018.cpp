#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;

    int hora, minuto, sec;
    int res;

    cin >> n;
    hora = n / 3600;
        res = n % 3600;
    minuto = res / 60;
        res = res % 60;
    sec = res;

    printf("%d:%d:%d\n", hora, minuto, sec);


    return 0;
} 