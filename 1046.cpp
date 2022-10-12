#include <bits/stdc++.h>

using namespace std;

int main(){

    int h1, h2;
    int ht = 0;
    cin >> h1 >> h2;
    

    if (h1 >= h2){
        if(h1 == h2){
            ht = 24;
        }else{
            ht = (h1-h2)-24;
        }
        
    }else{

        ht = (h2-h1);
        
    }
    
    cout << "O JOGO DUROU " << abs(ht) << " HORA(S)" << endl;
    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1