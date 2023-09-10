typedef struct lista
{
    int total;
    Aluno valores[MAX];
} Lista;
Lista *criar(int tamanho)
{
    Lista *l = (Lista *)malloc(tamanho*sizeof(Lista));
    l->total = 0;
    return l;
}
void limpar(Lista *l)
{
    if (l != NULL) l->total = 0;
}
int inserirInicio(Lista *l, Aluno it)
{
    int i;
    if (l == NULL) return 2;
    if (listaCheia(l) == 0) return 1;
    for (i=l->total; i>0; i--)
    {
        l->valores[i] = l->valores[i-1];
    }
    l->valores[0] = it;
    l->total++;
    return 0;
}
int inserirFim(Lista *l, Aluno it)
{
    if (l == NULL) return 2;
    if (listaCheia(l) == 0) return 1;
    l->valores[l->total] = it;
    l->total++;
    return 0;
}
int buscarItemChave(Lista *l, int chave,Aluno *retorno)
{
    int i;
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return 1;
    for (i=0; i<l->total; i++)
        if (l->valores[i].mat == chave)
        {
            *retorno = l->valores[i];
            return 0;
        }
    return -1;
}
int listaVazia(Lista *l)
{
    if (l == NULL) return 2;
    if (l->total == 0) return 0;
    else return 1;
}
int removerInicio(Lista *l)
{
    int i;
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return 1;
    for (i=0; i<l->total-1; i++)
        l->valores[i] = l->valores[i+1];
    l->total--;
    return 0;
}
int removerFim(Lista *l)
{
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return 1;
    l->total--;
    return 0;
}
int listaCheia(Lista *l)
{
    if (l == NULL) return 2;
    if (l->total == MAX) return 0;
    else return 1;
}
void mostrar(Lista *l)
{
    int i;
    if (l != NULL)
    {
        printf("[");
        for (i=0; i<l->total; i++)
        {
            printf(" {%d, ",l->valores[i].mat);
            printf("%s, ",l->valores[i].nome);
            printf("%.2f} ",l->valores[i].n1);
        }
        printf("]\n");
    }
}
    int inserirPosicao(Lista *l,Aluno it,int pos){
        if(listaCheia()== 0) return 1;
        if(l == NULL) return 2;
        int i = 0;
        for(i=total; i>pos; i--){
            l->valores[i] == l->valores[i-1];
        }
        l->valores[i] = it;
        total++;
        return 0;
    }
    int removerPosicao(Lista* l,int pos){
        int i;
        if(listaVazia()== 0) return 1;
        if(l == NULL) return 2;
    for(i=pos; i<total-1; i++){
            l->valores[i] == l->valores[i+1];
        }
        total --;
        return 0;
    }
     int removerItem(Lista* l, Aluno it){
        if(listaVazia()== 0) return 1;
        if(l == NULL) return 2;
        for(i = 0; i<total; i++){
            if(it.mat == (l->valores[i]).mat) {removerPosicao(l, i); return 0;}
        }
        return 3;
     }

    int buscarPosicao(Lista *l,int posicao,Aluno *it){
        if(listaVazia()== 0) return 1;
        if(l == NULL) return 2;
        if(pos>=total) return 1;
        it = &(l->valores[pos]);
        return 0;

    }

    int contemItem(Lista* l, Aluno it){
     if(listaVazia()== 0) return 1;
     if(l == NULL) return 1;
     for(i = 0; i<total; i++){
        if(it.mat == (l->valores[i]).mat)  return 0;
     }
    return 1;
    }

    Lista* Reversa(Lista* l){
        Lista* a;
        a->total = l->total;
        int i, j=total-1;
        for(i=0; i<total/2; i++){
            a->valores[j] = l->valores[i];
            j--;
        }
        return a;
    }
    int contaItem(Lista* l, Aluno it){
        if(listaVazia()== 0) return 0;
     if(l == NULL) return 0;
     int contador = 0;
     for(i = 0; i<total; i++){
        if(it.mat == (l->valores[i]).mat)  contador ++;;
     }
     return contador;
    }


