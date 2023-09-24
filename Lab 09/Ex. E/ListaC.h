#ifndef LISTAC_H_INCLUDED
#define LISTAC_H_INCLUDED

typedef struct aluno{
char nome[50];
int mat;
float n1;

}aluno;

typedef struct lista lista;

lista* criar();
void limpar(lista* l);
int tamanho(lista* l);
int inseririnicio(lista* l, aluno it);
int inserirfim(lista* l, aluno it);
int inserirposicao(lista* l, aluno it, int pos);
int removerinicio(lista* l);
int removerfim(lista* l);
int removerposicao(lista* l, int pos);
int removermat(lista* l, int mat);
int removeritem(lista* l, aluno it);
int buscaritem(lista* l, aluno it);
int buscarpos(lista* l, int pos, aluno* it);
int listavazia(lista* l);
void mostrar(lista* l);
void removecentro(lista* l);
lista* juntal(lista* l, lista* k);
int contaOcorrencias(lista* l, aluno it);
int inserirfimunico(lista* l, aluno it);


#endif // LISTAC_H_INCLUDED
