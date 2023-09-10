#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#define MAX 100

struct aluno
{
    int mat;
    char nome[30];
    float n1;
} Aluno;

typedef struct lista Lista;
Lista *criar(int tamanho);
void limpar(Lista *l);
int inserirInicio(Lista *l,Alunoit);
int inserirFim(Lista *l,Alunoit);
int inserirPosicao(Lista *l,Alunoit,intpos);
int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l,intpos);
int removerItem(Lista *l,Alunoit);
int buscarItemChave(Lista *l,int chave,Aluno *retorno);
int buscarPosicao(Lista *l,int posicao,Aluno *it);
int listaVazia(Lista *l);
int listaCheia(Lista *l);
int tamanho(Lista *l);
void mostrar(Lista *l);
int contemItem(Lista* l, Aluno it);
Lista* Reversa(Lista* l);
int contaItem(Lista* l, Aluno it);

#endif // LISTA_H_INCLUDED
