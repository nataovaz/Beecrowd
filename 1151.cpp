#include <bits/stdc++.h>

using namespace std;

int main (){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x, x1 = 0, x2 = 1, x3 = 0;
    
    cin >> x;

    if (x == 0 or x == 1){
        printf("%d", x1);
        return 0;
    }

 
    printf("%d ", x1);

    for(int i = 2; i <= x; i++){

        if(i < x){
                x1 = x2;
                x2 = x3;
                x3 = x1 + x2;
                printf("%d ", x3);
        }
        if(i == x){
            printf("%d\n", x2 + x3);
            break;
        }
    }
  

}

