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

Lista* inverte(Lista* l);

Lista* inverter_sem_modificacao(Lista* l);

Lista* concatenar(Lista* l1, Lista* l2);

Lista* merge(Lista* l1, Lista* l2);

void imprimir(Lista* l);

#endif