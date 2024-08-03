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

Lista* insere_ordenado(Lista* l, int info);

Lista* remover(Lista* l, int x);

Lista* remover_rec(Lista* l, int info);

Lista* elimina_repetidos(Lista* l);

Lista* inverte(Lista* l);

Lista* inverter_sem_modificacao(Lista* l);

Lista* concatenar(Lista* l1, Lista* l2);

Lista* concatenar_rec(Lista* l1, Lista* l2);

Lista* merge(Lista* l1, Lista* l2);

Lista* intercala(Lista* l1, Lista* l2);

int soma_intervalo(Lista* l, int a, int b);

void imprimir(Lista* l);

Lista* append(Lista* l1, Lista* l2);

int cont_ocorrencias(Lista* l, int x);

#endif