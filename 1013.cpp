#include <bits/stdc++.h>


using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;
    vector<int> maior;
    maior.push_back(A), maior.push_back(B), maior.push_back(C);
    sort(maior.begin(), maior.end());

    cout << maior.back() << " eh o maior" << endl;
    
    

    return 0;
}