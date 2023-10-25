#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"




pilha* criar(){
    pilha* p;
    p = (pilha*) malloc(sizeof(pilha));
    p->topo = NULL;
    return p;
}

int push(pilha* p, int a){
    if(p == NULL) return 0;
    no* cl = (no*) malloc(sizeof(no));
    cl->valor = a;
    cl->prox = p->topo;
    p->topo = cl;
    return 0;
}

int pop(pilha* p){

    if(p == NULL) return -1;
    if(pilhavazia(p)) return 0;
    no* cl = p->topo;
    p->topo = cl->prox;
    free(cl);
    return 0;
}

int pop_(pilha* p, int* a){

    if(p == NULL) return -1;
    if(pilhavazia(p)) return 0;
    no* cl = p->topo;
    *a = cl->valor;
    p->topo = cl->prox;
    free(cl);
    return 0;
}


int pilhavazia(pilha* p){
    if(p == NULL) return 1;
    if(p->topo == NULL) return 1;
    return 0;
}


int tamanhopilha(pilha* p){

    if(p == NULL) return -1;
    if(pilhavazia(p)) return 0;

    pilha* aux;
    aux = criar();
    int a;
    int cont = 0;
    while(pilhavazia(p)!=1){
            pop_(p, &a);
            push(aux, a);
            cont ++;
    }
    while(pilhavazia(aux)!=1){
            pop_(aux, &a);
            push(p, a);
    }
    return cont;

}

pilha* invertepilha(pilha* p){
    int qtd = tamanhopilha(p);
    pilha* b = criar();
    for(int i; i<qtd; i++){

        int aux;
        pop_(p, &aux);
        push(b, aux);
    }
    return b;



}
