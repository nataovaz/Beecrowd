#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v;
int ok;

int dfs (int x){
    int i, n, peso, atual, total;

    n = (int) v[x].size();
    total = 1;
    for(i = 0; i < n; i++){
        atual = dfs(v[x][i]);
        if(!i)
            peso = atual;
        else if(atual != peso)
            ok = 0;
        total += atual;
    }

    return total;
}



int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;
    v.resize(n+1);

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v[b].push_back(a);
    }

    ok = 1;

    dfs(0);
    printf("%s\n", ok ? "bem" : "mal");

    return 0;
}