#ifndef lISTA_H
#define LISTA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
} lista;

int vazia(lista *l){
    return (l == NULL);
}

lista* insere(lista* l, int x){
    lista* aux = (lista*)malloc(sizeof(lista));
    aux->info = x;
    aux->prox = l;
    return aux;
}

lista* remove(lista* l, int x){
    
}



#endif