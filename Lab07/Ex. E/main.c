#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

int main()
{
    char texto[2000];
    lista l;
    l = criar();
    fgets(texto, 2000, stdin);
    int i = 0;
    for(i; texto[i]!='\0'; i++){
        contaitem(l, texto[i]);
    }
    mostralista(l);
}
