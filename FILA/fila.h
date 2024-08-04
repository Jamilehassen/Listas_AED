#ifndef fILA_H
#define FILA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// estrutura de no para lista encadeada
 struct no {
    int info;
    struct no *prox;
 };

 // estrutura para fila
 struct fila {
    int n; // numero de elementos
    struct no* prim;
    struct no* ultimo;
 };

struct fila* cria_fila_vazia();

int vazia(struct fila* f);

void enqueue(struct fila* f, int info);

 void dequeue(struct fila* f);

void imprimir(struct fila* f);


#endif