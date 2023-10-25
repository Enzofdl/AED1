#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED



struct no{
int valor;
struct no* prox;
};

typedef struct no no;

struct pilha{
struct no* topo;
};

typedef struct pilha pilha;

pilha* criar();
int push(pilha* p, int a);
int pop(pilha* p);
int pilhavazia(pilha* p);
int tamanhopilha(pilha* p);


#endif // PILHA_H_INCLUDED
