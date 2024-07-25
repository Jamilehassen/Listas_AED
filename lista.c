#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int vazia(Lista *l){
    if(l == NULL)
        return 1;
    else
        return 0;
}

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
    if(!vazia(l)){
        printf("%d ", l->info);
        return imprimir(l->prox);
    }
}

Lista* insere_cauda(Lista* l, int info){
    if (l == NULL) {
        Lista* aux = (Lista*)malloc(sizeof(Lista));
        aux->info = info;
        aux->prox = NULL;
        return aux;
    } else
        l->prox = insere_cauda(l->prox, info);
    return l;
}

// Aqui não modifica a lista original
Lista* inverter_sem_modificacao(Lista* l){
    if(vazia(l)) return NULL;
    else{
        Lista* ivt = inverter_sem_modificacao(l->prox);
        Lista* aux = insere_cauda(ivt, l->info);
        return aux;
    }
}

// Aqui modifica a lista original
Lista* inverte(Lista* l){
    Lista * ant = NULL, *atual = l, *seg = NULL;

    while(atual != NULL){
        seg = atual->prox;
        atual->prox = ant;
        ant = atual;
        atual = seg;
    }
    return ant;
}

Lista* concatenar(Lista* l1, Lista* l2){
    Lista* aux = NULL;
    while(!vazia(l1)){
        aux = insere_cauda(aux, l1->info);
        l1 = l1->prox;
    }
    while(!vazia(l2)){
        aux = insere_cauda(aux, l2->info);
        l2 = l2->prox;
    }
    return aux;
}

// Intercala duas listas
Lista* merge(Lista* l1, Lista* l2){

}
