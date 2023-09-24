#include <stdio.h>
#include <stdlib.h>
#include "listaC.h"
typedef struct no{

aluno valor;
struct no* prox;

}no;
typedef struct lista{
no* fim;

};

lista* criar(){
    lista* l = (lista*) malloc(sizeof(lista));
    l -> fim = NULL;
    return l;
}

void limpar(lista* l){
    if(listavazia(l) == 0) return 0;
    if(l == NULL) return 0;
    no* cl, *aux;
    cl = l->fim;
    while(cl -> prox != l -> fim){
        aux = cl;
        cl = cl->prox;
        free(aux);
    }
    free(cl);
    l->fim = NULL;

return 0;

}

int tamanho(lista* l){
    if(listavazia(l) == 0) return 0;
    if(l == NULL) return -1;
    int tam = 0;
    no* cl = l->fim;
    do{
        tam++;
        cl= cl->prox;

    }while(cl->prox!=l->fim);
    return tam;
}

int inseririnicio(lista* l, aluno it){
    if(l == NULL) return 1;
    no* cl;
    cl = (no*) malloc(sizeof(no));
    cl -> valor = it;
    cl -> prox = (l->fim)->prox;
    (l->fim)->prox = cl;
    return 0;
}

int inserirfim(lista* l, aluno it){
if(l == NULL) return 1;
    no* cl;
    cl = (no*) malloc(sizeof(no));
    cl -> valor = it;
    cl -> prox = l->fim;
    (l->fim)->prox = cl;
    l->fim = cl;
    return 0;
}

int inserirposicao(lista* l, aluno it, int pos){
if(l == NULL) return 1;
    no* cl, *aux;
    cl = (no*) malloc(sizeof(no));
    cl -> valor = it;
    cl->prox = (l->fim) -> prox;
    aux = cl->prox;
    int i =0;
    while(i<pos-1) {aux = aux->prox;i++;}
    cl->prox = aux->prox;
    aux->prox = cl;
    return 0;
}

int removerinicio(lista* l){
    if(listavazia(l) == 0) return 1;
    if(l == NULL) return -1;
    no* cl = (l->fim)->prox;
    no* aux = cl->prox;
    free(cl);
    (l->fim)->prox = aux;
    return 0;
}
int removerfim(lista* l){
    if(listavazia(l) == 0) return 1;
    if(l == NULL) return -1;
    no* cl = l->fim;
    while(cl->prox!=l->fim)cl = cl->prox;
    cl->prox = (l->fim)->prox;
    free(l->fim);
    l->fim = cl;
    return 0;
}

int removerposicao(lista* l, int pos){
    if(listavazia(l) == 0) return 1;
    if(l == NULL) return -1;
    no* cl, *aux;
    int i =0;
    while(i<pos-1) {cl = cl->prox;i++;}
    aux = (cl ->prox)->prox;
    free(cl->prox);
    cl->prox = aux;
    return 0;
}

int buscaritem(lista* l, aluno it){
    no* cl = l->fim;
    while(cl->prox != l->fim){
        if(cl->valor.mat == it.mat) return 0;
        cl = cl->prox;
    }
    return 1;
}

int buscarpos(lista* l, int pos, aluno* it){
if(listavazia(l) == 0) return 1;
if(l == NULL) return -1;
no* cl = (l->fim)->prox;
int i=0;
while(i<pos){cl = cl->prox;i++;}
*it = cl->valor;
    return 0;
}

int listavazia(lista* l){
if(l == NULL)return -1;
if(l->fim == NULL) return 0;
}
void mostrar(lista* l){

no* cl = l->fim;
do{
    printf("NOME: %s\nMATRICULA: %i\nNOTA: %lf\n", cl->valor.nome, cl->valor.mat, cl->valor.n1);
    cl = cl->prox;
}while(cl->prox!=l->fim && cl->prox != NULL);

}

void removecentro(lista* l){

    int i;
    i = tamanho(l);
    if(i%2 == 1)i++;
    removerposicao(l, i);

}


void removermat(lista* l, int mat){

int i, tam;
tam = tamanho(l);
no* cl = l->fim;
for(i=0; i<tam; i++){

    if(((cl->valor).mat) == mat){removerposicao(l, i); break;}
    cl = cl->prox;

}
}

void removeritem(lista* l, aluno it){
removermat(l, it.mat);
}
