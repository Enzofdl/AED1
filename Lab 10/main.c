#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main(){

int a;
aluno aux;
lista *l;
l = criarlista();

while(1){

    printf("Escolha uma Opcao para prosseguir:\n1 - Cadastrar aluno\n2 - Remover aluno\n3- Listar alunos cadastrados\n4 - Mostrar dados do aluno com maior nota\n5 - Remover todos os alunos\n7- Sair");
    scanf("%d", &a);
    if(a == 1){
        fgets(aux.nome, 30, stdin);
        scanf("%d %f", &aux.mat, &aux.nota);
        if(inserir(l, aux)) printf("Erro!\n");
        continue;
    }
    if(a == 2){
        scanf("%d", &aux.mat);
        if(removermat(l, aux.mat))printf("Erro!\n");
        continue;
    }
    if(a == 3){
        if(mostrar(l)) printf("Erro!\n");
        continue;
    }
    if(a == 4){
        if(mostrarnota(l)) printf("Erro!\n");
        continue;
    }
    if(a == 5){
        if(limparlista(l)) printf("Erro!\n");
        continue;
    }
    if(a == 7) break;
    printf("Opcao Invalida!\n");

}

return 0;
}
