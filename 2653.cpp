#include <bits/stdc++.h>

using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string joias;
    set<string> dif;
    while(cin >> joias){
        dif.insert(joias);
    }
    cout << dif.size() << endl;

}