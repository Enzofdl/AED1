#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilha.h"

int verificamat(char* s);
void removepos(char* s, int pos);

int main()
{
    char a[20] = "(){}";
    pilha* p;
    if(verificamat(a)) return printf("Eh certa");
    return printf("Incorreta");



    return 0;
}





void removepos(char* s, int pos){
    for(pos; pos<strlen(s); pos++){
        s[pos] = s[pos+1];
    }
}

int verificamat(char* s){
    if(strlen(s)%2 == 1) return 0;
    if(strlen(s) == 0) return 1;
    pilha* p = criar();
    int aux;
    int i, j;
    for(i = 0; i<strlen(s); i++){
        push(p, s[i]);
        for(j = i+1; j<strlen(s); j++){
            pop_(p, &aux);
            if(aux == s[j]+1 || aux == s[j]+2){
                removepos(s, j);
                break;
            }
            

        }
        if(j >= strlen(s)) return 0;

    }


    return 1;
}
