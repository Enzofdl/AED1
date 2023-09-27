
lista* criarlista(){
    lista* l = (lista*) malloc(sizeof(lista));
    lista->inicio = NULL;
  return l;

}

int inserir(lista *l, aluno it){
if(l == NULL)return 1;
no* cl, *aux;
cl = (no*) malloc(sizeof(no));
if(listavazia(l) == 0){
    cl->ant = NULL;
    cl->prox = NULL;
    cl->valor = it;
    l->inicio = cl;
    return 0;
}
aux = l->inicio;
while(aux->valor.mat<it.mat && aux->prox!=NULL){
    aux = aux->prox;
}

 // terminar



}
int removermat(lista* l, int mat);
int listavazia(lista* l);
int mostrar(lista *l);
int mostrarnota(lista* l);
int limparlista(lista* l);
