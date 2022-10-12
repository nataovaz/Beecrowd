#include <bits/stdc++.h>

using namespace std;

int main (){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<pair<int, float>> v;

    float x;

    for(int i = 0; i < 100; i++){
        cin >> x;
        if(x <= 10){
            v.emplace_back(i, x);
        }
                 
    }

   for(int i = 0; i < v.size(); i++){
    

        printf("A[%d] = %.1f\n", v[i].first, v[i].second);
   }

}

