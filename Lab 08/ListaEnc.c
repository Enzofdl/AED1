#include "Lista.h"


struct Aluno{
int mat;
char nome[30];
float n1;
};
typedef struct Aluno aluno;

struct no{

aluno valor;
no* posicao;
};
typedef struct no no;

struct lista{
no* inicio;
};
typedef struct lista lista;


lista* criar(){

    lista* l = (lista*) malloc (sizeof(lista));
    l->inicio = NULL;
    return l;
}


int listavazia(lista* l){
if(l == NULL) return 2;
if(l->inicio == NULL) return 0;
return 1;
}

int inseririnicio(lista* l, aluno it){
if(l == NULL) return 2;

no* auxiliar;
auxiliar = (no*) malloc(sizeof(no));
auxiliar->valor = it;
auxiliar -> posicao = l->inicio;
l->inicio = auxiliar;
 return 0;
};

int inserirfim(lista* l, aluno it){




};
int inserirpos(lista* l, aluno it);
int removerinicio(lista *l);
int removerfim(lista* l);
int removerpos(lista* l);
int removeritem(lista* l);
int buscarpos(lista* l, aluno* retorno);
