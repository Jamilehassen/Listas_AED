#include <stdio.h>
#include "lista.h"


int main(){
    Lista* l = NULL;
    Lista* l2 = NULL;
    Lista* invertida = NULL;
    Lista* concatena = NULL;

    l = insere(l, 1);
    l = insere(l, 2);
    l = insere(l, 3);
    l = insere(l, 4);
    l = insere(l, 5);
    l = insere(l, 6);
    l = insere(l, 7);
    l = insere(l, 8);

    l = remover(l, 1);
    l = remover(l, 8);
    l = remover(l, 5);

    l2 = insere_cauda(l2, 9);
    l2 = insere_cauda(l2, 10);
    l2 = insere_cauda(l2, 11);
    l2 = insere_cauda(l2, 12);
    l2 = insere_cauda(l2, 13);
    l2 = insere_cauda(l2, 14);

    printf("INSERIR NA CABECA: ");
    imprimir(l);
    printf("\nINSERIR NA CAUDA: ");
    imprimir(l2);
    printf("\nINVERTER LISTA: ");
    //invertida = inverte(l);
    ///imprimir(invertida);
    invertida = inverter_sem_modificacao(l);
    imprimir(invertida);

    printf("\nCONCATENAR LISTA: ");
    concatena = concatenar(l2, l);
    imprimir(concatena);

    return 0;
}