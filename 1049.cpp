#include <bits/stdc++.h>

using namespace std;


int main(){

    string x, resp = "";
    cin >> x;

    if(x == "vertebrado"){
        cin >> x;
        if(x == "ave"){
            cin >> x;
                if(x == "carnivoro"){
                    resp = "aguia";
                }
                if(x == "onivoro"){
                    resp = "pomba";
                }
        }
        if(x == "mamifero"){
            cin >> x;
            if(x == "onivoro"){
                    resp = "homem";
                }
                if(x == "herbivoro"){
                    resp = "vaca";
                }
        }
    }
    if(x == "invertebrado"){
        cin >> x;
        if(x == "inseto"){
            cin >> x;
            if(x == "hematofago"){
                resp = "pulga";
            }
            if(x == "herbivoro"){
                resp = "lagarta";
            }
        }
        if(x == "anelideo"){
            cin >> x;
            if(x == "hematofago"){
                resp = "sanguessuga";
            }
            if ( x == "onivoro"){
                resp = "minhoca";
            }
        }
    }

    cout << resp << endl;

    return 0;

}

// 6.0 4.0 2.0
// 6.0 4.0 2.1