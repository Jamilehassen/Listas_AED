#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int vazia(Pilha* p){
    return (p->topo == NULL);
}

Pilha* criar_pilha_vazia(){
    Pilha* aux = (Pilha*)malloc(sizeof(Pilha));
    aux->topo = NULL;
    return aux;
}

Pilha* push(Pilha* p, int info){
    struct no* aux = (struct no*)malloc(sizeof(struct no));
    aux->info = info;
    aux->prox = p->topo;
    p->topo = aux;
    return p;
}

Pilha* pop(Pilha* p){
    if(!vazia(p)){
        struct no* aux = p->topo;
        if(p->topo->prox == NULL)   return NULL;
        else p->topo = p->topo->prox;
        free(aux);
        return p;
    }
}

int topo(Pilha* p){
    if(vazia(p)) return -1;
    else return p->topo->info;
}

void imprime(Pilha* p){
    if(!vazia(p)){
        struct no* aux = p->topo;
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->prox;
        }
    }
    printf("\n");
}