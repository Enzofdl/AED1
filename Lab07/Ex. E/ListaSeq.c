typedef struct Lista
{
    int total;
    letra* letras;
} lista;


lista *criar()
{
    lista *l = (lista *) malloc(sizeof(lista));
    if (l != NULL) l->total = 0;
    l->letras = (letra*) calloc(1, sizeof(letra));
    (l->letras[1]).a = 'a';
    return l;
}

int contaitem (lista* l, char texto){
    int i = 0;
    for(i = 0; i< total; i++){
            if((l->letras[i]).a == texto){ (l->letras).quant++; return 0;}
    }
    total++;
    l->letras = (letra*) realloc(letras, total*sizeof(letra));
    (l->letras[i]).a == texto;
    (l->letras[i]).quant ++;
    return 0;
}

void mostralista(lista* l){
    int i = 0;
    for(i = 0; i<total; i++){
        printf("A letra %c aparece %d vezes!\n", (l->letras[i]).a, (l->letras[i]).quant);

    }
}




