#include <bits/stdc++.h>

using namespace std;

int main (){



    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    int M, N, cont;

    while(cin >> M >> N){

        if(M <= 0 or N <= 0)
            break;
        
        if (M > N){
            cont = 0;
            for(int i = N; i <= M; i++){
                cout << i << " ";
                cont+=i;
            }
            cout << "Sum=" << cont << endl;
        }
        else{
            cont = 0;
            for(int i = M; i <= N; i++){
                cout << i << " ";
                cont+=i;
            }
            cout << "Sum=" << cont << endl;
        }
    }
}