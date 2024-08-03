#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int vazia(Lista *l){
    return (l == NULL);
}

Lista* insere(Lista* l, int x){
    Lista* aux = (Lista*)malloc(sizeof(Lista));
    aux->info = x;
    aux->prox = l;
    return aux;
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

Lista* insere_ordenado(Lista* l, int info){
    if(l == NULL){
        Lista* aux = (Lista*)malloc(sizeof(Lista));
        aux->info = info;
        aux->prox = NULL;
        return aux;
    }
    if(info < l->info){
        Lista* aux = (Lista*)malloc(sizeof(Lista));
        aux->info = info;
        aux->prox = l;
        return aux;
    }else l->prox = insere_ordenado(l->prox, info);
}

// 
Lista* append(Lista* l1, Lista* l2){

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

Lista* remover_rec(Lista* l, int info){
    if(vazia(l))    return NULL;
    if(l->info == info){
        Lista* aux = l;
        aux = aux->prox;
        free(l);
        return aux;
    } else l->prox = remover_rec(l->prox, info);
}

 Lista* elimina_repetidos(Lista* l){
    Lista* ant = l;
    while(ant != NULL){
        Lista* atual = ant;
        while(atual->prox != NULL){
            if(atual->prox->info == ant->info){
                Lista* aux = atual->prox;
                atual->prox = atual->prox->prox;
                free(aux);
            }else atual = atual->prox;
        }
        ant = ant->prox;
    }
    return l;
 }

void imprimir(Lista* l){
    if(!vazia(l)){
        printf("%d ", l->info);
        return imprimir(l->prox);
    }
}

// Aqui não modifica a lista original e de forma recursiva
Lista* inverter_sem_modificacao(Lista* l){
    if(vazia(l)) return NULL;
    Lista* ivt = inverter_sem_modificacao(l->prox);
    Lista* aux = insere_cauda(ivt, l->info);
    return aux;
}

// Aqui modifica a lista original e de forma iterativa
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

// Concatena duas listas forma iterativa 
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

// fazer uma função que clona a lista original para outra

// Concatena duas listas de forma recursiva
Lista* concatenar_rec(Lista* l1, Lista* l2){

    if(vazia(l1)) return l2;
    if(vazia(l2)) return l1;
  
    if(!vazia(l1)) {
        Lista* c = concatenar_rec(l1->prox, l2);
        Lista* aux = insere(c, l1->info);
    }
    Lista* c = concatenar_rec(l1, l2->prox);
    Lista* aux = insere(c, l2->info);

    return aux;
}

// Intercala duas listas forma iterativa sem alterar a lsita original
Lista* merge(Lista* l1, Lista* l2){
    Lista *aux = NULL;

    while(!vazia(l1) && !vazia(l2)){
        aux = insere_cauda(aux, l1->info);
        l1 = l1->prox;
        aux = insere_cauda(aux, l2->info);
        l2 = l2->prox;
    }
    while(!vazia(l1) && vazia(l2)){
        aux = insere_cauda(aux, l1->info);
        l1 = l1->prox;
    }
    while(vazia(l1) && !vazia(l2)){
        aux = insere_cauda(aux, l2->info);
        l2 = l2->prox;
    }
    return aux;
}

// Intercala duas listas forma recursivo sem alterar a lsita original
Lista* intercala(Lista* l1, Lista* l2){
    if(vazia(l1)) return l2;
    if(vazia(l2)) return l1;
    Lista* inter = insere(inter, l1->info);
    inter->prox = insere(inter->prox, l2->info);
    inter->prox->prox = intercala(l1->prox, l2->prox);

    return inter;
}

// Soma os valores de um intervalo fechado entre a e b contando eles mesmos
int soma_intervalo(Lista* l, int a, int b){
    if(vazia(l))    return 0;
    if(l->info >= a && l->info <= b){
        return l->info + soma_intervalo(l->prox, a, b);
    }else return soma_intervalo(l->prox, a, b);
}

int cont_ocorrencias(Lista* l, int x){
    if(l == NULL)   return 0;
    if(x == l->info)    return 1 + cont_ocorrencias(l->prox, x);
    else return cont_ocorrencias(l->prox, x);
}