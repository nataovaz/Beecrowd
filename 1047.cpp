#include <bits/stdc++.h>

using namespace std;

int main(){

    int h1, h2, m1, m2;
    int ht = 0, mt = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    

    if (h1 >= h2){
        if(h1 == h2 && m1 < m2){
            ht = 0;
        }else{
            if(h1 == h2){
                ht = 24;
            }else{
                ht = (h1-h2)-24;
            }
        }
        if(m1 >= m2){
            if(m1==m2){
                mt = 0;
            }else{
                mt = (m1-m2)-60;
                if(ht < 0){
                    ht += 1;

                }else
                    ht -= 1;
            }
        }else{
            mt = m2-m1;
        }

    }else{

        ht = (h2-h1);
        if(m1 >= m2){
            if(m1==m2){
                mt = 0;
            }else{
                mt = (m1-m2)-60;
                ht -=1;
            }
        }else{
            mt = m2-m1;
        }
    }
    cout << "O JOGO DUROU " << abs(ht) << " HORA(S) E " << abs(mt) << " MINUTO(S)" << endl;
    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1