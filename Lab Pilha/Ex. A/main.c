#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    pilha* p;
    p = criar();
    push(p, 11);
    push(p, 34);
    pop(p);
    pop(p);
    push(p, 23);
    push(p, 45);
    pop(p);
    push(p, 121);
    push(p, 22);
    pop(p);
    pop(p);
    while(pilhavazia(p)!=1){
        int a;
        pop_(p, &a);
        printf("%d\n", a);
    }

    return 0;
}
