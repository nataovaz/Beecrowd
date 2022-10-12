#include <bits/stdc++.h>

using namespace std;

int main (){

    int n = 9;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    for(int i = 1; i <= n; i+=2){
        for(int j = i+6; j > i+3; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    
    }
}