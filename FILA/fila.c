#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int vazia(struct fila* f){
    return (f->n == 0);
}

struct fila* cria_fila_vazia(){
    struct fila* aux = (struct fila*)malloc(sizeof(struct fila));
    aux->prim = NULL;
    aux->ultimo = NULL;
    aux->n = 0;
    return aux;
}

void enqueue(struct fila* f, int info){
    struct no* aux = (struct no*)malloc(sizeof(struct no));
    aux->info = info;
    aux->prox = NULL;
    if(vazia(f)) f->prim = aux;
    else f->ultimo->prox = aux;
    f->ultimo = aux;
    f->n++;
}

void imprimir(struct fila* f){
    if (vazia(f)) printf("A fila está vazia.\n");
    struct no* aux = f->prim;
    while(aux != NULL){
        printf("%d ", aux->info);
        aux = aux->prox;
    }
    printf("\nELEMENTOS: %d", f->n);
}

 void dequeue(struct fila* f){
    if(!vazia(f)){
        struct no* aux = f->prim;
        if(f->prim == f->ultimo)    f->ultimo = NULL; // SÓ TEM UM ELEMENTO
        f->prim = f->prim->prox;
        free(aux);
        f->n--;
    }
 }
