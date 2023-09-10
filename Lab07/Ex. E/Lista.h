#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#define MAX 2000

typedef struct Letra
{
    int quant;
    char a;

}letra;

typedef struct  Lista lista;
lista *criar();
mostrarlista(lista* l);
int contaitem (lista* l, char texto);

#endif // LISTA_H_INCLUDED
