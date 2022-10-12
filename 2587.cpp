#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    string x1, x2, x3;
    char res;
    cin >> c;
    while (c > 0)
    {
        cin >> x1;
        cin >> x2;
        cin >> x3;

        for (int i = 0; i < x1.size() && x2.size() && x3.size(); i++)
        {
            if(x3[i] == '_'){
                if(x1[i] == x2[i]){
                    cout << x1[i];
                    cout << endl;
                    cout << x2[i];
                    cout << endl;
                    res = 'Y';
                    break;
                }
                else{
                    res = 'N';
                    break;
                   
                }
            }
        }
        cout << res << endl;
        c--;
    }
    return 0;
}