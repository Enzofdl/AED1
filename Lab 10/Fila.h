#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX 100

struct Fila{
int inicio;
int fim;
int qtd;
int valor[MAX];

};

typedef struct Fila fila;

fila* criar();
int remover(fila* l);
int inserir(fila* l, int a);
int filacheia(fila* l);
int filavazia(fila* l);
fila* intercala(fila* a, fila* b);
int removeneg(fila* l);
void consultorio();



#endif // FILA_H_INCLUDED
