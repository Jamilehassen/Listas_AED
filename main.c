#include <stdio.h>
#include "lista.h"


int main(){
    Lista* l = NULL;
    Lista* l2 = NULL;
    Lista* l3 = NULL;
    Lista* invertida = NULL;
    Lista* concatena = NULL;
    Lista* intercalar = NULL;
    Lista* inter = NULL;
    Lista* concatena_rec = NULL;
    Lista* eli_rep = NULL;

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

    l2 = remover_rec(l2, 10);

    l3 = insere_ordenado(l3, 210);
    l3 = insere_ordenado(l3, 30);
    l3 = insere_ordenado(l3, 70);
    l3 = insere_ordenado(l3, 70);
    l3 = insere_ordenado(l3, 40);
    l3 = insere_ordenado(l3, 580);
    l3 = insere_ordenado(l3, 70);
    l3 = insere_ordenado(l3, 60);
    l3 = insere_ordenado(l3, 70);

    printf("\n-------------------------------------------\n");
    printf("INSERIR NA CABECA: ");
    imprimir(l);
    printf("\nINSERIR NA CAUDA: ");
    imprimir(l2);
    printf("\nINSERIR ORDENADO: ");
    imprimir(l3);
    printf("\nINVERTER LISTA: ");
    //invertida = inverte(l); ---> AQUI ELE NAO FUNCIONA A SOMA PQ MEXE DIRETAMENTE COM A LISTA, ELE MODIFICA A LISTA.
    //mprimir(invertida);
    invertida = inverter_sem_modificacao(l);
    imprimir(invertida);

    printf("\nCONCATENAR LISTAS: ");
    concatena = concatenar(l2, l);
    imprimir(concatena);

    printf("\nINTERCALAR LISTAS: ");
    intercalar = merge(l,l2);
    imprimir(intercalar);

    printf("\nSOMA INTERVALO: ");
    printf("%d", soma_intervalo(l,3,6));

    printf("\nINTERCALAR LISTAS RECURSIVO: ");
    inter = intercala(l,l2);
    imprimir(inter);
    
    printf("\nCONCATENAR LISTAS RECURSIVO: ");
    concatena_rec = concatenar_rec(l2, l);
    imprimir(concatena_rec);

    printf("\nCONTA OCORRENCIAS: %d", cont_ocorrencias(l3, 70));

    printf("\nELIMINAR REPETIDOS: ");
    eli_rep = elimina_repetidos(l3);
    imprimir(eli_rep);

    printf("\n-------------------------------------------\n");

    return 0;
}