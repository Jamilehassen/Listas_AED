#ifndef lISTA_H
#define LISTA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
} lista;

int vazia(lista *l);

lista* insere(lista* l, int x);

lista* remove(lista* l, int x);

#endif