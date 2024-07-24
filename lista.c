#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

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

// TESTE
