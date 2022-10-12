#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    

    for (long long int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout << i << "^2 = " << pow(i,2) << endl;
            
        }
    }


    return 0;
    
}