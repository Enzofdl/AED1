#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilha.h"

pilha* binario(int a);

int main()
{
    int a = 4;
    pilha* p;
    p = binario(a);
    while(pilhavazia(p)!=1){
        int aux;
        pop_(p, &aux);
        printf("%d", aux);

    }



    return 0;
}






pilha* binario(int a)
{
 int j;
 pilha* p = criar();
 while(a > 0){
    j = 0;
    while(j<1 && a>0){
        j++;
        a--;
    }
    push(p, j);
 }

 return p;


}
