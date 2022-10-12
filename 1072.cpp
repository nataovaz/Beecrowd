#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int contIn = 0, contOut = 0;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x >= 10 && x <= 20){
            contIn++;
        }
        else
            contOut++;
    }


    cout << contIn << " in" << endl;
    cout << contOut << " out" << endl;

    return 0;
}