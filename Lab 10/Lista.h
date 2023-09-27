#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


typedef struct aluno{
char nome[30];
int mat;
float nota;
};aluno

lista* criarlista();
int inserir(lista *l, aluno it);
int removermat(lista* l, int mat);
int listavazia(lista* l);
int mostrar(lista *l);
int mostrarnota(lista* l);
int limparlista(lista* l);

#endif // LISTA_H_INCLUDED
