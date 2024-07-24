#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


Lista* insere(Lista* l, int x){
    Lista* aux = (Lista*)malloc(sizeof(Lista));
    aux->info = x;
    aux->prox = l;
    return aux;
}

Lista* remover(Lista* l, int x){
    Lista* ant = l, *atual = l;

    while(atual != NULL && atual->info != x){
        ant = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(atual == l) l = l->prox;
        else ant->prox = atual->prox;
        free(atual);
    }else printf("Valor nao encontrado\n");
    return l;
}

void imprimir(Lista* l){
    printf("%d ", l->info);
    if(l->prox != NULL)
        imprimir(l->prox);
}

// TESTE
