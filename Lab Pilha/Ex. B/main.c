#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int comparapilha(pilha* a, pilha* b);

int main()
{
    pilha* a, *b;
    a = criar();
    b = criar();

    printf("%d", comparapilha(a, b));

    return 0;
}






int comparapilha(pilha* a, pilha* b){
    if(a == NULL || b == NULL) return 0;
    while(pilhavazia(a)!=1 && pilhavazia(b)!=1){
        int n, m;
        pop_(a, &n);
        pop_(b, &m);
        if(n!=m) return 0;
    }
    if(pilhavazia(a) && pilhavazia(b)) return 1;
    return 0;

}
