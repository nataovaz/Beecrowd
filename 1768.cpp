#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    while(cin >> x && !cin.eof()){


        for(int i = 0; i < x; i += 2){
            for(int j = 0; j < (x - i)/2; j++)
                cout << " ";
            
            for(int j = i; j >= 0; j--)
                cout << "*";
            
            cout << endl;
        }

        for (int i = 0; i < x/2; i++)
            cout << " ";
        cout << "*\n";

        for(int i = 1; i< x/2; i++)
            cout << " ";

        cout << "***\n\n";
    }
}