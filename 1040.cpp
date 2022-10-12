#include <bits/stdc++.h>
using namespace std;

int main(){

    float n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    float media = (n1*2+n2*3+n3*4+n4)/(10.0);
    cout << "Media: " << setprecision(1) << fixed << media << endl;
    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    }
    else if(media >= 5.0){
        float exame;
        cin >> exame;
        
        cout << "Aluno em exame.\n";
        cout << "Nota em exame: "<< setprecision(1) << fixed << exame << endl;
        if((media + exame)/2.0 > 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << setprecision(1) << fixed << (media+exame)/2.0 << endl;
    }
    else{
        cout << "Aluno reprovado.\n";
    }
}