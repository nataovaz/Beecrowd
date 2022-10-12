#include <bits/stdc++.h>

using namespace std;

int main (){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<long long int> v;
    long long int a = 0, b = 1, c = 0;

    for(int i = 0; i <= 60; i++){
        if(i == 0){
            v.push_back(a);
        }
        else{
            a = b;
            b = c;
            c = a + b;
            v.push_back(c);
        }
    }

    long long int x, n;
    cin >> x;

    while(x > 0){
    cin >> n;

    for(long long int i = 0; i <= v.size(); i++){
        if(i == n)
        cout << "Fib(" << n << ") = " << v[i] << endl;
    }

    x--;
    }


}

