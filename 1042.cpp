#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1, x2, x3;
    vector<int> v1;
    cin >> x1 >> x2 >> x3;

    
    v1.push_back(x1);
    v1.push_back(x2);
    v1.push_back(x3);
    
    sort(v1.begin(), v1.end());
    for(int i = 0; i < 3; i++)
        cout << v1[i] << endl;
    cout << endl;
    cout << x1 << endl << x2 << endl << x3 << endl;

    return 0;

}