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

 pilha* p = criar();
 if(a == 0) push(p, 0);

 else {
 while(a > 0){
        push(p, a%2);
        a = a/2;
 }
 }
 return p;

}
