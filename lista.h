#ifndef lISTA_H
#define LISTA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no {
 int info;
 struct no *prox;
 } Lista;

Lista* insere(Lista* l, int x);

Lista* insere_cauda(Lista* l, int info);

Lista* remover(Lista* l, int x);

void imprimir(Lista* l);

#endif