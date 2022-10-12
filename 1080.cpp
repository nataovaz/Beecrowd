#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec, test;
    vec.resize(100);
    test.resize(100);
    int maior, idx;

    for(int i = 0; i < 100; i++){
        cin >> vec[i];
        test[i] = vec[i];
        
    }


    sort(vec.begin(), vec.end());


    maior = vec.back();

    for(int i = 0; i < test.size(); i++){
        if(maior == test[i]){
            idx = i+1;
        }
        
        
    }

    cout << maior << endl;
    cout << idx << endl;

   
}