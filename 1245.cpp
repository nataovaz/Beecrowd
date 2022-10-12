#include <bits/stdc++.h>

using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;



    while(cin >> n && !cin.eof()){

        vector<pair<int, int>> botas(61, {0, 0});
        for(int i = 0; i < n; i++){
            int tam; cin >> tam;
            char pe; cin >> pe;

            if(pe == 'E') botas[tam].first++;
            else botas[tam].second++;
        }
        int resp = 0;

        for(int i = 0; i < botas.size(); i++){
            resp += min(botas[i].first, botas[i].second);
        }

        cout << resp << endl;


    }
}