#include "Fila.h"






// EX A
fila* criar(){
fila* l=(fila*)malloc(sizeof(fila));

l->inicio=0;
l->fim=0;
l->qtd=0;


return l;

}

int remover(fila* l, int* a){

if(l==NULL) return -1;
if(filavazia(l))return 1;

*a = l->valor[l->inicio];
l->inicio = (l->inicio+1) % 100;
l->qtd--;


return 0;
}

int inserir(fila* l, int a){

    if(l==NULL) return -1;
    if(filacheia(l))return 1;

    l->valor[l->fim] = a;
    l->fim = (l->fim+1) % 100;
    l->qtd++;
    return 0;
}

int filacheia(fila* l){
if(l->qtd == 100) return 1;
return 0;
}
int filavazia(fila* l){
if(l->qtd == 0) return 1;
return 0;
}





// EX B







fila* intercala(fila* a, fila* b){

if(a == NULL && b == NULL) return NULL;
if(a == NULL) return b;
if(b == NULL) return a;

fila* c = criar();
int aux1,aux2;

int quant = a->qtd + b->qtd;

while(quant > 0){
    if(remover(a, &aux1) == 0){inserir(c, aux1); quant --;}

    if(remover(b, &aux2) == 0){inserir(c, aux2);quant --}
}

return c;
}



// EX C






int removeneg(fila* l){
    if(l==NULL) return -1;
    int quant = l->qtd;
    int aux;
    while(quant>0){
        remover(l, &aux);
        if(aux >= 0) inserir(l, aux);
        quant--;
    }
    return 0;
    }






// EX D



void consultorio(){

printf("Bem vindo ao escritorio do doutor pinto\n");
int opcao;
int contador = 0, buffer;
char a[100];
fila* l = criar();

while(1){

    printf("Voce deseja:\n1 - Inserir novo cliente\n2 - Chamar proximo da fila\n3 - Encerrar Expediente\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o nome do cliente?\n");
        scanf("%s", &a);
        printf("A senha de %s eh %d", a, contador);
        inserir(l, contador);
        contador++;
    }
    else if(opcao == 2){

        if(remover(l, &buffer))printf("%d\n", buffer);
        else ("Todos os clientes ja foram atendidos\n");

    } else if(opcao  == 3) {
        printf("Tem certeza que deseja sair?\n1 - Sim\n");
        scanf("%d", &opcao);
        if(opcao == 1) break;
    }
    else printf("Opcao invalida!\n");

}

}


