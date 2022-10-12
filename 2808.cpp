#include <bits/stdc++.h>

int main(){

    char inicio[3] ;
    char destino[3];

    scanf("%s %s",inicio,destino);

    if (abs(inicio[0]-destino[0]) == 2 && abs(inicio[1]-destino[1]) == 1){
       printf("VALIDO\n");
    } else if(abs(inicio[0]-destino[0]) == 1 && abs(inicio[1]-destino[1]) == 2) {
       printf("VALIDO\n");
    } else {
        printf("INVALIDO\n");
    }

    return 0;
}