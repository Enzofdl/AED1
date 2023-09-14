#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

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

lista* criar();
int listavazia(lista* l);
int inseririnicio(lista* l, aluno it);
int inserirfim(lista* l, aluno it);
int inserirpos(lista* l, aluno it);
int removerinicio(lista *l);
int removerfim(lista* l);
int removerpos(lista* l);
int removeritem(lista* l);
int buscarpos(lista* l, aluno* retorno);




#endif // LISTA_H_INCLUDED;
